#ifndef NAO_SAMPLES_CERTH_BUMPER
#define NAO_SAMPLES_CERTH_BUMPER

#include <althread/alcriticalsection.h>

//!< Proxies that the module use
#include "proxies/memory_proxy.h"
#include "proxies/motion_proxy.h"
#include "proxies/text_to_speech_proxy.h"
#include "proxies/robot_posture_proxy.h"
#include "proxies/speech_recognition_proxy.h"
#include "proxies/face_detection_proxy.h"

enum NAO_STATE
{
  COMMAND,
  CONFIRMATION
};

class Module : public AL::ALModule
{
  private:
    MemoryProxy memory_proxy_;
    TextToSpeechProxy text_to_speech_proxy_;
    MotionProxy motion_proxy_;
    RobotPostureProxy robot_posture_proxy_;
    SpeechRecognitionProxy speech_recognition_proxy_;
    FaceDetectionProxy face_detection_proxy_;
    
    boost::shared_ptr<AL::ALMutex> fCallbackMutex;
    
    NAO_STATE robot_state_;
    std::string last_command_;
    
    void initialize_vocal(void);
    void terminate_vocal(void);
    
    void initialize_face(void);
    void terminate_face(void);
    
    void prompt(std::string command_);
  
    void nao_exit(void);
    
    bool locked;
  
  public:
    Module(boost::shared_ptr<AL::ALBroker> broker, 
      const std::string& name);
    
    /** Overloading ALModule::init().
    * This is called right after the module has been loaded
    */
    virtual void init();
    
    //!< Event callbacks
    void onWordRecognized(
      const std::string& name,
      const AL::ALValue& val,
      const std::string& myName
    );
    void onFaceDetected(
      const std::string& name,
      const AL::ALValue& val,
      const std::string& myName
    );
};

#endif
