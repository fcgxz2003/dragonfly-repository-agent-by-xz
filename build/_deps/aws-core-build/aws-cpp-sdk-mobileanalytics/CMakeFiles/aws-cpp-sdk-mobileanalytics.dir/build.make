# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/d7y/dragonfly-repository-agent-by-xz

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/d7y/dragonfly-repository-agent-by-xz/build

# Include any dependencies generated for this target.
include _deps/aws-core-build/aws-cpp-sdk-mobileanalytics/CMakeFiles/aws-cpp-sdk-mobileanalytics.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include _deps/aws-core-build/aws-cpp-sdk-mobileanalytics/CMakeFiles/aws-cpp-sdk-mobileanalytics.dir/compiler_depend.make

# Include the progress variables for this target.
include _deps/aws-core-build/aws-cpp-sdk-mobileanalytics/CMakeFiles/aws-cpp-sdk-mobileanalytics.dir/progress.make

# Include the compile flags for this target's objects.
include _deps/aws-core-build/aws-cpp-sdk-mobileanalytics/CMakeFiles/aws-cpp-sdk-mobileanalytics.dir/flags.make

_deps/aws-core-build/aws-cpp-sdk-mobileanalytics/CMakeFiles/aws-cpp-sdk-mobileanalytics.dir/ub_MOBILEANALYTICS.cpp.o: _deps/aws-core-build/aws-cpp-sdk-mobileanalytics/CMakeFiles/aws-cpp-sdk-mobileanalytics.dir/flags.make
_deps/aws-core-build/aws-cpp-sdk-mobileanalytics/CMakeFiles/aws-cpp-sdk-mobileanalytics.dir/ub_MOBILEANALYTICS.cpp.o: _deps/aws-core-build/aws-cpp-sdk-mobileanalytics/CMakeFiles/aws-cpp-sdk-mobileanalytics.dir/includes_CXX.rsp
_deps/aws-core-build/aws-cpp-sdk-mobileanalytics/CMakeFiles/aws-cpp-sdk-mobileanalytics.dir/ub_MOBILEANALYTICS.cpp.o: _deps/aws-core-build/aws-cpp-sdk-mobileanalytics/ub_MOBILEANALYTICS.cpp
_deps/aws-core-build/aws-cpp-sdk-mobileanalytics/CMakeFiles/aws-cpp-sdk-mobileanalytics.dir/ub_MOBILEANALYTICS.cpp.o: _deps/aws-core-build/aws-cpp-sdk-mobileanalytics/CMakeFiles/aws-cpp-sdk-mobileanalytics.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/d7y/dragonfly-repository-agent-by-xz/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object _deps/aws-core-build/aws-cpp-sdk-mobileanalytics/CMakeFiles/aws-cpp-sdk-mobileanalytics.dir/ub_MOBILEANALYTICS.cpp.o"
	cd /home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-build/aws-cpp-sdk-mobileanalytics && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT _deps/aws-core-build/aws-cpp-sdk-mobileanalytics/CMakeFiles/aws-cpp-sdk-mobileanalytics.dir/ub_MOBILEANALYTICS.cpp.o -MF CMakeFiles/aws-cpp-sdk-mobileanalytics.dir/ub_MOBILEANALYTICS.cpp.o.d -o CMakeFiles/aws-cpp-sdk-mobileanalytics.dir/ub_MOBILEANALYTICS.cpp.o -c /home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-build/aws-cpp-sdk-mobileanalytics/ub_MOBILEANALYTICS.cpp

_deps/aws-core-build/aws-cpp-sdk-mobileanalytics/CMakeFiles/aws-cpp-sdk-mobileanalytics.dir/ub_MOBILEANALYTICS.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/aws-cpp-sdk-mobileanalytics.dir/ub_MOBILEANALYTICS.cpp.i"
	cd /home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-build/aws-cpp-sdk-mobileanalytics && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-build/aws-cpp-sdk-mobileanalytics/ub_MOBILEANALYTICS.cpp > CMakeFiles/aws-cpp-sdk-mobileanalytics.dir/ub_MOBILEANALYTICS.cpp.i

