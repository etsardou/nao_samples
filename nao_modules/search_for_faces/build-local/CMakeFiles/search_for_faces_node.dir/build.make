# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/manos/Desktop/nao_development/workspace/nao_samples/nao_modules/search_for_faces

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/manos/Desktop/nao_development/workspace/nao_samples/nao_modules/search_for_faces/build-local

# Include any dependencies generated for this target.
include CMakeFiles/search_for_faces_node.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/search_for_faces_node.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/search_for_faces_node.dir/flags.make

CMakeFiles/search_for_faces_node.dir/src/main.cpp.o: CMakeFiles/search_for_faces_node.dir/flags.make
CMakeFiles/search_for_faces_node.dir/src/main.cpp.o: ../src/main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/manos/Desktop/nao_development/workspace/nao_samples/nao_modules/search_for_faces/build-local/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/search_for_faces_node.dir/src/main.cpp.o"
	/usr/bin/clang++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/search_for_faces_node.dir/src/main.cpp.o -c /home/manos/Desktop/nao_development/workspace/nao_samples/nao_modules/search_for_faces/src/main.cpp

CMakeFiles/search_for_faces_node.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/search_for_faces_node.dir/src/main.cpp.i"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/manos/Desktop/nao_development/workspace/nao_samples/nao_modules/search_for_faces/src/main.cpp > CMakeFiles/search_for_faces_node.dir/src/main.cpp.i

CMakeFiles/search_for_faces_node.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/search_for_faces_node.dir/src/main.cpp.s"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/manos/Desktop/nao_development/workspace/nao_samples/nao_modules/search_for_faces/src/main.cpp -o CMakeFiles/search_for_faces_node.dir/src/main.cpp.s

CMakeFiles/search_for_faces_node.dir/src/main.cpp.o.requires:
.PHONY : CMakeFiles/search_for_faces_node.dir/src/main.cpp.o.requires

CMakeFiles/search_for_faces_node.dir/src/main.cpp.o.provides: CMakeFiles/search_for_faces_node.dir/src/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/search_for_faces_node.dir/build.make CMakeFiles/search_for_faces_node.dir/src/main.cpp.o.provides.build
.PHONY : CMakeFiles/search_for_faces_node.dir/src/main.cpp.o.provides

CMakeFiles/search_for_faces_node.dir/src/main.cpp.o.provides.build: CMakeFiles/search_for_faces_node.dir/src/main.cpp.o

CMakeFiles/search_for_faces_node.dir/src/module.cpp.o: CMakeFiles/search_for_faces_node.dir/flags.make
CMakeFiles/search_for_faces_node.dir/src/module.cpp.o: ../src/module.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/manos/Desktop/nao_development/workspace/nao_samples/nao_modules/search_for_faces/build-local/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/search_for_faces_node.dir/src/module.cpp.o"
	/usr/bin/clang++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/search_for_faces_node.dir/src/module.cpp.o -c /home/manos/Desktop/nao_development/workspace/nao_samples/nao_modules/search_for_faces/src/module.cpp

CMakeFiles/search_for_faces_node.dir/src/module.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/search_for_faces_node.dir/src/module.cpp.i"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/manos/Desktop/nao_development/workspace/nao_samples/nao_modules/search_for_faces/src/module.cpp > CMakeFiles/search_for_faces_node.dir/src/module.cpp.i

CMakeFiles/search_for_faces_node.dir/src/module.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/search_for_faces_node.dir/src/module.cpp.s"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/manos/Desktop/nao_development/workspace/nao_samples/nao_modules/search_for_faces/src/module.cpp -o CMakeFiles/search_for_faces_node.dir/src/module.cpp.s

CMakeFiles/search_for_faces_node.dir/src/module.cpp.o.requires:
.PHONY : CMakeFiles/search_for_faces_node.dir/src/module.cpp.o.requires

CMakeFiles/search_for_faces_node.dir/src/module.cpp.o.provides: CMakeFiles/search_for_faces_node.dir/src/module.cpp.o.requires
	$(MAKE) -f CMakeFiles/search_for_faces_node.dir/build.make CMakeFiles/search_for_faces_node.dir/src/module.cpp.o.provides.build
