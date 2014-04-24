cmake_minimum_required(VERSION 2.8)
project(nao_touch_sensors)

find_package(qibuild)

include_directories(
  include
)
# Create a executable named nao_touch_sensors
# with the source file: main.cpp
qi_create_bin(nao_touch_sensors 
  src/main.cpp
  src/bumpers.cpp
  
  src/proxies/memory_proxy.cpp
  src/proxies/text_to_speech_proxy.cpp
  src/proxies/sensors_proxy.cpp
  
  src/local_broker/local_broker.cpp
)

qi_use_lib(nao_touch_sensors 
  ALCOMMON 
  BOOST 
  BOOST_PROGRAM_OPTIONS
)

