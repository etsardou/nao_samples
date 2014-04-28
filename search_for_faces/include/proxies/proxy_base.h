#ifndef NAO_SAMPLES_CERTH_PROXY_BASE
#define NAO_SAMPLES_CERTH_PROXY_BASE

#include "local_broker/local_broker.h"

#include <alproxies/altexttospeechproxy.h> //!< To access text to speech proxy
#include <alproxies/almemoryproxy.h> // To access ALMemory.  
#include <alproxies/alsensorsproxy.h> // To access sensors proxy.  
#include <alproxies/almotionproxy.h> // To access sensors proxy. 
#include <alproxies/alrobotpostureproxy.h> // To set predefined robot postures 
#include <alproxies/alspeechrecognitionproxy.h>
#include <alproxies/alfacedetectionproxy.h>

template<class T> class ProxyBase
{
  public:
    boost::shared_ptr<T> proxy; 
    
    ProxyBase(boost::shared_ptr<AL::ALBroker> broker)
    {
      try 
      {  
        proxy = boost::shared_ptr<T>(new T(broker));  
      } 
      catch (const AL::ALError& e) 
      {  
        std::cerr << "Could not create Proxy: " << e.what() << std::endl;
        exit(3);
      }
    }  
    
    ProxyBase(void){}
};

#endif

