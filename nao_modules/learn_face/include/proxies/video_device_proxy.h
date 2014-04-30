#ifndef NAO_SAMPLES_CERTH_VIDEO_DEVICE_PROXY
#define NAO_SAMPLES_CERTH_VIDEO_DEVICE_PROXY

#include "proxies/proxy_base.h"

//~ https://community.aldebaran-robotics.com/doc/1-14/naoqi/vision/alvideodevice-api.html

class VideoDeviceProxy : public ProxyBase<AL::ALVideoDeviceProxy>
{
  public:
  
    VideoDeviceProxy(boost::shared_ptr<AL::ALBroker> broker): 
      ProxyBase<AL::ALVideoDeviceProxy>(broker){}
};

#endif

