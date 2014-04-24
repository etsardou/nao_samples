#ifndef NAO_SAMPLES_CERTH_MEMORY_PROXY
#define NAO_SAMPLES_CERTH_MEMORY_PROXY

#include "local_broker/local_broker.h"

//~ https://community.aldebaran-robotics.com/doc/1-14/naoqi/core/almemory.html

class MemoryProxy
{
  public:
    
    boost::shared_ptr<AL::ALMemoryProxy> memory_proxy; 
    
    MemoryProxy(void){}
    
    MemoryProxy(boost::shared_ptr<AL::ALBroker> broker);
};

#endif