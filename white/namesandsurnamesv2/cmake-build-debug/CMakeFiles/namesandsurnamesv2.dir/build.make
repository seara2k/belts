# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "X:\CLion 2019.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "X:\CLion 2019.3\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\inssl\Desktop\VS\namesandsurnamesv2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\inssl\Desktop\VS\namesandsurnamesv2\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/namesandsurnamesv2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/namesandsurnamesv2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/namesandsurnamesv2.dir/flags.make

CMakeFiles/namesandsurnamesv2.dir/main.cpp.obj: CMakeFiles/namesandsurnamesv2.dir/flags.make
CMakeFiles/namesandsurnamesv2.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\inssl\Desktop\VS\namesandsurnamesv2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/namesandsurnamesv2.dir/main.cpp.obj"
	X:\dev\mingw64\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\namesandsurnamesv2.dir\main.cpp.obj -c C:\Users\inssl\Desktop\VS\namesandsurnamesv2\main.cpp

CMakeFiles/namesandsurnamesv2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/namesandsurnamesv2.dir/main.cpp.i"
	X:\dev\mingw64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\inssl\Desktop\VS\namesandsurnamesv2\main.cpp > CMakeFiles\namesandsurnamesv2.dir\main.cpp.i

CMakeFiles/namesandsurnamesv2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/namesandsurnamesv2.dir/main.cpp.s"
	X:\dev\mingw64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\inssl\Desktop\VS\namesandsurnamesv2\main.cpp -o CMakeFiles\namesandsurnamesv2.dir\main.cpp.s

# Object files for target namesandsurnamesv2
namesandsurnamesv2_OBJECTS = \
"CMakeFiles/namesandsurnamesv2.dir/main.cpp.obj"

# External object files for target namesandsurnamesv2
namesandsurnamesv2_EXTERNAL_OBJECTS =

namesandsurnamesv2.exe: CMakeFiles/namesandsurnamesv2.dir/main.cpp.obj
namesandsurnamesv2.exe: CMakeFiles/namesandsurnamesv2.dir/build.make
namesandsurnamesv2.exe: CMakeFiles/namesandsurnamesv2.dir/linklibs.rsp
namesandsurnamesv2.exe: CMakeFiles/namesandsurnamesv2.dir/objects1.rsp
namesandsurnamesv2.exe: CMakeFiles/namesandsurnamesv2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\inssl\Desktop\VS\namesandsurnamesv2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable namesandsurnamesv2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\namesandsurnamesv2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/namesandsurnamesv2.dir/build: namesandsurnamesv2.exe

.PHONY : CMakeFiles/namesandsurnamesv2.dir/build

CMakeFiles/namesandsurnamesv2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\namesandsurnamesv2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/namesandsurnamesv2.dir/clean

CMakeFiles/namesandsurnamesv2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\inssl\Desktop\VS\namesandsurnamesv2 C:\Users\inssl\Desktop\VS\namesandsurnamesv2 C:\Users\inssl\Desktop\VS\namesandsurnamesv2\cmake-build-debug C:\Users\inssl\Desktop\VS\namesandsurnamesv2\cmake-build-debug C:\Users\inssl\Desktop\VS\namesandsurnamesv2\cmake-build-debug\CMakeFiles\namesandsurnamesv2.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/namesandsurnamesv2.dir/depend
