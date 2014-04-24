#ifndef NAO_SAMPLES_CERTH_TEXT_2_SPEECH_PROXY
#define NAO_SAMPLES_CERTH_TEXT_2_SPEECH_PROXY

#include "local_broker/local_broker.h"

//~ https://community.aldebaran-robotics.com/doc/1-14/naoqi/audio/altexttospeech.html

class TextToSpeechProxy
{
  public:
    
    boost::shared_ptr<AL::ALTextToSpeechProxy> proxy; 
    
    TextToSpeechProxy(void){}
    
    TextToSpeechProxy(boost::shared_ptr<AL::ALBroker> broker);
    
    void say(std::string phrase);
};

#endif

/**
Sample:
  TextToSpeechProxy t2sp(lb.broker);
  const std::string phraseToSay("Hello world");
  t2sp.proxy->say(phraseToSay);
**/