.PHONY : CMakeFiles/search_for_faces_node.dir/src/module.cpp.o.provides

CMakeFiles/search_for_faces_node.dir/src/module.cpp.o.provides.build: CMakeFiles/search_for_faces_node.dir/src/module.cpp.o

CMakeFiles/search_for_faces_node.dir/src/proxies/memory_proxy.cpp.o: CMakeFiles/search_for_faces_node.dir/flags.make
CMakeFiles/search_for_faces_node.dir/src/proxies/memory_proxy.cpp.o: ../src/proxies/memory_proxy.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/manos/Desktop/nao_development/workspace/nao_samples/nao_modules/search_for_faces/build-local/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/search_for_faces_node.dir/src/proxies/memory_proxy.cpp.o"
	/usr/bin/clang++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/search_for_faces_node.dir/src/proxies/memory_proxy.cpp.o -c /home/manos/Desktop/nao_development/workspace/nao_samples/nao_modules/search_for_faces/src/proxies/memory_proxy.cpp

CMakeFiles/search_for_faces_node.dir/src/proxies/memory_proxy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/search_for_faces_node.dir/src/proxies/memory_proxy.cpp.i"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/manos/Desktop/nao_development/workspace/nao_samples/nao_modules/search_for_faces/src/proxies/memory_proxy.cpp > CMakeFiles/search_for_faces_node.dir/src/proxies/memory_proxy.cpp.i

CMakeFiles/search_for_faces_node.dir/src/proxies/memory_proxy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/search_for_faces_node.dir/src/proxies/memory_proxy.cpp.s"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/manos/Desktop/nao_development/workspace/nao_samples/nao_modules/search_for_faces/src/proxies/memory_proxy.cpp -o CMakeFiles/search_for_faces_node.dir/src/proxies/memory_proxy.cpp.s

CMakeFiles/search_for_faces_node.dir/src/proxies/memory_proxy.cpp.o.requires:
.PHONY : CMakeFiles/search_for_faces_node.dir/src/proxies/memory_proxy.cpp.o.requires

CMakeFiles/search_for_faces_node.dir/src/proxies/memory_proxy.cpp.o.provides: CMakeFiles/search_for_faces_node.dir/src/proxies/memory_proxy.cpp.o.requires
	$(MAKE) -f CMakeFiles/search_for_faces_node.dir/build.make CMakeFiles/search_for_faces_node.dir/src/proxies/memory_proxy.cpp.o.provides.build
.PHONY : CMakeFiles/search_for_faces_node.dir/src/proxies/memory_proxy.cpp.o.provides

CMakeFiles/search_for_faces_node.dir/src/proxies/memory_proxy.cpp.o.provides.build: CMakeFiles/search_for_faces_node.dir/src/proxies/memory_proxy.cpp.o

CMakeFiles/search_for_faces_node.dir/src/proxies/text_to_speech_proxy.cpp.o: CMakeFiles/search_for_faces_node.dir/flags.make
CMakeFiles/search_for_faces_node.dir/src/proxies/text_to_speech_proxy.cpp.o: ../src/proxies/text_to_speech_proxy.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/manos/Desktop/nao_development/workspace/nao_samples/nao_modules/search_for_faces/build-local/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/search_for_faces_node.dir/src/proxies/text_to_speech_proxy.cpp.o"
	/usr/bin/clang++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/search_for_faces_node.dir/src/proxies/text_to_speech_proxy.cpp.o -c /home/manos/Desktop/nao_development/workspace/nao_samples/nao_modules/search_for_faces/src/proxies/text_to_speech_proxy.cpp

CMakeFiles/search_for_faces_node.dir/src/proxies/text_to_speech_proxy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/search_for_faces_node.dir/src/proxies/text_to_speech_proxy.cpp.i"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/manos/Desktop/nao_development/workspace/nao_samples/nao_modules/search_for_faces/src/proxies/text_to_speech_proxy.cpp > CMakeFiles/search_for_faces_node.dir/src/proxies/text_to_speech_proxy.cpp.i

