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
CMAKE_SOURCE_DIR = C:\Users\inssl\Desktop\VS\mapvaluesset

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\inssl\Desktop\VS\mapvaluesset\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/mapvaluesset.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/mapvaluesset.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/mapvaluesset.dir/flags.make

CMakeFiles/mapvaluesset.dir/main.cpp.obj: CMakeFiles/mapvaluesset.dir/flags.make
CMakeFiles/mapvaluesset.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\inssl\Desktop\VS\mapvaluesset\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/mapvaluesset.dir/main.cpp.obj"
	X:\dev\mingw64\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\mapvaluesset.dir\main.cpp.obj -c C:\Users\inssl\Desktop\VS\mapvaluesset\main.cpp

CMakeFiles/mapvaluesset.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mapvaluesset.dir/main.cpp.i"
	X:\dev\mingw64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\inssl\Desktop\VS\mapvaluesset\main.cpp > CMakeFiles\mapvaluesset.dir\main.cpp.i

CMakeFiles/mapvaluesset.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mapvaluesset.dir/main.cpp.s"
	X:\dev\mingw64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\inssl\Desktop\VS\mapvaluesset\main.cpp -o CMakeFiles\mapvaluesset.dir\main.cpp.s

# Object files for target mapvaluesset
mapvaluesset_OBJECTS = \
"CMakeFiles/mapvaluesset.dir/main.cpp.obj"

# External object files for target mapvaluesset
mapvaluesset_EXTERNAL_OBJECTS =

mapvaluesset.exe: CMakeFiles/mapvaluesset.dir/main.cpp.obj
mapvaluesset.exe: CMakeFiles/mapvaluesset.dir/build.make
mapvaluesset.exe: CMakeFiles/mapvaluesset.dir/linklibs.rsp
mapvaluesset.exe: CMakeFiles/mapvaluesset.dir/objects1.rsp
mapvaluesset.exe: CMakeFiles/mapvaluesset.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\inssl\Desktop\VS\mapvaluesset\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable mapvaluesset.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\mapvaluesset.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/mapvaluesset.dir/build: mapvaluesset.exe

.PHONY : CMakeFiles/mapvaluesset.dir/build

CMakeFiles/mapvaluesset.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\mapvaluesset.dir\cmake_clean.cmake
.PHONY : CMakeFiles/mapvaluesset.dir/clean

CMakeFiles/mapvaluesset.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\inssl\Desktop\VS\mapvaluesset C:\Users\inssl\Desktop\VS\mapvaluesset C:\Users\inssl\Desktop\VS\mapvaluesset\cmake-build-debug C:\Users\inssl\Desktop\VS\mapvaluesset\cmake-build-debug C:\Users\inssl\Desktop\VS\mapvaluesset\cmake-build-debug\CMakeFiles\mapvaluesset.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/mapvaluesset.dir/depend

