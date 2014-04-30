#include "module.h"

Module::Module(
  boost::shared_ptr<AL::ALBroker> broker, const std::string& name):
    //!< Proxies initialization
    memory_proxy_(broker), 
    text_to_speech_proxy_(broker), 
    motion_proxy_(broker), 
    robot_posture_proxy_(broker), 
    speech_recognition_proxy_(broker), 
    face_detection_proxy_(broker), 
    
    AL::ALModule(broker, name),
    fCallbackMutex(AL::ALMutex::createALMutex())  //!< Mutex initialization
{
  setModuleDescription("Make NAO stand up and sit down.");
  
  robot_state_ = COMMAND;
  last_command_ = "";
  
  functionName(
    "onWordRecognized", getName(), 
    "Method called when a word was recognized.");
  BIND_METHOD(Module::onWordRecognized)
  
  functionName(
    "onFaceDetected", getName(), 
    "Method called when a face was detected.");
  BIND_METHOD(Module::onFaceDetected)
  
  locked = false;
}

void Module::init() {
  try {
    initialize_vocal();
  }
  catch (const AL::ALError& e) {
    terminate_vocal();
    terminate_face();
  }
}



void Module::initialize_vocal(void)
{
  robot_state_ = COMMAND;
  last_command_ = "";
  std::vector<std::string> vocabulary;
  vocabulary.push_back("up");
  vocabulary.push_back("sit");
  vocabulary.push_back("crouch");
  vocabulary.push_back("quit");
  vocabulary.push_back("face");
  speech_recognition_proxy_.proxy->setWordListAsVocabulary(vocabulary);
  memory_proxy_.proxy->subscribeToEvent(
    "WordRecognized", 
    getName(),
    "onWordRecognized"
  );
  
  std::cout << "Subscribed to WordRecognized event\n";
}

void Module::initialize_face(void)
{
  robot_state_ = COMMAND;
  last_command_ = "";

  memory_proxy_.proxy->subscribeToEvent(
    "FaceDetected", 
    getName(),
    "onFaceDetected"
  );
  
  std::cout << "Subscribed to FaceDetected event\n";
}

void Module::terminate_vocal(void)
{
  memory_proxy_.proxy->unsubscribeToEvent(
    "WordRecognized", 
    getName()
  );
  
  std::cout << "Un-Subscribed to FaceDetected event\n";
}

void Module::terminate_face(void)
{
  memory_proxy_.proxy->unsubscribeToEvent(
    "FaceDetected", 
    getName()
  );
  
  std::cout << "Un-Subscribed to FaceDetected event\n";
}

//!< Event callbacks
void Module::onFaceDetected(
  const std::string& name,
  const AL::ALValue& val,
  const std::string& myName)
{
  if(locked)
  {
    return;
  }
  else
  {
    locked = true;
  }
  //!< If we have something val.getSize() = 5
  if(val.getSize() > 0)
  {
    //!< val[1][0] = the face infos
    if(val[1][0].getSize() > 0)
    {
      float a = float(val[1][0][0][1]);
      float b = float(val[1][0][0][2]);
      //!< val[1][0][0] = the shape infos
      std::cout << "Camera = " << float(val[4]) << 
        " a = " << a << " "
        << "b = " << b <<"\n";
     
      motion_proxy_.proxy->angleInterpolation(
        "HeadYaw",
        AL::ALValue::array(a * 0.4), //!< Angle
        AL::ALValue::array(0.1),                //!< Time
        false
      );
      motion_proxy_.proxy->angleInterpolation(
        "HeadPitch",
        AL::ALValue::array(b * 0.4), //!< Angle
        AL::ALValue::array(0.1),                //!< Time
        false
      );
    }
  }
  
  locked = false;
}

void Module::onWordRecognized(
  const std::string& name,
  const AL::ALValue& val,
  const std::string& myName)
{
  
  terminate_vocal();
  terminate_face();
  
  std::cout<<"Command taken\n";

  std::string command = "";
  float higher_prob = 0;
  for(unsigned int i = 0; i < val.getSize() / 2 ; ++i)
  {
    if((float)val[i*2+1] > higher_prob)
    {
      command = val[i*2].toString();
      higher_prob = (float)val[i*2+1];
    }
  }

  std::cout<<"Command was ... " << command << "\n";
  
  if(robot_state_ == COMMAND)
  {
    prompt(command);
  }
  else if(robot_state_ == CONFIRMATION)
  {
    if(command == "\"yes\"" && last_command_ == "\"quit\"")
    {
      std::cout<<"Executing exit\n";
      nao_exit();
    }
    else if(command == "\"yes\"" && last_command_ == "\"up\"")
    {
      std::cout<<"Executing stand\n";
      motion_proxy_.proxy->wakeUp();
      text_to_speech_proxy_.say("Stifness on");
      robot_posture_proxy_.proxy->goToPosture("Stand",1.0);
      text_to_speech_proxy_.say("Stand posture");
      
      initialize_vocal();
    }
    else if(command == "\"yes\"" && last_command_ == "\"crouch\"")
    {
      std::cout<<"Executing stand\n";
      motion_proxy_.proxy->wakeUp();
      text_to_speech_proxy_.say("Stifness on");
      robot_posture_proxy_.proxy->goToPosture("Crouch",1.0);
      text_to_speech_proxy_.say("Crouch posture");
      
      initialize_vocal();
    }
    else if(command == "\"yes\"" && last_command_ == "\"sit\"")
    {
      std::cout<<"Executing sit\n";
      robot_posture_proxy_.proxy->goToPosture("Sit",1.0);
      text_to_speech_proxy_.say("Sit posture");
      motion_proxy_.proxy->rest();
      text_to_speech_proxy_.say("Stifness off");
      
      initialize_vocal();
    }
    else if(command == "\"yes\"" && last_command_ == "\"face\"")
    {
      std::cout<<"Executing track\n";
      motion_proxy_.proxy->wakeUp();
      text_to_speech_proxy_.say("Track initialized");
      initialize_face();
      initialize_vocal();
    }
    else
    {
      initialize_vocal();
    }
  }
}

void Module::prompt(std::string command_)
{
  text_to_speech_proxy_.say(std::string("did you say") + command_ + 
    std::string("?"));
      
  last_command_ = command_;
    
  robot_state_ = CONFIRMATION;
  
  std::vector<std::string> vocabulary;
  vocabulary.push_back("yes");
  vocabulary.push_back("no");
  speech_recognition_proxy_.proxy->setWordListAsVocabulary(vocabulary);
  
  memory_proxy_.proxy->subscribeToEvent(
    "WordRecognized", 
    getName(),
    "onWordRecognized"
  );
}

void Module::nao_exit(void)
{
  terminate_face();
  motion_proxy_.proxy->rest();
}

