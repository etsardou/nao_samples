#ifndef NAO_SAMPLES_CERTH_FACE_DETECTION_PROXY
#define NAO_SAMPLES_CERTH_FACE_DETECTION_PROXY

#include "proxies/proxy_base.h"

//~ https://community.aldebaran-robotics.com/doc/1-14/naoqi/vision/alfacedetection-api.html

class FaceDetectionProxy : public ProxyBase<AL::ALFaceDetectionProxy>
{
  public:
  
    FaceDetectionProxy(boost::shared_ptr<AL::ALBroker> broker): 
      ProxyBase<AL::ALFaceDetectionProxy>(broker){}
};

#endif

