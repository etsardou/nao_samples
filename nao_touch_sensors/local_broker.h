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
#include <alproxies/altexttospeechproxy.h>
#include <althread/almutex.h>
#include <alproxies/almemoryproxy.h> // To access ALMemory.  


  
class LocalBroker
{
  public:
  
    boost::shared_ptr<AL::ALBroker> broker;  
  
    LocalBroker(int argc, char* argv[]);
  
    void parseOpt
      (std::string* naoBrokerIP, int* naoBrokerPort, int argc, char* argv[]); 
      
    boost::shared_ptr<AL::ALBroker> makeLocalBroker
      (const std::string parentBrokerIP, int parentBrokerPort);
};

#endif
