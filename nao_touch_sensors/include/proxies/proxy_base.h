#ifndef NAO_SAMPLES_CERTH_PROXY_BASE
#define NAO_SAMPLES_CERTH_PROXY_BASE

#include "local_broker/local_broker.h"

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

