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
CMAKE_SOURCE_DIR = "C:\Users\inssl\Desktop\VS\capitals handbook"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\inssl\Desktop\VS\capitals handbook\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/capitals_handbook.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/capitals_handbook.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/capitals_handbook.dir/flags.make

CMakeFiles/capitals_handbook.dir/main.cpp.obj: CMakeFiles/capitals_handbook.dir/flags.make
CMakeFiles/capitals_handbook.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\inssl\Desktop\VS\capitals handbook\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/capitals_handbook.dir/main.cpp.obj"
	X:\dev\mingw64\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\capitals_handbook.dir\main.cpp.obj -c "C:\Users\inssl\Desktop\VS\capitals handbook\main.cpp"

CMakeFiles/capitals_handbook.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/capitals_handbook.dir/main.cpp.i"
	X:\dev\mingw64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\inssl\Desktop\VS\capitals handbook\main.cpp" > CMakeFiles\capitals_handbook.dir\main.cpp.i

CMakeFiles/capitals_handbook.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/capitals_handbook.dir/main.cpp.s"
	X:\dev\mingw64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\inssl\Desktop\VS\capitals handbook\main.cpp" -o CMakeFiles\capitals_handbook.dir\main.cpp.s

# Object files for target capitals_handbook
capitals_handbook_OBJECTS = \
"CMakeFiles/capitals_handbook.dir/main.cpp.obj"

# External object files for target capitals_handbook
capitals_handbook_EXTERNAL_OBJECTS =

capitals_handbook.exe: CMakeFiles/capitals_handbook.dir/main.cpp.obj
capitals_handbook.exe: CMakeFiles/capitals_handbook.dir/build.make
capitals_handbook.exe: CMakeFiles/capitals_handbook.dir/linklibs.rsp
capitals_handbook.exe: CMakeFiles/capitals_handbook.dir/objects1.rsp
capitals_handbook.exe: CMakeFiles/capitals_handbook.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\inssl\Desktop\VS\capitals handbook\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable capitals_handbook.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\capitals_handbook.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/capitals_handbook.dir/build: capitals_handbook.exe

.PHONY : CMakeFiles/capitals_handbook.dir/build

CMakeFiles/capitals_handbook.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\capitals_handbook.dir\cmake_clean.cmake
.PHONY : CMakeFiles/capitals_handbook.dir/clean

CMakeFiles/capitals_handbook.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\inssl\Desktop\VS\capitals handbook" "C:\Users\inssl\Desktop\VS\capitals handbook" "C:\Users\inssl\Desktop\VS\capitals handbook\cmake-build-debug" "C:\Users\inssl\Desktop\VS\capitals handbook\cmake-build-debug" "C:\Users\inssl\Desktop\VS\capitals handbook\cmake-build-debug\CMakeFiles\capitals_handbook.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/capitals_handbook.dir/depend

