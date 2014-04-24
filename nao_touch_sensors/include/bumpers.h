#ifndef NAO_SAMPLES_CERTH_BUMPER
#define NAO_SAMPLES_CERTH_BUMPER

#include "proxies/memory_proxy.h"
#include "proxies/text_to_speech_proxy.h"

class Bumper : public AL::ALModule
{
  private:
    MemoryProxy mp;
    TextToSpeechProxy t2sp;
  
  public:
    Bumper(boost::shared_ptr<AL::ALBroker> broker, 
      const std::string& name);
    
    /** Overloading ALModule::init().
    * This is called right after the module has been loaded
    */
    virtual void init();
    
    void onRightBumperPressed(void);
    
    void onLeftBumperPressed(void);
};

#endif
