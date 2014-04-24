#include "bumpers.h"

#include "proxies/memory_proxy.h"
#include "proxies/text_to_speech_proxy.h"
#include "proxies/sensors_proxy.h"
  
int main(int argc, char* argv[]) { 
  
  LocalBroker lb(argc, argv);

  TextToSpeechProxy t2sp(lb.broker);
  t2sp.say("hi there"); 
  t2sp.say("who are you?"); 
  return 0;  
}  
