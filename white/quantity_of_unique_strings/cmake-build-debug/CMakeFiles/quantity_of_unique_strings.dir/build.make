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
CMAKE_SOURCE_DIR = C:\Users\inssl\Desktop\VS\quantity_of_unique_strings

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\inssl\Desktop\VS\quantity_of_unique_strings\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/quantity_of_unique_strings.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/quantity_of_unique_strings.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/quantity_of_unique_strings.dir/flags.make

CMakeFiles/quantity_of_unique_strings.dir/main.cpp.obj: CMakeFiles/quantity_of_unique_strings.dir/flags.make
CMakeFiles/quantity_of_unique_strings.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\inssl\Desktop\VS\quantity_of_unique_strings\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/quantity_of_unique_strings.dir/main.cpp.obj"
	X:\dev\mingw64\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\quantity_of_unique_strings.dir\main.cpp.obj -c C:\Users\inssl\Desktop\VS\quantity_of_unique_strings\main.cpp

CMakeFiles/quantity_of_unique_strings.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/quantity_of_unique_strings.dir/main.cpp.i"
	X:\dev\mingw64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\inssl\Desktop\VS\quantity_of_unique_strings\main.cpp > CMakeFiles\quantity_of_unique_strings.dir\main.cpp.i

CMakeFiles/quantity_of_unique_strings.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/quantity_of_unique_strings.dir/main.cpp.s"
	X:\dev\mingw64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\inssl\Desktop\VS\quantity_of_unique_strings\main.cpp -o CMakeFiles\quantity_of_unique_strings.dir\main.cpp.s

# Object files for target quantity_of_unique_strings
quantity_of_unique_strings_OBJECTS = \
"CMakeFiles/quantity_of_unique_strings.dir/main.cpp.obj"

# External object files for target quantity_of_unique_strings
quantity_of_unique_strings_EXTERNAL_OBJECTS =

quantity_of_unique_strings.exe: CMakeFiles/quantity_of_unique_strings.dir/main.cpp.obj
quantity_of_unique_strings.exe: CMakeFiles/quantity_of_unique_strings.dir/build.make
quantity_of_unique_strings.exe: CMakeFiles/quantity_of_unique_strings.dir/linklibs.rsp
quantity_of_unique_strings.exe: CMakeFiles/quantity_of_unique_strings.dir/objects1.rsp
quantity_of_unique_strings.exe: CMakeFiles/quantity_of_unique_strings.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\inssl\Desktop\VS\quantity_of_unique_strings\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable quantity_of_unique_strings.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\quantity_of_unique_strings.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/quantity_of_unique_strings.dir/build: quantity_of_unique_strings.exe

.PHONY : CMakeFiles/quantity_of_unique_strings.dir/build

CMakeFiles/quantity_of_unique_strings.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\quantity_of_unique_strings.dir\cmake_clean.cmake
.PHONY : CMakeFiles/quantity_of_unique_strings.dir/clean

CMakeFiles/quantity_of_unique_strings.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\inssl\Desktop\VS\quantity_of_unique_strings C:\Users\inssl\Desktop\VS\quantity_of_unique_strings C:\Users\inssl\Desktop\VS\quantity_of_unique_strings\cmake-build-debug C:\Users\inssl\Desktop\VS\quantity_of_unique_strings\cmake-build-debug C:\Users\inssl\Desktop\VS\quantity_of_unique_strings\cmake-build-debug\CMakeFiles\quantity_of_unique_strings.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/quantity_of_unique_strings.dir/depend

