# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /cygdrive/c/Users/User/.CLion2019.3/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/User/.CLion2019.3/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/d/Ofek/ubuntu/shared/maman11/2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/d/Ofek/ubuntu/shared/maman11/2/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/check.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/check.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/check.dir/flags.make

CMakeFiles/check.dir/main.c.o: CMakeFiles/check.dir/flags.make
CMakeFiles/check.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/d/Ofek/ubuntu/shared/maman11/2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/check.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/check.dir/main.c.o   -c /cygdrive/d/Ofek/ubuntu/shared/maman11/2/main.c

CMakeFiles/check.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/check.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/d/Ofek/ubuntu/shared/maman11/2/main.c > CMakeFiles/check.dir/main.c.i

CMakeFiles/check.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/check.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/d/Ofek/ubuntu/shared/maman11/2/main.c -o CMakeFiles/check.dir/main.c.s

CMakeFiles/check.dir/pattern_finder.c.o: CMakeFiles/check.dir/flags.make
CMakeFiles/check.dir/pattern_finder.c.o: ../pattern_finder.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/d/Ofek/ubuntu/shared/maman11/2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/check.dir/pattern_finder.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/check.dir/pattern_finder.c.o   -c /cygdrive/d/Ofek/ubuntu/shared/maman11/2/pattern_finder.c

CMakeFiles/check.dir/pattern_finder.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/check.dir/pattern_finder.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/d/Ofek/ubuntu/shared/maman11/2/pattern_finder.c > CMakeFiles/check.dir/pattern_finder.c.i

CMakeFiles/check.dir/pattern_finder.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/check.dir/pattern_finder.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/d/Ofek/ubuntu/shared/maman11/2/pattern_finder.c -o CMakeFiles/check.dir/pattern_finder.c.s

# Object files for target check
check_OBJECTS = \
"CMakeFiles/check.dir/main.c.o" \
"CMakeFiles/check.dir/pattern_finder.c.o"

# External object files for target check
check_EXTERNAL_OBJECTS =

check.exe: CMakeFiles/check.dir/main.c.o
check.exe: CMakeFiles/check.dir/pattern_finder.c.o
check.exe: CMakeFiles/check.dir/build.make
check.exe: CMakeFiles/check.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/d/Ofek/ubuntu/shared/maman11/2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable check.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/check.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/check.dir/build: check.exe

.PHONY : CMakeFiles/check.dir/build

CMakeFiles/check.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/check.dir/cmake_clean.cmake
.PHONY : CMakeFiles/check.dir/clean

CMakeFiles/check.dir/depend:
	cd /cygdrive/d/Ofek/ubuntu/shared/maman11/2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/d/Ofek/ubuntu/shared/maman11/2 /cygdrive/d/Ofek/ubuntu/shared/maman11/2 /cygdrive/d/Ofek/ubuntu/shared/maman11/2/cmake-build-debug /cygdrive/d/Ofek/ubuntu/shared/maman11/2/cmake-build-debug /cygdrive/d/Ofek/ubuntu/shared/maman11/2/cmake-build-debug/CMakeFiles/check.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/check.dir/depend

