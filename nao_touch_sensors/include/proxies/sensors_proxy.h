#ifndef NAO_SAMPLES_CERTH_SENSORS_PROXY
#define NAO_SAMPLES_CERTH_SENSORS_PROXY

#include "local_broker/local_broker.h"

//~ file:///home/manos/Desktop/nao_development/choregraphe-suite-1.14.5-linux64/doc/naoqi/sensors/alsensors-api.html

class SensorsProxy
{
  public:
    
    boost::shared_ptr<AL::ALSensorsProxy> proxy; 
    
    SensorsProxy(void){}
    
    SensorsProxy(boost::shared_ptr<AL::ALBroker> broker);
};

#endif

