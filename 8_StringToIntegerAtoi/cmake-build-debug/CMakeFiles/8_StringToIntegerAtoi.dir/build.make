# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = F:\C++\Leetcode-Top\8_StringToIntegerAtoi

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\C++\Leetcode-Top\8_StringToIntegerAtoi\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/8_StringToIntegerAtoi.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/8_StringToIntegerAtoi.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/8_StringToIntegerAtoi.dir/flags.make

CMakeFiles/8_StringToIntegerAtoi.dir/main.cpp.obj: CMakeFiles/8_StringToIntegerAtoi.dir/flags.make
CMakeFiles/8_StringToIntegerAtoi.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\C++\Leetcode-Top\8_StringToIntegerAtoi\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/8_StringToIntegerAtoi.dir/main.cpp.obj"
	C:\PROGRA~1\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\8_StringToIntegerAtoi.dir\main.cpp.obj -c F:\C++\Leetcode-Top\8_StringToIntegerAtoi\main.cpp

CMakeFiles/8_StringToIntegerAtoi.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/8_StringToIntegerAtoi.dir/main.cpp.i"
	C:\PROGRA~1\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\C++\Leetcode-Top\8_StringToIntegerAtoi\main.cpp > CMakeFiles\8_StringToIntegerAtoi.dir\main.cpp.i

CMakeFiles/8_StringToIntegerAtoi.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/8_StringToIntegerAtoi.dir/main.cpp.s"
	C:\PROGRA~1\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S F:\C++\Leetcode-Top\8_StringToIntegerAtoi\main.cpp -o CMakeFiles\8_StringToIntegerAtoi.dir\main.cpp.s

# Object files for target 8_StringToIntegerAtoi
8_StringToIntegerAtoi_OBJECTS = \
"CMakeFiles/8_StringToIntegerAtoi.dir/main.cpp.obj"

# External object files for target 8_StringToIntegerAtoi
8_StringToIntegerAtoi_EXTERNAL_OBJECTS =

8_StringToIntegerAtoi.exe: CMakeFiles/8_StringToIntegerAtoi.dir/main.cpp.obj
8_StringToIntegerAtoi.exe: CMakeFiles/8_StringToIntegerAtoi.dir/build.make
8_StringToIntegerAtoi.exe: CMakeFiles/8_StringToIntegerAtoi.dir/linklibs.rsp
8_StringToIntegerAtoi.exe: CMakeFiles/8_StringToIntegerAtoi.dir/objects1.rsp
8_StringToIntegerAtoi.exe: CMakeFiles/8_StringToIntegerAtoi.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\C++\Leetcode-Top\8_StringToIntegerAtoi\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 8_StringToIntegerAtoi.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\8_StringToIntegerAtoi.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/8_StringToIntegerAtoi.dir/build: 8_StringToIntegerAtoi.exe

.PHONY : CMakeFiles/8_StringToIntegerAtoi.dir/build

CMakeFiles/8_StringToIntegerAtoi.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\8_StringToIntegerAtoi.dir\cmake_clean.cmake
.PHONY : CMakeFiles/8_StringToIntegerAtoi.dir/clean

CMakeFiles/8_StringToIntegerAtoi.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\C++\Leetcode-Top\8_StringToIntegerAtoi F:\C++\Leetcode-Top\8_StringToIntegerAtoi F:\C++\Leetcode-Top\8_StringToIntegerAtoi\cmake-build-debug F:\C++\Leetcode-Top\8_StringToIntegerAtoi\cmake-build-debug F:\C++\Leetcode-Top\8_StringToIntegerAtoi\cmake-build-debug\CMakeFiles\8_StringToIntegerAtoi.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/8_StringToIntegerAtoi.dir/depend
