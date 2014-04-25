#ifndef NAO_SAMPLES_CERTH_SPEECH_RECOGNITION_PROXY
#define NAO_SAMPLES_CERTH_SPEECH_RECOGNITION_PROXY

#include "proxies/proxy_base.h"

//~ https://community.aldebaran-robotics.com/doc/1-14/naoqi/audio/alspeechrecognition-api.html#alspeechrecognition-api

class SpeechRecognitionProxy : public ProxyBase<AL::ALSpeechRecognitionProxy>
{
  public:
  
    SpeechRecognitionProxy(boost::shared_ptr<AL::ALBroker> broker): 
      ProxyBase<AL::ALSpeechRecognitionProxy>(broker){}

};

#endif

