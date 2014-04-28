cmake_minimum_required(VERSION 2.8)
project(search_for_faces)

find_package(qibuild)

include_directories(
  include
)
# Create a executable named get_up_stand_down
# with the source file: main.cpp
qi_create_bin(search_for_faces_node 
  src/main.cpp
  src/module.cpp
  
  src/proxies/memory_proxy.cpp
  src/proxies/text_to_speech_proxy.cpp
  src/proxies/sensors_proxy.cpp
  src/proxies/motion_proxy.cpp
  src/proxies/robot_posture_proxy.cpp
  src/proxies/speech_recognition_proxy.cpp
  src/proxies/face_detection_proxy.cpp
  
  src/local_broker/local_broker.cpp
)

qi_use_lib(search_for_faces_node 
  ALCOMMON 
  BOOST 
  BOOST_PROGRAM_OPTIONS
)
