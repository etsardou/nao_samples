#include "bumpers.h"
#include "proxies/memory_proxy.h"
#include "proxies/text_to_speech_proxy.h"
  
int main(int argc, char* argv[]) { 
  
  LocalBroker lb(argc, argv);

  TextToSpeechProxy t2sp(lb.broker);
  t2sp.say("Hello world"); 
  
  return 0;  
}  
