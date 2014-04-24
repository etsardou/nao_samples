#include "bumpers.h"

Bumper::Bumper(boost::shared_ptr<AL::ALBroker> broker, const std::string& name):
  mp(broker),
  t2sp(broker),
  AL::ALModule(broker, name)
{
  setModuleDescription("This module presents how to subscribe to a simple \
  event (here RightBumperPressed) and use a callback method.");

  //!< Creation of the right foot bumper method
  functionName("onRightBumperPressed", getName(), "Method called when \
  the right bumper is pressed.");
  BIND_METHOD(Bumper::onRightBumperPressed)
  
  //!< Creation of the left foot bumper method
  functionName("onLeftBumperPressed", getName(), "Method called when \
  the left bumper is pressed.");
  BIND_METHOD(Bumper::onLeftBumperPressed)
  
  
}

void Bumper::init() {
  try {
    /** Subscribe to event LeftBumperPressed
    * Arguments:
    * - name of the event
    * - name of the module to be called for the callback
    * - name of the bound method to be called on event
    */
    mp.proxy->subscribeToEvent("RightBumperPressed", "Bumper",
                                  "onRightBumperPressed");
                                  
    mp.proxy->subscribeToEvent("LeftBumperPressed", "Bumper",
                                  "onLeftBumperPressed");
  }
  catch (const AL::ALError& e) {
    std::cout<< "Error" << e.what() << std::endl;
  }
}

void Bumper::onRightBumperPressed(void)
{
  t2sp.say("Right foot bumper pressed");
}

void Bumper::onLeftBumperPressed(void)
{
  t2sp.say("Left foot bumper pressed");
}
