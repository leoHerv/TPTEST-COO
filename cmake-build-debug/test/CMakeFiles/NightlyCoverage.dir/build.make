# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/c/Users/leooh/Documents/Ecole/Université/M1/COO/CLION/TPTEST

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/leooh/Documents/Ecole/Université/M1/COO/CLION/TPTEST/cmake-build-debug

# Utility rule file for NightlyCoverage.

# Include any custom commands dependencies for this target.
include test/CMakeFiles/NightlyCoverage.dir/compiler_depend.make

# Include the progress variables for this target.
include test/CMakeFiles/NightlyCoverage.dir/progress.make

test/CMakeFiles/NightlyCoverage:
	cd /mnt/c/Users/leooh/Documents/Ecole/Université/M1/COO/CLION/TPTEST/cmake-build-debug/test && /usr/bin/ctest -D NightlyCoverage

NightlyCoverage: test/CMakeFiles/NightlyCoverage
NightlyCoverage: test/CMakeFiles/NightlyCoverage.dir/build.make
.PHONY : NightlyCoverage

# Rule to build all files generated by this target.
test/CMakeFiles/NightlyCoverage.dir/build: NightlyCoverage
.PHONY : test/CMakeFiles/NightlyCoverage.dir/build

test/CMakeFiles/NightlyCoverage.dir/clean:
	cd /mnt/c/Users/leooh/Documents/Ecole/Université/M1/COO/CLION/TPTEST/cmake-build-debug/test && $(CMAKE_COMMAND) -P CMakeFiles/NightlyCoverage.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/NightlyCoverage.dir/clean

test/CMakeFiles/NightlyCoverage.dir/depend:
	cd /mnt/c/Users/leooh/Documents/Ecole/Université/M1/COO/CLION/TPTEST/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/leooh/Documents/Ecole/Université/M1/COO/CLION/TPTEST /mnt/c/Users/leooh/Documents/Ecole/Université/M1/COO/CLION/TPTEST/test /mnt/c/Users/leooh/Documents/Ecole/Université/M1/COO/CLION/TPTEST/cmake-build-debug /mnt/c/Users/leooh/Documents/Ecole/Université/M1/COO/CLION/TPTEST/cmake-build-debug/test /mnt/c/Users/leooh/Documents/Ecole/Université/M1/COO/CLION/TPTEST/cmake-build-debug/test/CMakeFiles/NightlyCoverage.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : test/CMakeFiles/NightlyCoverage.dir/depend

