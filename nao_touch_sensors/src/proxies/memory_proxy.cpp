#include "proxies/memory_proxy.h"

MemoryProxy::MemoryProxy(boost::shared_ptr<AL::ALBroker> broker)
{
  try 
  {  
    memory_proxy = boost::shared_ptr<AL::ALMemoryProxy>
      (new AL::ALMemoryProxy(broker));  
  } 
  catch (const AL::ALError& e) 
  {  
    std::cerr << "Could not create MemoryProxy: " << e.what() << std::endl;  
    exit(3);
  }
}  
