#ifndef NAO_SAMPLES_CERTH_TEXT_2_SPEECH_PROXY
#define NAO_SAMPLES_CERTH_TEXT_2_SPEECH_PROXY

#include "local_broker/local_broker.h"

//~ https://community.aldebaran-robotics.com/doc/1-14/naoqi/audio/altexttospeech.html

class TextToSpeechProxy
{
  public:
    
    boost::shared_ptr<AL::ALTextToSpeechProxy> text_to_speech_proxy; 
    
    TextToSpeechProxy(void){}
    
    TextToSpeechProxy(boost::shared_ptr<AL::ALBroker> broker);
};

#endif
