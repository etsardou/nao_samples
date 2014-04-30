#ifndef NAO_SAMPLES_CERTH_MOTION_PROXY
#define NAO_SAMPLES_CERTH_MOTION_PROXY

#include "proxies/proxy_base.h"

//~ https://community.aldebaran-robotics.com/doc/1-14/naoqi/motion/almotion-api.html

class MotionProxy : public ProxyBase<AL::ALMotionProxy>
{
  public:
  
    MotionProxy(boost::shared_ptr<AL::ALBroker> broker): 
      ProxyBase<AL::ALMotionProxy>(broker){}
};

#endif

