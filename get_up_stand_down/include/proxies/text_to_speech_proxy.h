#ifndef NAO_SAMPLES_CERTH_TEXT_2_SPEECH_PROXY
#define NAO_SAMPLES_CERTH_TEXT_2_SPEECH_PROXY

#include "proxies/proxy_base.h"

//~ https://community.aldebaran-robotics.com/doc/1-14/naoqi/audio/altexttospeech.html

class TextToSpeechProxy: public ProxyBase<AL::ALTextToSpeechProxy>
{
  public:
  
    TextToSpeechProxy(boost::shared_ptr<AL::ALBroker> broker): 
      ProxyBase<AL::ALTextToSpeechProxy>(broker){}
    
    void say(std::string phrase);
};

#endif

/**
Sample:
  TextToSpeechProxy t2sp(lb.broker);
  t2sp.proxy->say("Hello world");
**/
