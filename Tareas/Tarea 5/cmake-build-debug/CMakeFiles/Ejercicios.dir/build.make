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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.1.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.1.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\rodri\Documents\GitHub\Clases_cpp\Tareas\Tarea 5"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\rodri\Documents\GitHub\Clases_cpp\Tareas\Tarea 5\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Ejercicios.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Ejercicios.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Ejercicios.dir/flags.make

CMakeFiles/Ejercicios.dir/main.cpp.obj: CMakeFiles/Ejercicios.dir/flags.make
CMakeFiles/Ejercicios.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\rodri\Documents\GitHub\Clases_cpp\Tareas\Tarea 5\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Ejercicios.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Ejercicios.dir\main.cpp.obj -c "C:\Users\rodri\Documents\GitHub\Clases_cpp\Tareas\Tarea 5\main.cpp"

CMakeFiles/Ejercicios.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Ejercicios.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\rodri\Documents\GitHub\Clases_cpp\Tareas\Tarea 5\main.cpp" > CMakeFiles\Ejercicios.dir\main.cpp.i

CMakeFiles/Ejercicios.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Ejercicios.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\rodri\Documents\GitHub\Clases_cpp\Tareas\Tarea 5\main.cpp" -o CMakeFiles\Ejercicios.dir\main.cpp.s

# Object files for target Ejercicios
Ejercicios_OBJECTS = \
"CMakeFiles/Ejercicios.dir/main.cpp.obj"

# External object files for target Ejercicios
Ejercicios_EXTERNAL_OBJECTS =

Ejercicios.exe: CMakeFiles/Ejercicios.dir/main.cpp.obj
Ejercicios.exe: CMakeFiles/Ejercicios.dir/build.make
Ejercicios.exe: CMakeFiles/Ejercicios.dir/linklibs.rsp
Ejercicios.exe: CMakeFiles/Ejercicios.dir/objects1.rsp
Ejercicios.exe: CMakeFiles/Ejercicios.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\rodri\Documents\GitHub\Clases_cpp\Tareas\Tarea 5\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Ejercicios.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Ejercicios.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Ejercicios.dir/build: Ejercicios.exe

.PHONY : CMakeFiles/Ejercicios.dir/build

CMakeFiles/Ejercicios.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Ejercicios.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Ejercicios.dir/clean

CMakeFiles/Ejercicios.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\rodri\Documents\GitHub\Clases_cpp\Tareas\Tarea 5" "C:\Users\rodri\Documents\GitHub\Clases_cpp\Tareas\Tarea 5" "C:\Users\rodri\Documents\GitHub\Clases_cpp\Tareas\Tarea 5\cmake-build-debug" "C:\Users\rodri\Documents\GitHub\Clases_cpp\Tareas\Tarea 5\cmake-build-debug" "C:\Users\rodri\Documents\GitHub\Clases_cpp\Tareas\Tarea 5\cmake-build-debug\CMakeFiles\Ejercicios.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Ejercicios.dir/depend
