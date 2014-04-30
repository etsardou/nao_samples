#include <iostream>
// a clean way to process command-line arguments   
#include <boost/program_options.hpp> 
#include <boost/shared_ptr.hpp>  
#include <boost/thread/thread.hpp>

 // To handle Naoqi brokers (the local one and the one on NAO)  
#include <alcommon/albroker.h>
#include <alcommon/albrokermanager.h>
#include <alerror/alerror.h>  
#include <alproxies/almemoryproxy.h> // To access ALMemory.  
  
void parseOpt
  (std::string* naoBrokerIP, int* naoBrokerPort, int argc, char* argv[]) 
{  
  // shorter to write po than boost::program_options  
  namespace po = boost::program_options; 
  
  po::options_description desc("Allowed options");  
  desc.add_options()  
      ("pip", po::value<std::string>(naoBrokerIP)->default_value("nao.local"), 
        "IP of the parent broker. Default: nao.local")  
      ("pport", po::value<int>(naoBrokerPort)->default_value(9559), 
        "Port of the parent broker. Default: 9559");  
        
  // Map containing all the options with their values        
  po::variables_map vm; 
  // program option library throws all kind of errors, we just catch them all, \
  print usage and exit  
  try {  
    po::store(po::parse_command_line(argc, argv, desc), vm);  
    po::notify(vm);  
  } catch(po::error &e) {  
    std::cerr << e.what() << std::endl;  
    std::cout << desc << std::endl;  
    exit(1);  
  }  
}  
  
boost::shared_ptr<AL::ALBroker> makeLocalBroker
  (const std::string parentBrokerIP, int parentBrokerPort) 
{  
  // Name, IP and port of our local broker that talks to NAO's broker:  
  const std::string brokerName = "localbroker";  
  // FIXME: would be a good idea to look for a free port first  
  int brokerPort = 54000;   
  const std::string brokerIp   = "0.0.0.0";  // listen to anything  
  try {  
    boost::shared_ptr<AL::ALBroker> broker = 
      AL::ALBroker::createBroker(  
        brokerName,  
        brokerIp,  
        brokerPort,  
        parentBrokerIP,  
        parentBrokerPort,  
        0    // you can pass various options for the broker creation, \
                but default is fine  
      );  
    // ALBrokerManager is a singleton class (only one instance).  
    AL::ALBrokerManager::setInstance(broker->fBrokerManager.lock());  
    AL::ALBrokerManager::getInstance()->addBroker(broker);  
    return broker;  
  } catch(const AL::ALError& /* e */) {  
    std::cerr << "Failed to connect broker to: " << parentBrokerIP << 
      ":" << parentBrokerPort << std::endl;  
    AL::ALBrokerManager::getInstance()->killAllBroker();  
    AL::ALBrokerManager::kill();  
    exit(2);  
  }  
}  
  
int main(int argc, char* argv[]) {  
  boost::shared_ptr<AL::ALBroker> broker;  
  boost::shared_ptr<AL::ALMemoryProxy> memoryProxy;  
  
  std::string parentBrokerIP;  
  int parentBrokerPort;  
  
  // Need this to for SOAP serialization of floats to work  
  setlocale(LC_NUMERIC, "C"); 
  
  // IP and port of the broker currently running on NAO:  
  parseOpt(&parentBrokerIP, &parentBrokerPort, argc, argv);  
  
  // Our own broker, connected to NAO's:  
  broker = makeLocalBroker(parentBrokerIP, parentBrokerPort);  
  
  try 
  {  
    memoryProxy = boost::shared_ptr<AL::ALMemoryProxy>
      (new AL::ALMemoryProxy(broker));  
  } 
  catch (const AL::ALError& e) 
  {  
    std::cerr << "Could not create proxy: " << e.what() << std::endl;  
    return 3;  
  }  
  
  std::string sx = "Device/SubDeviceList/InertialSensor/AngleX/Sensor/Value";
  std::string sy = "Device/SubDeviceList/InertialSensor/AngleY/Sensor/Value";
  
  const std::string intertialSensorXKey(sx), intertialSensorYKey(sy);  
  
  while (true) {  
    std::cout << "X: " << memoryProxy->getData(intertialSensorXKey) << ", Y: "  
              << memoryProxy->getData(intertialSensorYKey) << std::endl;  
    
    //!< Sleep for 1 sec
    boost::this_thread::sleep(boost::posix_time::seconds(1));  
  }  
  
 return 0;  
}  
