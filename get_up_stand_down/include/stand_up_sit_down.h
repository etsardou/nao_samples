#ifndef NAO_SAMPLES_CERTH_BUMPER
#define NAO_SAMPLES_CERTH_BUMPER

#include <althread/alcriticalsection.h>

//!< Proxies that the module use
#include "proxies/memory_proxy.h"
#include "proxies/motion_proxy.h"
#include "proxies/text_to_speech_proxy.h"
#include "proxies/robot_posture_proxy.h"


class StandUpSitDown : public AL::ALModule
{
  private:
    MemoryProxy memory_proxy_;
    TextToSpeechProxy text_to_speech_proxy_;
    MotionProxy motion_proxy_;
    RobotPostureProxy robot_posture_proxy_;
    
    boost::shared_ptr<AL::ALMutex> fCallbackMutex;
  
  public:
    StandUpSitDown(boost::shared_ptr<AL::ALBroker> broker, 
      const std::string& name);
    
    /** Overloading ALModule::init().
    * This is called right after the module has been loaded
    */
    virtual void init();
};

#endif
