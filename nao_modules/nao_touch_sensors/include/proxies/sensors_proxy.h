#ifndef NAO_SAMPLES_CERTH_SENSORS_PROXY
#define NAO_SAMPLES_CERTH_SENSORS_PROXY

#include "proxies/proxy_base.h"

//~ file:///home/manos/Desktop/nao_development/choregraphe-suite-1.14.5-linux64/doc/naoqi/sensors/alsensors-api.html

class SensorsProxy: public ProxyBase<AL::ALSensorsProxy>
{
  public:
  
    SensorsProxy(boost::shared_ptr<AL::ALBroker> broker): 
      ProxyBase<AL::ALSensorsProxy>(broker){}
};

#endif

