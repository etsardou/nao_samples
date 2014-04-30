#ifndef NAO_SAMPLES_CERTH_MEMORY_PROXY
#define NAO_SAMPLES_CERTH_MEMORY_PROXY

#include "proxies/proxy_base.h"

//~ https://community.aldebaran-robotics.com/doc/1-14/naoqi/core/almemory.html

class MemoryProxy : public ProxyBase<AL::ALMemoryProxy>
{
  public:
  
    MemoryProxy(boost::shared_ptr<AL::ALBroker> broker): 
      ProxyBase<AL::ALMemoryProxy>(broker){}
};

#endif

/**
Sample:
  MemoryProxy mp(lb.broker);
  std::string sx = "Device/SubDeviceList/InertialSensor/AngleX/Sensor/Value";
  float tt = mp.proxy->getData(intertialSensorXKey);
**/
