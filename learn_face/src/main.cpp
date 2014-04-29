#include "module.h"

#include <signal.h>

#include <alcommon/albroker.h>
#include <alcommon/almodule.h>
#include <alcommon/albrokermanager.h>
#include <alcommon/altoolsmain.h>

#define ALCALL

#define MODULE_NAME "FaceLearning"

extern "C"
{
  ALCALL int _createModule(boost::shared_ptr<AL::ALBroker> pBroker)
  {
    // init broker with the main broker instance
    // from the parent executable
    AL::ALBrokerManager::setInstance(pBroker->fBrokerManager.lock());
    AL::ALBrokerManager::getInstance()->addBroker(pBroker);
    AL::ALModule::createModule<Module>( pBroker, MODULE_NAME );

    return 0;
  }

  ALCALL int _closeModule()
  {
    return 0;
  }
}
  
int main(int argc, char* argv[]) { 

  // pointer to createModule
  TMainType sig;
  sig = &_createModule;
  // call main
  ALTools::mainFunction(MODULE_NAME, argc, argv, sig);
  
  return 0;  
}  