CMakeFiles/search_for_faces_node.dir/src/proxies/text_to_speech_proxy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/search_for_faces_node.dir/src/proxies/text_to_speech_proxy.cpp.s"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/manos/Desktop/nao_development/workspace/nao_samples/nao_modules/search_for_faces/src/proxies/text_to_speech_proxy.cpp -o CMakeFiles/search_for_faces_node.dir/src/proxies/text_to_speech_proxy.cpp.s

CMakeFiles/search_for_faces_node.dir/src/proxies/text_to_speech_proxy.cpp.o.requires:
.PHONY : CMakeFiles/search_for_faces_node.dir/src/proxies/text_to_speech_proxy.cpp.o.requires

CMakeFiles/search_for_faces_node.dir/src/proxies/text_to_speech_proxy.cpp.o.provides: CMakeFiles/search_for_faces_node.dir/src/proxies/text_to_speech_proxy.cpp.o.requires
	$(MAKE) -f CMakeFiles/search_for_faces_node.dir/build.make CMakeFiles/search_for_faces_node.dir/src/proxies/text_to_speech_proxy.cpp.o.provides.build
.PHONY : CMakeFiles/search_for_faces_node.dir/src/proxies/text_to_speech_proxy.cpp.o.provides

CMakeFiles/search_for_faces_node.dir/src/proxies/text_to_speech_proxy.cpp.o.provides.build: CMakeFiles/search_for_faces_node.dir/src/proxies/text_to_speech_proxy.cpp.o

CMakeFiles/search_for_faces_node.dir/src/proxies/sensors_proxy.cpp.o: CMakeFiles/search_for_faces_node.dir/flags.make
CMakeFiles/search_for_faces_node.dir/src/proxies/sensors_proxy.cpp.o: ../src/proxies/sensors_proxy.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/manos/Desktop/nao_development/workspace/nao_samples/nao_modules/search_for_faces/build-local/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/search_for_faces_node.dir/src/proxies/sensors_proxy.cpp.o"
	/usr/bin/clang++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/search_for_faces_node.dir/src/proxies/sensors_proxy.cpp.o -c /home/manos/Desktop/nao_development/workspace/nao_samples/nao_modules/search_for_faces/src/proxies/sensors_proxy.cpp

CMakeFiles/search_for_faces_node.dir/src/proxies/sensors_proxy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/search_for_faces_node.dir/src/proxies/sensors_proxy.cpp.i"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/manos/Desktop/nao_development/workspace/nao_samples/nao_modules/search_for_faces/src/proxies/sensors_proxy.cpp > CMakeFiles/search_for_faces_node.dir/src/proxies/sensors_proxy.cpp.i

CMakeFiles/search_for_faces_node.dir/src/proxies/sensors_proxy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/search_for_faces_node.dir/src/proxies/sensors_proxy.cpp.s"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/manos/Desktop/nao_development/workspace/nao_samples/nao_modules/search_for_faces/src/proxies/sensors_proxy.cpp -o CMakeFiles/search_for_faces_node.dir/src/proxies/sensors_proxy.cpp.s

CMakeFiles/search_for_faces_node.dir/src/proxies/sensors_proxy.cpp.o.requires:
.PHONY : CMakeFiles/search_for_faces_node.dir/src/proxies/sensors_proxy.cpp.o.requires

CMakeFiles/search_for_faces_node.dir/src/proxies/sensors_proxy.cpp.o.provides: CMakeFiles/search_for_faces_node.dir/src/proxies/sensors_proxy.cpp.o.requires
	$(MAKE) -f CMakeFiles/search_for_faces_node.dir/build.make CMakeFiles/search_for_faces_node.dir/src/proxies/sensors_proxy.cpp.o.provides.build
.PHONY : CMakeFiles/search_for_faces_node.dir/src/proxies/sensors_proxy.cpp.o.provides

CMakeFiles/search_for_faces_node.dir/src/proxies/sensors_proxy.cpp.o.provides.build: CMakeFiles/search_for_faces_node.dir/src/proxies/sensors_proxy.cpp.o

