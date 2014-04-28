#ifndef NAO_SAMPLES_CERTH_LOCAL_BROKER
#define NAO_SAMPLES_CERTH_LOCAL_BROKER

#include <iostream>
// a clean way to process command-line arguments   
#include <boost/program_options.hpp> 
#include <boost/shared_ptr.hpp>  
#include <boost/thread/thread.hpp>

 // To handle Naoqi brokers (the local one and the one on NAO)  
#include <alcommon/albroker.h>
#include <alcommon/albrokermanager.h>
#include <alerror/alerror.h> 
 
#include <alcommon/almodule.h>

#include <althread/almutex.h>

/**
@class LocalBroker
@brief The base class for a local broker. With this broker you can remotely \
connect to the real NAO's proxies  
**/
class LocalBroker
{
  private:
  
    /**
     * @brief Connects the local broker to the real NAO's broker through\
     *  BrokerManger
     */
    boost::shared_ptr<AL::ALBroker> makeLocalBroker
      (const std::string parentBrokerIP, int parentBrokerPort);
      
  public:
  
    //!< The local broker
    boost::shared_ptr<AL::ALBroker> broker;  
  
    /**
     * @brief The default contructor
     */
    LocalBroker(int argc, char* argv[]);
  
    /**
     * @brief Parses the input arguments to detect NAO's IP and port
     * @param naoBrokerIP [std::string*] The IP (default 169.254.40.81)
     * @param naoBrokerPort [std::string*] The port (default 9559)
     * @param argc [int] Number of input arguments
     * @param argv [char* []] The input arguments
     */
    void parseOpt
      (std::string* naoBrokerIP, int* naoBrokerPort, int argc, char* argv[]); 
      
    
};

#endif
