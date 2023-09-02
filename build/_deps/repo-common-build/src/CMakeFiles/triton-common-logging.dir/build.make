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
include _deps/repo-common-build/src/CMakeFiles/triton-common-logging.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include _deps/repo-common-build/src/CMakeFiles/triton-common-logging.dir/compiler_depend.make

# Include the progress variables for this target.
include _deps/repo-common-build/src/CMakeFiles/triton-common-logging.dir/progress.make

# Include the compile flags for this target's objects.
include _deps/repo-common-build/src/CMakeFiles/triton-common-logging.dir/flags.make

_deps/repo-common-build/src/CMakeFiles/triton-common-logging.dir/logging.cc.o: _deps/repo-common-build/src/CMakeFiles/triton-common-logging.dir/flags.make
_deps/repo-common-build/src/CMakeFiles/triton-common-logging.dir/logging.cc.o: _deps/repo-common-src/src/logging.cc
_deps/repo-common-build/src/CMakeFiles/triton-common-logging.dir/logging.cc.o: _deps/repo-common-build/src/CMakeFiles/triton-common-logging.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/d7y/dragonfly-repository-agent-by-xz/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object _deps/repo-common-build/src/CMakeFiles/triton-common-logging.dir/logging.cc.o"
	cd /home/d7y/dragonfly-repository-agent-by-xz/build/_deps/repo-common-build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT _deps/repo-common-build/src/CMakeFiles/triton-common-logging.dir/logging.cc.o -MF CMakeFiles/triton-common-logging.dir/logging.cc.o.d -o CMakeFiles/triton-common-logging.dir/logging.cc.o -c /home/d7y/dragonfly-repository-agent-by-xz/build/_deps/repo-common-src/src/logging.cc

_deps/repo-common-build/src/CMakeFiles/triton-common-logging.dir/logging.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/triton-common-logging.dir/logging.cc.i"
	cd /home/d7y/dragonfly-repository-agent-by-xz/build/_deps/repo-common-build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/d7y/dragonfly-repository-agent-by-xz/build/_deps/repo-common-src/src/logging.cc > CMakeFiles/triton-common-logging.dir/logging.cc.i

_deps/repo-common-build/src/CMakeFiles/triton-common-logging.dir/logging.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/triton-common-logging.dir/logging.cc.s"
	cd /home/d7y/dragonfly-repository-agent-by-xz/build/_deps/repo-common-build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/d7y/dragonfly-repository-agent-by-xz/build/_deps/repo-common-src/src/logging.cc -o CMakeFiles/triton-common-logging.dir/logging.cc.s

# Object files for target triton-common-logging
triton__common__logging_OBJECTS = \
"CMakeFiles/triton-common-logging.dir/logging.cc.o"

# External object files for target triton-common-logging
triton__common__logging_EXTERNAL_OBJECTS =

_deps/repo-common-build/src/libtritoncommonlogging.so: _deps/repo-common-build/src/CMakeFiles/triton-common-logging.dir/logging.cc.o
_deps/repo-common-build/src/libtritoncommonlogging.so: _deps/repo-common-build/src/CMakeFiles/triton-common-logging.dir/build.make
_deps/repo-common-build/src/libtritoncommonlogging.so: _deps/repo-common-build/src/CMakeFiles/triton-common-logging.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/d7y/dragonfly-repository-agent-by-xz/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library libtritoncommonlogging.so"
	cd /home/d7y/dragonfly-repository-agent-by-xz/build/_deps/repo-common-build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/triton-common-logging.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
_deps/repo-common-build/src/CMakeFiles/triton-common-logging.dir/build: _deps/repo-common-build/src/libtritoncommonlogging.so
.PHONY : _deps/repo-common-build/src/CMakeFiles/triton-common-logging.dir/build

_deps/repo-common-build/src/CMakeFiles/triton-common-logging.dir/clean:
	cd /home/d7y/dragonfly-repository-agent-by-xz/build/_deps/repo-common-build/src && $(CMAKE_COMMAND) -P CMakeFiles/triton-common-logging.dir/cmake_clean.cmake
.PHONY : _deps/repo-common-build/src/CMakeFiles/triton-common-logging.dir/clean

_deps/repo-common-build/src/CMakeFiles/triton-common-logging.dir/depend:
	cd /home/d7y/dragonfly-repository-agent-by-xz/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/d7y/dragonfly-repository-agent-by-xz /home/d7y/dragonfly-repository-agent-by-xz/build/_deps/repo-common-src/src /home/d7y/dragonfly-repository-agent-by-xz/build /home/d7y/dragonfly-repository-agent-by-xz/build/_deps/repo-common-build/src /home/d7y/dragonfly-repository-agent-by-xz/build/_deps/repo-common-build/src/CMakeFiles/triton-common-logging.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : _deps/repo-common-build/src/CMakeFiles/triton-common-logging.dir/depend