_deps/aws-core-build/aws-cpp-sdk-mobileanalytics/CMakeFiles/aws-cpp-sdk-mobileanalytics.dir/ub_MOBILEANALYTICS.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/aws-cpp-sdk-mobileanalytics.dir/ub_MOBILEANALYTICS.cpp.s"
	cd /home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-build/aws-cpp-sdk-mobileanalytics && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-build/aws-cpp-sdk-mobileanalytics/ub_MOBILEANALYTICS.cpp -o CMakeFiles/aws-cpp-sdk-mobileanalytics.dir/ub_MOBILEANALYTICS.cpp.s

# Object files for target aws-cpp-sdk-mobileanalytics
aws__cpp__sdk__mobileanalytics_OBJECTS = \
"CMakeFiles/aws-cpp-sdk-mobileanalytics.dir/ub_MOBILEANALYTICS.cpp.o"

# External object files for target aws-cpp-sdk-mobileanalytics
aws__cpp__sdk__mobileanalytics_EXTERNAL_OBJECTS =

_deps/aws-core-build/aws-cpp-sdk-mobileanalytics/libaws-cpp-sdk-mobileanalytics.so: _deps/aws-core-build/aws-cpp-sdk-mobileanalytics/CMakeFiles/aws-cpp-sdk-mobileanalytics.dir/ub_MOBILEANALYTICS.cpp.o
_deps/aws-core-build/aws-cpp-sdk-mobileanalytics/libaws-cpp-sdk-mobileanalytics.so: _deps/aws-core-build/aws-cpp-sdk-mobileanalytics/CMakeFiles/aws-cpp-sdk-mobileanalytics.dir/build.make
_deps/aws-core-build/aws-cpp-sdk-mobileanalytics/libaws-cpp-sdk-mobileanalytics.so: _deps/aws-core-build/aws-cpp-sdk-core/libaws-cpp-sdk-core.so
_deps/aws-core-build/aws-cpp-sdk-mobileanalytics/libaws-cpp-sdk-mobileanalytics.so: _deps/aws-core-build/crt/aws-crt-cpp/libaws-crt-cpp.a
_deps/aws-core-build/aws-cpp-sdk-mobileanalytics/libaws-cpp-sdk-mobileanalytics.so: _deps/aws-core-build/crt/aws-crt-cpp/crt/aws-c-mqtt/libaws-c-mqtt.a
_deps/aws-core-build/aws-cpp-sdk-mobileanalytics/libaws-cpp-sdk-mobileanalytics.so: lib/libaws-c-event-stream.a
_deps/aws-core-build/aws-cpp-sdk-mobileanalytics/libaws-cpp-sdk-mobileanalytics.so: _deps/aws-core-build/crt/aws-crt-cpp/crt/aws-c-s3/libaws-c-s3.a
_deps/aws-core-build/aws-cpp-sdk-mobileanalytics/libaws-cpp-sdk-mobileanalytics.so: _deps/aws-core-build/crt/aws-crt-cpp/crt/aws-c-auth/libaws-c-auth.a
_deps/aws-core-build/aws-cpp-sdk-mobileanalytics/libaws-cpp-sdk-mobileanalytics.so: _deps/aws-core-build/crt/aws-crt-cpp/crt/aws-c-http/libaws-c-http.a
_deps/aws-core-build/aws-cpp-sdk-mobileanalytics/libaws-cpp-sdk-mobileanalytics.so: _deps/aws-core-build/crt/aws-crt-cpp/crt/aws-c-io/libaws-c-io.a
_deps/aws-core-build/aws-cpp-sdk-mobileanalytics/libaws-cpp-sdk-mobileanalytics.so: lib/libs2n.a
_deps/aws-core-build/aws-cpp-sdk-mobileanalytics/libaws-cpp-sdk-mobileanalytics.so: /usr/lib/x86_64-linux-gnu/libcrypto.so
_deps/aws-core-build/aws-cpp-sdk-mobileanalytics/libaws-cpp-sdk-mobileanalytics.so: _deps/aws-core-build/crt/aws-crt-cpp/crt/aws-c-compression/libaws-c-compression.a
_deps/aws-core-build/aws-cpp-sdk-mobileanalytics/libaws-cpp-sdk-mobileanalytics.so: _deps/aws-core-build/crt/aws-crt-cpp/crt/aws-c-cal/libaws-c-cal.a
_deps/aws-core-build/aws-cpp-sdk-mobileanalytics/libaws-cpp-sdk-mobileanalytics.so: /usr/lib/x86_64-linux-gnu/libcrypto.so
_deps/aws-core-build/aws-cpp-sdk-mobileanalytics/libaws-cpp-sdk-mobileanalytics.so: _deps/aws-core-build/crt/aws-crt-cpp/crt/aws-c-sdkutils/libaws-c-sdkutils.a
_deps/aws-core-build/aws-cpp-sdk-mobileanalytics/libaws-cpp-sdk-mobileanalytics.so: _deps/aws-core-build/crt/aws-crt-cpp/crt/aws-checksums/libaws-checksums.a
_deps/aws-core-build/aws-cpp-sdk-mobileanalytics/libaws-cpp-sdk-mobileanalytics.so: _deps/aws-core-build/crt/aws-crt-cpp/crt/aws-c-common/libaws-c-common.a
_deps/aws-core-build/aws-cpp-sdk-mobileanalytics/libaws-cpp-sdk-mobileanalytics.so: _deps/aws-core-build/aws-cpp-sdk-mobileanalytics/CMakeFiles/aws-cpp-sdk-mobileanalytics.dir/objects1.rsp
_deps/aws-core-build/aws-cpp-sdk-mobileanalytics/libaws-cpp-sdk-mobileanalytics.so: _deps/aws-core-build/aws-cpp-sdk-mobileanalytics/CMakeFiles/aws-cpp-sdk-mobileanalytics.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/d7y/dragonfly-repository-agent-by-xz/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library libaws-cpp-sdk-mobileanalytics.so"
	cd /home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-build/aws-cpp-sdk-mobileanalytics && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/aws-cpp-sdk-mobileanalytics.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
