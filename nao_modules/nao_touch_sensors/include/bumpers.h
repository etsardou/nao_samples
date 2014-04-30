#ifndef NAO_SAMPLES_CERTH_BUMPER
#define NAO_SAMPLES_CERTH_BUMPER

#include "proxies/memory_proxy.h"
#include "proxies/text_to_speech_proxy.h"
#include <althread/alcriticalsection.h>

class Bumper : public AL::ALModule
{
  private:
    MemoryProxy mp;
    TextToSpeechProxy t2sp;
    boost::shared_ptr<AL::ALMutex> fCallbackMutex;
  
  public:
    Bumper(boost::shared_ptr<AL::ALBroker> broker, 
      const std::string& name);
    
    /** Overloading ALModule::init().
    * This is called right after the module has been loaded
    */
    virtual void init();
    
    //!< Event callbacks
    void onRightBumperPressed(void);
    void onLeftBumperPressed(void);
    void onMiddleTactilPressed(void);
    void onFrontTactilPressed(void);
    void onRearTactilPressed(void);
};

#endif
