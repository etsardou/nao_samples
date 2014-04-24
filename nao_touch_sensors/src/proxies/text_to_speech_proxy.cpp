#include "proxies/text_to_speech_proxy.h"

void TextToSpeechProxy::say(std::string phrase)
{
  try 
  {  
    proxy->say(phrase);
  }
  catch (const AL::ALError& e) 
  {  
    std::cerr << "Could not speak: " << e.what() << std::endl;  
    exit(3);
  }
}
