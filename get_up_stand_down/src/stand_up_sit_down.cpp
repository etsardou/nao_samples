#include "stand_up_sit_down.h"

StandUpSitDown::StandUpSitDown(
  boost::shared_ptr<AL::ALBroker> broker, const std::string& name):
    memory_proxy_(broker),   //!< Initializes the Memory proxy
    text_to_speech_proxy_(broker), //!< Initializes the Text2Speech proxy
    motion_proxy_(broker), //!< Initializes the motion proxy
    robot_posture_proxy_(broker), //!< Initializes the motion proxy
    speech_recognition_proxy_(broker), //!< Initializes the motion proxy
    AL::ALModule(broker, name),
    fCallbackMutex(AL::ALMutex::createALMutex())  //!< Mutex initialization
{
  setModuleDescription("Make NAO stand up and sit down.");
  
  robot_state_ = COMMAND;
  last_command_ = "";
  
  functionName(
    "onWordRecognized", getName(), 
    "Method called when a word was recognized.");
  BIND_METHOD(StandUpSitDown::onWordRecognized)
}

void StandUpSitDown::init() {
  try {
    initialize_vocal();
  }
  catch (const AL::ALError& e) {
    terminate_vocal();
  }
}

//!< Event callbacks
void StandUpSitDown::onWordRecognized(
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
    std::cout<<"Word, Confidence : "<<  val[i*2].toString() 
      << " " << (float)val[i*2+1] <<"\n";
    
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
    if(command == "\"yes\"" && last_command_ == "\"exit\"")
    {
      std::cout<<"Executing exit\n";
    }
    else if(command == "\"yes\"" && last_command_ == "\"stand\"")
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
    else
    {
      initialize_vocal();
    }
  }
}

void StandUpSitDown::initialize_vocal(void)
{
  robot_state_ = COMMAND;
  last_command_ = "";
  std::vector<std::string> vocabulary;
  vocabulary.push_back("stand");
  vocabulary.push_back("sit");
  vocabulary.push_back("crouch");
  vocabulary.push_back("exit");
  speech_recognition_proxy_.proxy->setWordListAsVocabulary(vocabulary);
  memory_proxy_.proxy->subscribeToEvent(
    "WordRecognized", 
    getName(),
    "onWordRecognized"
  );
}

void StandUpSitDown::terminate_vocal(void)
{
  memory_proxy_.proxy->unsubscribeToEvent(
    "WordRecognized", 
    getName()
  );
}

void StandUpSitDown::prompt(std::string command_)
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
    //~ motion_proxy_.proxy->wakeUp();
    //~ text_to_speech_proxy_.say("Stifness on");
    //~ 
    //~ robot_posture_proxy_.proxy->goToPosture("Stand",1.0);
    //~ text_to_speech_proxy_.say("Stand posture");
    //~ 
    //~ boost::this_thread::sleep(boost::posix_time::seconds(1)); 
    //~ text_to_speech_proxy_.say("1");
    //~ 
    //~ robot_posture_proxy_.proxy->goToPosture("StandInit",1.0);
    //~ text_to_speech_proxy_.say("Stand init posture");
    //~ 
    //~ boost::this_thread::sleep(boost::posix_time::seconds(1)); 
    //~ text_to_speech_proxy_.say("2");
    //~ 
    //~ robot_posture_proxy_.proxy->goToPosture("StandZero",1.0);
    //~ text_to_speech_proxy_.say("Stand zero posture");
    //~ 
    //~ boost::this_thread::sleep(boost::posix_time::seconds(1)); 
    //~ text_to_speech_proxy_.say("3");
    //~ 
    //~ robot_posture_proxy_.proxy->goToPosture("Crouch",1.0);
    //~ text_to_speech_proxy_.say("Crouch posture");
    //~ 
    //~ boost::this_thread::sleep(boost::posix_time::seconds(1)); 
    //~ text_to_speech_proxy_.say("4");
    //~ 
    //~ robot_posture_proxy_.proxy->goToPosture("Sit",1.0);
    //~ text_to_speech_proxy_.say("Sit posture");
    //~ 
    //~ motion_proxy_.proxy->rest();
    //~ text_to_speech_proxy_.say("Stifness off");
    
    
    