_deps/aws-core-build/aws-cpp-sdk-mobileanalytics/CMakeFiles/aws-cpp-sdk-mobileanalytics.dir/build: _deps/aws-core-build/aws-cpp-sdk-mobileanalytics/libaws-cpp-sdk-mobileanalytics.so
.PHONY : _deps/aws-core-build/aws-cpp-sdk-mobileanalytics/CMakeFiles/aws-cpp-sdk-mobileanalytics.dir/build

_deps/aws-core-build/aws-cpp-sdk-mobileanalytics/CMakeFiles/aws-cpp-sdk-mobileanalytics.dir/clean:
	cd /home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-build/aws-cpp-sdk-mobileanalytics && $(CMAKE_COMMAND) -P CMakeFiles/aws-cpp-sdk-mobileanalytics.dir/cmake_clean.cmake
.PHONY : _deps/aws-core-build/aws-cpp-sdk-mobileanalytics/CMakeFiles/aws-cpp-sdk-mobileanalytics.dir/clean

_deps/aws-core-build/aws-cpp-sdk-mobileanalytics/CMakeFiles/aws-cpp-sdk-mobileanalytics.dir/depend:
	cd /home/d7y/dragonfly-repository-agent-by-xz/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/d7y/dragonfly-repository-agent-by-xz /home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-mobileanalytics /home/d7y/dragonfly-repository-agent-by-xz/build /home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-build/aws-cpp-sdk-mobileanalytics /home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-build/aws-cpp-sdk-mobileanalytics/CMakeFiles/aws-cpp-sdk-mobileanalytics.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : _deps/aws-core-build/aws-cpp-sdk-mobileanalytics/CMakeFiles/aws-cpp-sdk-mobileanalytics.dir/depend