CMakeFiles/search_for_faces_node.dir/src/proxies/motion_proxy.cpp.o: CMakeFiles/search_for_faces_node.dir/flags.make
CMakeFiles/search_for_faces_node.dir/src/proxies/motion_proxy.cpp.o: ../src/proxies/motion_proxy.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/manos/Desktop/nao_development/workspace/nao_samples/nao_modules/search_for_faces/build-local/CMakeFiles $(CMAKE_PROGRESS_6)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/search_for_faces_node.dir/src/proxies/motion_proxy.cpp.o"
	/usr/bin/clang++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/search_for_faces_node.dir/src/proxies/motion_proxy.cpp.o -c /home/manos/Desktop/nao_development/workspace/nao_samples/nao_modules/search_for_faces/src/proxies/motion_proxy.cpp

CMakeFiles/search_for_faces_node.dir/src/proxies/motion_proxy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/search_for_faces_node.dir/src/proxies/motion_proxy.cpp.i"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/manos/Desktop/nao_development/workspace/nao_samples/nao_modules/search_for_faces/src/proxies/motion_proxy.cpp > CMakeFiles/search_for_faces_node.dir/src/proxies/motion_proxy.cpp.i

CMakeFiles/search_for_faces_node.dir/src/proxies/motion_proxy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/search_for_faces_node.dir/src/proxies/motion_proxy.cpp.s"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/manos/Desktop/nao_development/workspace/nao_samples/nao_modules/search_for_faces/src/proxies/motion_proxy.cpp -o CMakeFiles/search_for_faces_node.dir/src/proxies/motion_proxy.cpp.s

CMakeFiles/search_for_faces_node.dir/src/proxies/motion_proxy.cpp.o.requires:
.PHONY : CMakeFiles/search_for_faces_node.dir/src/proxies/motion_proxy.cpp.o.requires

CMakeFiles/search_for_faces_node.dir/src/proxies/motion_proxy.cpp.o.provides: CMakeFiles/search_for_faces_node.dir/src/proxies/motion_proxy.cpp.o.requires
	$(MAKE) -f CMakeFiles/search_for_faces_node.dir/build.make CMakeFiles/search_for_faces_node.dir/src/proxies/motion_proxy.cpp.o.provides.build
.PHONY : CMakeFiles/search_for_faces_node.dir/src/proxies/motion_proxy.cpp.o.provides

CMakeFiles/search_for_faces_node.dir/src/proxies/motion_proxy.cpp.o.provides.build: CMakeFiles/search_for_faces_node.dir/src/proxies/motion_proxy.cpp.o

CMakeFiles/search_for_faces_node.dir/src/proxies/robot_posture_proxy.cpp.o: CMakeFiles/search_for_faces_node.dir/flags.make
CMakeFiles/search_for_faces_node.dir/src/proxies/robot_posture_proxy.cpp.o: ../src/proxies/robot_posture_proxy.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/manos/Desktop/nao_development/workspace/nao_samples/nao_modules/search_for_faces/build-local/CMakeFiles $(CMAKE_PROGRESS_7)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/search_for_faces_node.dir/src/proxies/robot_posture_proxy.cpp.o"
	/usr/bin/clang++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/search_for_faces_node.dir/src/proxies/robot_posture_proxy.cpp.o -c /home/manos/Desktop/nao_development/workspace/nao_samples/nao_modules/search_for_faces/src/proxies/robot_posture_proxy.cpp

CMakeFiles/search_for_faces_node.dir/src/proxies/robot_posture_proxy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/search_for_faces_node.dir/src/proxies/robot_posture_proxy.cpp.i"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/manos/Desktop/nao_development/workspace/nao_samples/nao_modules/search_for_faces/src/proxies/robot_posture_proxy.cpp > CMakeFiles/search_for_faces_node.dir/src/proxies/robot_posture_proxy.cpp.i

CMakeFiles/search_for_faces_node.dir/src/proxies/robot_posture_proxy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/search_for_faces_node.dir/src/proxies/robot_posture_proxy.cpp.s"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/manos/Desktop/nao_development/workspace/nao_samples/nao_modules/search_for_faces/src/proxies/robot_posture_proxy.cpp -o CMakeFiles/search_for_faces_node.dir/src/proxies/robot_posture_proxy.cpp.s

CMakeFiles/search_for_faces_node.dir/src/proxies/robot_posture_proxy.cpp.o.requires:
.PHONY : CMakeFiles/search_for_faces_node.dir/src/proxies/robot_posture_proxy.cpp.o.requires

