cmake_minimum_required(VERSION 2.8)
project(get_up_stand_down)

find_package(qibuild)

include_directories(
  include
)
# Create a executable named get_up_stand_down
# with the source file: main.cpp
qi_create_bin(stand_up_sit_down 
  src/main.cpp
  src/stand_up_sit_down.cpp
  
  src/proxies/memory_proxy.cpp
  src/proxies/text_to_speech_proxy.cpp
  src/proxies/sensors_proxy.cpp
  src/proxies/motion_proxy.cpp
  src/proxies/robot_posture_proxy.cpp
  
  src/local_broker/local_broker.cpp
)

qi_use_lib(stand_up_sit_down 
  ALCOMMON 
  BOOST 
  BOOST_PROGRAM_OPTIONS
)
