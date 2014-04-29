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
    video_device_proxy_(broker), 
    
    AL::ALModule(broker, name),
    fCallbackMutex(AL::ALMutex::createALMutex())  //!< Mutex initialization
{
  setModuleDescription("Make NAO stand up and sit down.");
  
  robot_state_ = REST;
  last_command_ = "";
  
  functionName(
    "onWordRecognized", getName(), 
    "Method called when a word was recognized.");
  BIND_METHOD(Module::onWordRecognized)
  
  functionName(
    "onFaceDetected", getName(), 
    "Method called when a face was detected.");
  BIND_METHOD(Module::onFaceDetected)
  
  functionName(
    "onMiddleTactilPressed", getName(), 
    "Method called when the middle tactil is pressed.");
  BIND_METHOD(Module::onMiddleTactilPressed)
  
  locked = false;
  locked_tactils = false;
}

void Module::init() {
  try {
    initialize_bumpers();
    initialize_vocal();
    //!< Set resolution to 640x480 (does not recognize the module :/)
    //~ video_device_proxy_.proxy->setResolution(getName(), 2);
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
  //~ vocabulary.push_back("up");
  //~ vocabulary.push_back("sit");
  //~ vocabulary.push_back("crouch");
  vocabulary.push_back("quit");
  vocabulary.push_back("face");
  vocabulary.push_back("learn");
  speech_recognition_proxy_.proxy->setWordListAsVocabulary(vocabulary);
  
  //~ text_to_speech_proxy_.say("Vocal commands initialized");
  
  memory_proxy_.proxy->subscribeToEvent(
    "WordRecognized", 
    getName(),
    "onWordRecognized"
  );
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
  
  motion_proxy_.proxy->wakeUp();
  //~ text_to_speech_proxy_.say("Stifness on");

  //~ text_to_speech_proxy_.say("Face tracking initialized");
}

void Module::initialize_bumpers(void)
{
  robot_state_ = COMMAND;
  last_command_ = "";

  memory_proxy_.proxy->subscribeToEvent(
    "MiddleTactilTouched", 
    getName(),
    "onMiddleTactilPressed"
  );
  //~ text_to_speech_proxy_.say("Bumpers initialized");
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

void Module::terminate_bumpers(void)
{
  memory_proxy_.proxy->unsubscribeToEvent(
    "MiddleTactilTouched", 
    getName()
  );
  text_to_speech_proxy_.say("Bumpers terminated");
}


void Module::onMiddleTactilPressed(void)
{
  if(locked_tactils)
  {
    return;
  }
  else
  {
    locked_tactils = true;
  }
  
  nao_exit();

  locked_tactils = false;
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
  
  //~ Printer::FaceDetected(val);
  
  //!< If we have something val.getSize() = 5
  if(val.getSize() > 0)
  {
    //!< val[1][0] = the face infos
    if(val[1][0].getSize() > 0)
    {
      float a = float(val[1][0][0][1]);
      float b = float(val[1][0][0][2]);
     
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
      
      if(val[1][0][1][2].toString() != "")
      {
        std::cout<<val[1][0][1][2].toString()<<"\n";
      }
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
      std::cout<<"Executing crouch\n";
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
      initialize_face();
      initialize_vocal();
    }
    else if(command == "\"yes\"" && last_command_ == "\"learn\"")
    {
      std::cout<<"Executing learn\n";
      motion_proxy_.proxy->rest();
      text_to_speech_proxy_.say("Learn initialized");
      std::string name = "";
      std::cout << "Give me name: ";
      std::cin >> name;
      face_detection_proxy_.proxy->learnFace(name);
      text_to_speech_proxy_.say(std::string("Face learned. This is how ") + name 
        + std::string(" looks like"));
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
  std::cout<<"In exit... \n";
  initialize_vocal();
  terminate_vocal();
  terminate_bumpers();
  motion_proxy_.proxy->wakeUp();
  robot_posture_proxy_.proxy->goToPosture("Sit",1.0);
  motion_proxy_.proxy->rest();
  text_to_speech_proxy_.say("Module exits");
  terminate_face();
}