CMakeFiles/search_for_faces_node.dir/src/proxies/robot_posture_proxy.cpp.o.provides: CMakeFiles/search_for_faces_node.dir/src/proxies/robot_posture_proxy.cpp.o.requires
	$(MAKE) -f CMakeFiles/search_for_faces_node.dir/build.make CMakeFiles/search_for_faces_node.dir/src/proxies/robot_posture_proxy.cpp.o.provides.build
.PHONY : CMakeFiles/search_for_faces_node.dir/src/proxies/robot_posture_proxy.cpp.o.provides

CMakeFiles/search_for_faces_node.dir/src/proxies/robot_posture_proxy.cpp.o.provides.build: CMakeFiles/search_for_faces_node.dir/src/proxies/robot_posture_proxy.cpp.o

CMakeFiles/search_for_faces_node.dir/src/proxies/speech_recognition_proxy.cpp.o: CMakeFiles/search_for_faces_node.dir/flags.make
CMakeFiles/search_for_faces_node.dir/src/proxies/speech_recognition_proxy.cpp.o: ../src/proxies/speech_recognition_proxy.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/manos/Desktop/nao_development/workspace/nao_samples/nao_modules/search_for_faces/build-local/CMakeFiles $(CMAKE_PROGRESS_8)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/search_for_faces_node.dir/src/proxies/speech_recognition_proxy.cpp.o"
	/usr/bin/clang++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/search_for_faces_node.dir/src/proxies/speech_recognition_proxy.cpp.o -c /home/manos/Desktop/nao_development/workspace/nao_samples/nao_modules/search_for_faces/src/proxies/speech_recognition_proxy.cpp

CMakeFiles/search_for_faces_node.dir/src/proxies/speech_recognition_proxy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/search_for_faces_node.dir/src/proxies/speech_recognition_proxy.cpp.i"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/manos/Desktop/nao_development/workspace/nao_samples/nao_modules/search_for_faces/src/proxies/speech_recognition_proxy.cpp > CMakeFiles/search_for_faces_node.dir/src/proxies/speech_recognition_proxy.cpp.i

CMakeFiles/search_for_faces_node.dir/src/proxies/speech_recognition_proxy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/search_for_faces_node.dir/src/proxies/speech_recognition_proxy.cpp.s"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/manos/Desktop/nao_development/workspace/nao_samples/nao_modules/search_for_faces/src/proxies/speech_recognition_proxy.cpp -o CMakeFiles/search_for_faces_node.dir/src/proxies/speech_recognition_proxy.cpp.s

CMakeFiles/search_for_faces_node.dir/src/proxies/speech_recognition_proxy.cpp.o.requires:
.PHONY : CMakeFiles/search_for_faces_node.dir/src/proxies/speech_recognition_proxy.cpp.o.requires

CMakeFiles/search_for_faces_node.dir/src/proxies/speech_recognition_proxy.cpp.o.provides: CMakeFiles/search_for_faces_node.dir/src/proxies/speech_recognition_proxy.cpp.o.requires
	$(MAKE) -f CMakeFiles/search_for_faces_node.dir/build.make CMakeFiles/search_for_faces_node.dir/src/proxies/speech_recognition_proxy.cpp.o.provides.build
.PHONY : CMakeFiles/search_for_faces_node.dir/src/proxies/speech_recognition_proxy.cpp.o.provides

CMakeFiles/search_for_faces_node.dir/src/proxies/speech_recognition_proxy.cpp.o.provides.build: CMakeFiles/search_for_faces_node.dir/src/proxies/speech_recognition_proxy.cpp.o

CMakeFiles/search_for_faces_node.dir/src/proxies/face_detection_proxy.cpp.o: CMakeFiles/search_for_faces_node.dir/flags.make
CMakeFiles/search_for_faces_node.dir/src/proxies/face_detection_proxy.cpp.o: ../src/proxies/face_detection_proxy.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/manos/Desktop/nao_development/workspace/nao_samples/nao_modules/search_for_faces/build-local/CMakeFiles $(CMAKE_PROGRESS_9)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/search_for_faces_node.dir/src/proxies/face_detection_proxy.cpp.o"
	/usr/bin/clang++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/search_for_faces_node.dir/src/proxies/face_detection_proxy.cpp.o -c /home/manos/Desktop/nao_development/workspace/nao_samples/nao_modules/search_for_faces/src/proxies/face_detection_proxy.cpp

