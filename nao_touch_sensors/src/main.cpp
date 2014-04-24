#include "bumpers.h"
#include "proxies/memory_proxy.h"
  
int main(int argc, char* argv[]) { 
  
  LocalBroker lb(argc, argv);
  MemoryProxy mp(lb.broker);
  
  std::string sx = "Device/SubDeviceList/InertialSensor/AngleX/Sensor/Value";
  std::string sy = "Device/SubDeviceList/InertialSensor/AngleY/Sensor/Value";
  
  const std::string intertialSensorXKey(sx), intertialSensorYKey(sy);  
  
  while (true) {  
    std::cout << 
      " X: " << mp.memory_proxy->getData(intertialSensorXKey) << 
      " Y: " << mp.memory_proxy->getData(intertialSensorYKey) << 
      std::endl;  

    boost::this_thread::sleep(boost::posix_time::milliseconds(500));  
  }  
  
 return 0;  
}  
