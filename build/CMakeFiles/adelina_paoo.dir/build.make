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
CMAKE_SOURCE_DIR = /home/adelina/Desktop/adelina_paoo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/adelina/Desktop/adelina_paoo/build

# Include any dependencies generated for this target.
include CMakeFiles/adelina_paoo.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/adelina_paoo.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/adelina_paoo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/adelina_paoo.dir/flags.make

CMakeFiles/adelina_paoo.dir/main.cpp.o: CMakeFiles/adelina_paoo.dir/flags.make
CMakeFiles/adelina_paoo.dir/main.cpp.o: /home/adelina/Desktop/adelina_paoo/main.cpp
CMakeFiles/adelina_paoo.dir/main.cpp.o: CMakeFiles/adelina_paoo.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/adelina/Desktop/adelina_paoo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/adelina_paoo.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/adelina_paoo.dir/main.cpp.o -MF CMakeFiles/adelina_paoo.dir/main.cpp.o.d -o CMakeFiles/adelina_paoo.dir/main.cpp.o -c /home/adelina/Desktop/adelina_paoo/main.cpp

CMakeFiles/adelina_paoo.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/adelina_paoo.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/adelina/Desktop/adelina_paoo/main.cpp > CMakeFiles/adelina_paoo.dir/main.cpp.i

CMakeFiles/adelina_paoo.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/adelina_paoo.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/adelina/Desktop/adelina_paoo/main.cpp -o CMakeFiles/adelina_paoo.dir/main.cpp.s

# Object files for target adelina_paoo
adelina_paoo_OBJECTS = \
"CMakeFiles/adelina_paoo.dir/main.cpp.o"

# External object files for target adelina_paoo
adelina_paoo_EXTERNAL_OBJECTS =

adelina_paoo: CMakeFiles/adelina_paoo.dir/main.cpp.o
adelina_paoo: CMakeFiles/adelina_paoo.dir/build.make
adelina_paoo: CMakeFiles/adelina_paoo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/adelina/Desktop/adelina_paoo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable adelina_paoo"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/adelina_paoo.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/adelina_paoo.dir/build: adelina_paoo
.PHONY : CMakeFiles/adelina_paoo.dir/build

CMakeFiles/adelina_paoo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/adelina_paoo.dir/cmake_clean.cmake
.PHONY : CMakeFiles/adelina_paoo.dir/clean

CMakeFiles/adelina_paoo.dir/depend:
	cd /home/adelina/Desktop/adelina_paoo/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/adelina/Desktop/adelina_paoo /home/adelina/Desktop/adelina_paoo /home/adelina/Desktop/adelina_paoo/build /home/adelina/Desktop/adelina_paoo/build /home/adelina/Desktop/adelina_paoo/build/CMakeFiles/adelina_paoo.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/adelina_paoo.dir/depend