CMakeFiles/search_for_faces_node.dir/src/proxies/face_detection_proxy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/search_for_faces_node.dir/src/proxies/face_detection_proxy.cpp.i"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/manos/Desktop/nao_development/workspace/nao_samples/nao_modules/search_for_faces/src/proxies/face_detection_proxy.cpp > CMakeFiles/search_for_faces_node.dir/src/proxies/face_detection_proxy.cpp.i

CMakeFiles/search_for_faces_node.dir/src/proxies/face_detection_proxy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/search_for_faces_node.dir/src/proxies/face_detection_proxy.cpp.s"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/manos/Desktop/nao_development/workspace/nao_samples/nao_modules/search_for_faces/src/proxies/face_detection_proxy.cpp -o CMakeFiles/search_for_faces_node.dir/src/proxies/face_detection_proxy.cpp.s

CMakeFiles/search_for_faces_node.dir/src/proxies/face_detection_proxy.cpp.o.requires:
.PHONY : CMakeFiles/search_for_faces_node.dir/src/proxies/face_detection_proxy.cpp.o.requires

CMakeFiles/search_for_faces_node.dir/src/proxies/face_detection_proxy.cpp.o.provides: CMakeFiles/search_for_faces_node.dir/src/proxies/face_detection_proxy.cpp.o.requires
	$(MAKE) -f CMakeFiles/search_for_faces_node.dir/build.make CMakeFiles/search_for_faces_node.dir/src/proxies/face_detection_proxy.cpp.o.provides.build
.PHONY : CMakeFiles/search_for_faces_node.dir/src/proxies/face_detection_proxy.cpp.o.provides

CMakeFiles/search_for_faces_node.dir/src/proxies/face_detection_proxy.cpp.o.provides.build: CMakeFiles/search_for_faces_node.dir/src/proxies/face_detection_proxy.cpp.o

CMakeFiles/search_for_faces_node.dir/src/local_broker/local_broker.cpp.o: CMakeFiles/search_for_faces_node.dir/flags.make
CMakeFiles/search_for_faces_node.dir/src/local_broker/local_broker.cpp.o: ../src/local_broker/local_broker.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/manos/Desktop/nao_development/workspace/nao_samples/nao_modules/search_for_faces/build-local/CMakeFiles $(CMAKE_PROGRESS_10)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/search_for_faces_node.dir/src/local_broker/local_broker.cpp.o"
	/usr/bin/clang++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/search_for_faces_node.dir/src/local_broker/local_broker.cpp.o -c /home/manos/Desktop/nao_development/workspace/nao_samples/nao_modules/search_for_faces/src/local_broker/local_broker.cpp

CMakeFiles/search_for_faces_node.dir/src/local_broker/local_broker.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/search_for_faces_node.dir/src/local_broker/local_broker.cpp.i"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/manos/Desktop/nao_development/workspace/nao_samples/nao_modules/search_for_faces/src/local_broker/local_broker.cpp > CMakeFiles/search_for_faces_node.dir/src/local_broker/local_broker.cpp.i

CMakeFiles/search_for_faces_node.dir/src/local_broker/local_broker.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/search_for_faces_node.dir/src/local_broker/local_broker.cpp.s"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/manos/Desktop/nao_development/workspace/nao_samples/nao_modules/search_for_faces/src/local_broker/local_broker.cpp -o CMakeFiles/search_for_faces_node.dir/src/local_broker/local_broker.cpp.s

CMakeFiles/search_for_faces_node.dir/src/local_broker/local_broker.cpp.o.requires:
.PHONY : CMakeFiles/search_for_faces_node.dir/src/local_broker/local_broker.cpp.o.requires

CMakeFiles/search_for_faces_node.dir/src/local_broker/local_broker.cpp.o.provides: CMakeFiles/search_for_faces_node.dir/src/local_broker/local_broker.cpp.o.requires
	$(MAKE) -f CMakeFiles/search_for_faces_node.dir/build.make CMakeFiles/search_for_faces_node.dir/src/local_broker/local_broker.cpp.o.provides.build
