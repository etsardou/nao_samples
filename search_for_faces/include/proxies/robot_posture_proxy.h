#ifndef NAO_SAMPLES_CERTH_ROBOT_POSTURE_PROXY
#define NAO_SAMPLES_CERTH_ROBOT_POSTURE_PROXY

#include "proxies/proxy_base.h"

//~ https://community.aldebaran-robotics.com/doc/1-14/naoqi/motion/alrobotposture-api.html

class RobotPostureProxy : public ProxyBase<AL::ALRobotPostureProxy>
{
  public:
  
    RobotPostureProxy(boost::shared_ptr<AL::ALBroker> broker): 
      ProxyBase<AL::ALRobotPostureProxy>(broker){}
};

#endif

