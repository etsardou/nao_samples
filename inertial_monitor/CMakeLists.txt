cmake_minimum_required(VERSION 2.8)
project(inertial_monitor)

find_package(qibuild)

# Create a executable named inertial_monitor
# with the source file: main.cpp
qi_create_bin(inertial_monitor "main.cpp")
qi_use_lib(inertial_monitor ALCOMMON BOOST BOOST_PROGRAM_OPTIONS)

# Add a simple test:
enable_testing()
qi_create_test(test_inertial_monitor "test.cpp")