.PHONY : CMakeFiles/search_for_faces_node.dir/src/local_broker/local_broker.cpp.o.provides

CMakeFiles/search_for_faces_node.dir/src/local_broker/local_broker.cpp.o.provides.build: CMakeFiles/search_for_faces_node.dir/src/local_broker/local_broker.cpp.o

# Object files for target search_for_faces_node
search_for_faces_node_OBJECTS = \
"CMakeFiles/search_for_faces_node.dir/src/main.cpp.o" \
"CMakeFiles/search_for_faces_node.dir/src/module.cpp.o" \
"CMakeFiles/search_for_faces_node.dir/src/proxies/memory_proxy.cpp.o" \
"CMakeFiles/search_for_faces_node.dir/src/proxies/text_to_speech_proxy.cpp.o" \
"CMakeFiles/search_for_faces_node.dir/src/proxies/sensors_proxy.cpp.o" \
"CMakeFiles/search_for_faces_node.dir/src/proxies/motion_proxy.cpp.o" \
"CMakeFiles/search_for_faces_node.dir/src/proxies/robot_posture_proxy.cpp.o" \
"CMakeFiles/search_for_faces_node.dir/src/proxies/speech_recognition_proxy.cpp.o" \
"CMakeFiles/search_for_faces_node.dir/src/proxies/face_detection_proxy.cpp.o" \
"CMakeFiles/search_for_faces_node.dir/src/local_broker/local_broker.cpp.o"

# External object files for target search_for_faces_node
search_for_faces_node_EXTERNAL_OBJECTS =

sdk/bin/search_for_faces_node: CMakeFiles/search_for_faces_node.dir/src/main.cpp.o
sdk/bin/search_for_faces_node: CMakeFiles/search_for_faces_node.dir/src/module.cpp.o
sdk/bin/search_for_faces_node: CMakeFiles/search_for_faces_node.dir/src/proxies/memory_proxy.cpp.o
sdk/bin/search_for_faces_node: CMakeFiles/search_for_faces_node.dir/src/proxies/text_to_speech_proxy.cpp.o
sdk/bin/search_for_faces_node: CMakeFiles/search_for_faces_node.dir/src/proxies/sensors_proxy.cpp.o
sdk/bin/search_for_faces_node: CMakeFiles/search_for_faces_node.dir/src/proxies/motion_proxy.cpp.o
sdk/bin/search_for_faces_node: CMakeFiles/search_for_faces_node.dir/src/proxies/robot_posture_proxy.cpp.o
sdk/bin/search_for_faces_node: CMakeFiles/search_for_faces_node.dir/src/proxies/speech_recognition_proxy.cpp.o
sdk/bin/search_for_faces_node: CMakeFiles/search_for_faces_node.dir/src/proxies/face_detection_proxy.cpp.o
sdk/bin/search_for_faces_node: CMakeFiles/search_for_faces_node.dir/src/local_broker/local_broker.cpp.o
sdk/bin/search_for_faces_node: /home/manos/Desktop/nao_development/naoqi-sdk-1.14.5-linux64/lib/libalproxies.so
sdk/bin/search_for_faces_node: /home/manos/Desktop/nao_development/naoqi-sdk-1.14.5-linux64/lib/libalcommon.so
sdk/bin/search_for_faces_node: /home/manos/Desktop/nao_development/naoqi-sdk-1.14.5-linux64/lib/libalsoap.so
sdk/bin/search_for_faces_node: /home/manos/Desktop/nao_development/naoqi-sdk-1.14.5-linux64/lib/librttools.so
sdk/bin/search_for_faces_node: /home/manos/Desktop/nao_development/naoqi-sdk-1.14.5-linux64/lib/libalthread.so
sdk/bin/search_for_faces_node: /home/manos/Desktop/nao_development/naoqi-sdk-1.14.5-linux64/lib/libboost_signals-mt.a
sdk/bin/search_for_faces_node: /home/manos/Desktop/nao_development/naoqi-sdk-1.14.5-linux64/lib/libalvalue.so
sdk/bin/search_for_faces_node: /home/manos/Desktop/nao_development/naoqi-sdk-1.14.5-linux64/lib/libtinyxml.so
sdk/bin/search_for_faces_node: /usr/lib/x86_64-linux-gnu/librt.so
sdk/bin/search_for_faces_node: /home/manos/Desktop/nao_development/naoqi-sdk-1.14.5-linux64/lib/libqi.so
sdk/bin/search_for_faces_node: /home/manos/Desktop/nao_development/naoqi-sdk-1.14.5-linux64/lib/libboost_filesystem-mt.a
sdk/bin/search_for_faces_node: /home/manos/Desktop/nao_development/naoqi-sdk-1.14.5-linux64/lib/libboost_thread-mt.a
sdk/bin/search_for_faces_node: /home/manos/Desktop/nao_development/naoqi-sdk-1.14.5-linux64/lib/libboost_system-mt.a
sdk/bin/search_for_faces_node: /usr/lib/x86_64-linux-gnu/libdl.so
sdk/bin/search_for_faces_node: /home/manos/Desktop/nao_development/naoqi-sdk-1.14.5-linux64/lib/libalerror.so
sdk/bin/search_for_faces_node: /home/manos/Desktop/nao_development/naoqi-sdk-1.14.5-linux64/lib/libboost_program_options-mt.a
sdk/bin/search_for_faces_node: CMakeFiles/search_for_faces_node.dir/build.make
sdk/bin/search_for_faces_node: CMakeFiles/search_for_faces_node.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable sdk/bin/search_for_faces_node"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/search_for_faces_node.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/search_for_faces_node.dir/build: sdk/bin/search_for_faces_node
.PHONY : CMakeFiles/search_for_faces_node.dir/build

