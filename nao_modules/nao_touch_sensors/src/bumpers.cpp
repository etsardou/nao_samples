#include "bumpers.h"

Bumper::Bumper(boost::shared_ptr<AL::ALBroker> broker, const std::string& name):
  mp(broker),   //!< Initializes the Memory proxy
  t2sp(broker), //!< Initializes the Text2Speech proxy
  AL::ALModule(broker, name),
  fCallbackMutex(AL::ALMutex::createALMutex())  //!< Mutex initialization
{
  setModuleDescription("Multiple sensor event callbacks and audio annotation.");

  //!< Creation of the right foot bumper method
  functionName(
    "onRightBumperPressed", getName(), 
    "Method called when the right bumper is pressed.");
  BIND_METHOD(Bumper::onRightBumperPressed)
  
  //!< Creation of the left foot bumper method
  functionName(
    "onLeftBumperPressed", getName(), 
    "Method called when the left bumper is pressed.");
  BIND_METHOD(Bumper::onLeftBumperPressed)
  
  functionName(
    "onMiddleTactilPressed", getName(), 
    "Method called when the middle tactil is pressed.");
  BIND_METHOD(Bumper::onMiddleTactilPressed)
  
  functionName(
    "onFrontTactilPressed", getName(), 
    "Method called when the front tactil is pressed.");
  BIND_METHOD(Bumper::onFrontTactilPressed)
  
  functionName(
    "onRearTactilPressed", getName(), 
    "Method called when the rear tactil is pressed.");
  BIND_METHOD(Bumper::onRearTactilPressed)
}

void Bumper::init() {
  try {
    /** Subscribe to event LeftBumperPressed
    * Arguments:
    * - name of the event
    * - name of the module to be called for the callback
    * - name of the bound method to be called on event
    */
    mp.proxy->subscribeToEvent(
      "RightBumperPressed", 
      "Bumper",
      "onRightBumperPressed"
    );
 
    mp.proxy->subscribeToEvent(
      "LeftBumperPressed", 
      "Bumper",
      "onLeftBumperPressed"
    );
    
    mp.proxy->subscribeToEvent(
      "MiddleTactilTouched", 
      "Bumper",
      "onMiddleTactilPressed"
    );
    
    mp.proxy->subscribeToEvent(
      "FrontTactilTouched", 
      "Bumper",
      "onFrontTactilPressed"
    );
    
    mp.proxy->subscribeToEvent(
      "RearTactilTouched", 
      "Bumper",
      "onRearTactilPressed"
    );
  }
  catch (const AL::ALError& e) {
    std::cout<< "Error" << e.what() << std::endl;
  }
}

void Bumper::onRightBumperPressed(void)
{
  AL::ALCriticalSection section(fCallbackMutex);
  float state = mp.proxy->getData("RightBumperPressed");
  if(state > 0.5)
  {
    return;
  }
  t2sp.say("Right foot bumper pressed");
}

void Bumper::onLeftBumperPressed(void)
{
  AL::ALCriticalSection section(fCallbackMutex);
  float state = mp.proxy->getData("LeftBumperPressed");
  if(state > 0.5)
  {
    return;
  }
  t2sp.say("Left foot bumper pressed");
}

void Bumper::onMiddleTactilPressed(void)
{
  AL::ALCriticalSection section(fCallbackMutex);
  t2sp.say("Middle tactil pressed");
}

void Bumper::onFrontTactilPressed(void)
{
  AL::ALCriticalSection section(fCallbackMutex);
  t2sp.say("Front tactil pressed");
}

void Bumper::onRearTactilPressed(void)
{
  AL::ALCriticalSection section(fCallbackMutex);
  t2sp.say("Rear tactil pressed");
}
