# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.24

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\inf\2022-polytech-nosenkov\02_compiler

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\inf\2022-polytech-nosenkov\02_compiler\build

# Include any dependencies generated for this target.
include CMakeFiles/hellohello.cpp.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/hellohello.cpp.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/hellohello.cpp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/hellohello.cpp.dir/flags.make

CMakeFiles/hellohello.cpp.dir/func.cpp.obj: CMakeFiles/hellohello.cpp.dir/flags.make
CMakeFiles/hellohello.cpp.dir/func.cpp.obj: C:/inf/2022-polytech-nosenkov/02_compiler/func.cpp
CMakeFiles/hellohello.cpp.dir/func.cpp.obj: CMakeFiles/hellohello.cpp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\inf\2022-polytech-nosenkov\02_compiler\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/hellohello.cpp.dir/func.cpp.obj"
	C:\PROGRA~2\Dev-Cpp\MinGW64\bin\C__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/hellohello.cpp.dir/func.cpp.obj -MF CMakeFiles\hellohello.cpp.dir\func.cpp.obj.d -o CMakeFiles\hellohello.cpp.dir\func.cpp.obj -c C:\inf\2022-polytech-nosenkov\02_compiler\func.cpp

CMakeFiles/hellohello.cpp.dir/func.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hellohello.cpp.dir/func.cpp.i"
	C:\PROGRA~2\Dev-Cpp\MinGW64\bin\C__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\inf\2022-polytech-nosenkov\02_compiler\func.cpp > CMakeFiles\hellohello.cpp.dir\func.cpp.i

CMakeFiles/hellohello.cpp.dir/func.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hellohello.cpp.dir/func.cpp.s"
	C:\PROGRA~2\Dev-Cpp\MinGW64\bin\C__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\inf\2022-polytech-nosenkov\02_compiler\func.cpp -o CMakeFiles\hellohello.cpp.dir\func.cpp.s

# Object files for target hellohello.cpp
hellohello_cpp_OBJECTS = \
"CMakeFiles/hellohello.cpp.dir/func.cpp.obj"

# External object files for target hellohello.cpp
hellohello_cpp_EXTERNAL_OBJECTS =

hellohello.cpp.exe: CMakeFiles/hellohello.cpp.dir/func.cpp.obj
hellohello.cpp.exe: CMakeFiles/hellohello.cpp.dir/build.make
hellohello.cpp.exe: CMakeFiles/hellohello.cpp.dir/linklibs.rsp
hellohello.cpp.exe: CMakeFiles/hellohello.cpp.dir/objects1.rsp
hellohello.cpp.exe: CMakeFiles/hellohello.cpp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\inf\2022-polytech-nosenkov\02_compiler\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable hellohello.cpp.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\hellohello.cpp.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/hellohello.cpp.dir/build: hellohello.cpp.exe
.PHONY : CMakeFiles/hellohello.cpp.dir/build

CMakeFiles/hellohello.cpp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\hellohello.cpp.dir\cmake_clean.cmake
.PHONY : CMakeFiles/hellohello.cpp.dir/clean

CMakeFiles/hellohello.cpp.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\inf\2022-polytech-nosenkov\02_compiler C:\inf\2022-polytech-nosenkov\02_compiler C:\inf\2022-polytech-nosenkov\02_compiler\build C:\inf\2022-polytech-nosenkov\02_compiler\build C:\inf\2022-polytech-nosenkov\02_compiler\build\CMakeFiles\hellohello.cpp.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/hellohello.cpp.dir/depend