CMakeFiles/search_for_faces_node.dir/requires: CMakeFiles/search_for_faces_node.dir/src/main.cpp.o.requires
CMakeFiles/search_for_faces_node.dir/requires: CMakeFiles/search_for_faces_node.dir/src/module.cpp.o.requires
CMakeFiles/search_for_faces_node.dir/requires: CMakeFiles/search_for_faces_node.dir/src/proxies/memory_proxy.cpp.o.requires
CMakeFiles/search_for_faces_node.dir/requires: CMakeFiles/search_for_faces_node.dir/src/proxies/text_to_speech_proxy.cpp.o.requires
CMakeFiles/search_for_faces_node.dir/requires: CMakeFiles/search_for_faces_node.dir/src/proxies/sensors_proxy.cpp.o.requires
CMakeFiles/search_for_faces_node.dir/requires: CMakeFiles/search_for_faces_node.dir/src/proxies/motion_proxy.cpp.o.requires
CMakeFiles/search_for_faces_node.dir/requires: CMakeFiles/search_for_faces_node.dir/src/proxies/robot_posture_proxy.cpp.o.requires
CMakeFiles/search_for_faces_node.dir/requires: CMakeFiles/search_for_faces_node.dir/src/proxies/speech_recognition_proxy.cpp.o.requires
CMakeFiles/search_for_faces_node.dir/requires: CMakeFiles/search_for_faces_node.dir/src/proxies/face_detection_proxy.cpp.o.requires
CMakeFiles/search_for_faces_node.dir/requires: CMakeFiles/search_for_faces_node.dir/src/local_broker/local_broker.cpp.o.requires
.PHONY : CMakeFiles/search_for_faces_node.dir/requires

CMakeFiles/search_for_faces_node.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/search_for_faces_node.dir/cmake_clean.cmake
.PHONY : CMakeFiles/search_for_faces_node.dir/clean

CMakeFiles/search_for_faces_node.dir/depend:
	cd /home/manos/Desktop/nao_development/workspace/nao_samples/nao_modules/search_for_faces/build-local && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/manos/Desktop/nao_development/workspace/nao_samples/nao_modules/search_for_faces /home/manos/Desktop/nao_development/workspace/nao_samples/nao_modules/search_for_faces /home/manos/Desktop/nao_development/workspace/nao_samples/nao_modules/search_for_faces/build-local /home/manos/Desktop/nao_development/workspace/nao_samples/nao_modules/search_for_faces/build-local /home/manos/Desktop/nao_development/workspace/nao_samples/nao_modules/search_for_faces/build-local/CMakeFiles/search_for_faces_node.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/search_for_faces_node.dir/depend
