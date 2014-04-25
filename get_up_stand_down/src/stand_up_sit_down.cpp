#include "stand_up_sit_down.h"

StandUpSitDown::StandUpSitDown(
  boost::shared_ptr<AL::ALBroker> broker, const std::string& name):
    memory_proxy_(broker),   //!< Initializes the Memory proxy
    text_to_speech_proxy_(broker), //!< Initializes the Text2Speech proxy
    motion_proxy_(broker), //!< Initializes the motion proxy
    robot_posture_proxy_(broker), //!< Initializes the motion proxy
    AL::ALModule(broker, name),
    fCallbackMutex(AL::ALMutex::createALMutex())  //!< Mutex initialization
{
  setModuleDescription("Make NAO stand up and sit down.");
}

void StandUpSitDown::init() {
  try {
    motion_proxy_.proxy->wakeUp();
    text_to_speech_proxy_.say("Stifness on");
    
    robot_posture_proxy_.proxy->goToPosture("Stand",1.0);
    text_to_speech_proxy_.say("Stand posture");
    
    boost::this_thread::sleep(boost::posix_time::seconds(1)); 
    text_to_speech_proxy_.say("1");
    
    robot_posture_proxy_.proxy->goToPosture("StandInit",1.0);
    text_to_speech_proxy_.say("Stand init posture");
    
    boost::this_thread::sleep(boost::posix_time::seconds(1)); 
    text_to_speech_proxy_.say("2");
    
    robot_posture_proxy_.proxy->goToPosture("StandZero",1.0);
    text_to_speech_proxy_.say("Stand zero posture");
    
    boost::this_thread::sleep(boost::posix_time::seconds(1)); 
    text_to_speech_proxy_.say("3");
    
    robot_posture_proxy_.proxy->goToPosture("Crouch",1.0);
    text_to_speech_proxy_.say("Crouch posture");
    
    boost::this_thread::sleep(boost::posix_time::seconds(1)); 
    text_to_speech_proxy_.say("4");
    
    robot_posture_proxy_.proxy->goToPosture("Sit",1.0);
    text_to_speech_proxy_.say("Sit posture");
    
    motion_proxy_.proxy->rest();
    text_to_speech_proxy_.say("Stifness off");
  }
  catch (const AL::ALError& e) {
    std::cout<< "Error" << e.what() << std::endl;
  }
}

