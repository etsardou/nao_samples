#include "proxies/text_to_speech_proxy.h"

TextToSpeechProxy::TextToSpeechProxy(boost::shared_ptr<AL::ALBroker> broker)
{
  try 
  {  
    text_to_speech_proxy = boost::shared_ptr<AL::ALTextToSpeechProxy>
      (new AL::ALTextToSpeechProxy(broker));  
  } 
  catch (const AL::ALError& e) 
  {  
    std::cerr << "Could not create TextToSpeechProxy: " << 
      e.what() << std::endl;  
    exit(3);
  }
}  
