#include "proxies/sensors_proxy.h"

SensorsProxy::SensorsProxy(boost::shared_ptr<AL::ALBroker> broker)
{
  try 
  {  
    proxy = 
      boost::shared_ptr<AL::ALSensorsProxy>(new AL::ALSensorsProxy(broker));  
  } 
  catch (const AL::ALError& e) 
  {  
    std::cerr << "Could not create SensorsProxy: " << e.what() << std::endl;  
    exit(3);
  }
}  
