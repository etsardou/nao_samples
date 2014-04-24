cmake_minimum_required(VERSION 2.8)
project(nao_touch_sensors)

find_package(qibuild)

# Create a executable named nao_touch_sensors
# with the source file: main.cpp
qi_create_bin(nao_touch_sensors 
  main.cpp
  bumpers.cpp
  memory_proxy.cpp
  local_broker.cpp
)

qi_use_lib(nao_touch_sensors 
  ALCOMMON 
  BOOST 
  BOOST_PROGRAM_OPTIONS
)

