# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/media/faizainur/Data/Kuliah/Semester 4 2019/Algoritma/UTS/src"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/media/faizainur/Data/Kuliah/Semester 4 2019/Algoritma/UTS/src"

# Include any dependencies generated for this target.
include CMakeFiles/../build/sorting.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/../build/sorting.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/../build/sorting.dir/flags.make

CMakeFiles/../build/sorting.dir/main.cpp.o: CMakeFiles/../build/sorting.dir/flags.make
CMakeFiles/../build/sorting.dir/main.cpp.o: main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/media/faizainur/Data/Kuliah/Semester 4 2019/Algoritma/UTS/src/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/../build/sorting.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/../build/sorting.dir/main.cpp.o -c "/media/faizainur/Data/Kuliah/Semester 4 2019/Algoritma/UTS/src/main.cpp"

CMakeFiles/../build/sorting.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/../build/sorting.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/media/faizainur/Data/Kuliah/Semester 4 2019/Algoritma/UTS/src/main.cpp" > CMakeFiles/../build/sorting.dir/main.cpp.i

CMakeFiles/../build/sorting.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/../build/sorting.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/media/faizainur/Data/Kuliah/Semester 4 2019/Algoritma/UTS/src/main.cpp" -o CMakeFiles/../build/sorting.dir/main.cpp.s

CMakeFiles/../build/sorting.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/../build/sorting.dir/main.cpp.o.requires

CMakeFiles/../build/sorting.dir/main.cpp.o.provides: CMakeFiles/../build/sorting.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/../build/sorting.dir/build.make CMakeFiles/../build/sorting.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/../build/sorting.dir/main.cpp.o.provides

CMakeFiles/../build/sorting.dir/main.cpp.o.provides.build: CMakeFiles/../build/sorting.dir/main.cpp.o


CMakeFiles/../build/sorting.dir/classes/gen.cpp.o: CMakeFiles/../build/sorting.dir/flags.make
CMakeFiles/../build/sorting.dir/classes/gen.cpp.o: classes/gen.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/media/faizainur/Data/Kuliah/Semester 4 2019/Algoritma/UTS/src/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/../build/sorting.dir/classes/gen.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/../build/sorting.dir/classes/gen.cpp.o -c "/media/faizainur/Data/Kuliah/Semester 4 2019/Algoritma/UTS/src/classes/gen.cpp"

CMakeFiles/../build/sorting.dir/classes/gen.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/../build/sorting.dir/classes/gen.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/media/faizainur/Data/Kuliah/Semester 4 2019/Algoritma/UTS/src/classes/gen.cpp" > CMakeFiles/../build/sorting.dir/classes/gen.cpp.i

CMakeFiles/../build/sorting.dir/classes/gen.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/../build/sorting.dir/classes/gen.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/media/faizainur/Data/Kuliah/Semester 4 2019/Algoritma/UTS/src/classes/gen.cpp" -o CMakeFiles/../build/sorting.dir/classes/gen.cpp.s

CMakeFiles/../build/sorting.dir/classes/gen.cpp.o.requires:

.PHONY : CMakeFiles/../build/sorting.dir/classes/gen.cpp.o.requires

CMakeFiles/../build/sorting.dir/classes/gen.cpp.o.provides: CMakeFiles/../build/sorting.dir/classes/gen.cpp.o.requires
	$(MAKE) -f CMakeFiles/../build/sorting.dir/build.make CMakeFiles/../build/sorting.dir/classes/gen.cpp.o.provides.build
.PHONY : CMakeFiles/../build/sorting.dir/classes/gen.cpp.o.provides

CMakeFiles/../build/sorting.dir/classes/gen.cpp.o.provides.build: CMakeFiles/../build/sorting.dir/classes/gen.cpp.o


CMakeFiles/../build/sorting.dir/classes/sort.cpp.o: CMakeFiles/../build/sorting.dir/flags.make
CMakeFiles/../build/sorting.dir/classes/sort.cpp.o: classes/sort.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/media/faizainur/Data/Kuliah/Semester 4 2019/Algoritma/UTS/src/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/../build/sorting.dir/classes/sort.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/../build/sorting.dir/classes/sort.cpp.o -c "/media/faizainur/Data/Kuliah/Semester 4 2019/Algoritma/UTS/src/classes/sort.cpp"

CMakeFiles/../build/sorting.dir/classes/sort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/../build/sorting.dir/classes/sort.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/media/faizainur/Data/Kuliah/Semester 4 2019/Algoritma/UTS/src/classes/sort.cpp" > CMakeFiles/../build/sorting.dir/classes/sort.cpp.i

CMakeFiles/../build/sorting.dir/classes/sort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/../build/sorting.dir/classes/sort.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/media/faizainur/Data/Kuliah/Semester 4 2019/Algoritma/UTS/src/classes/sort.cpp" -o CMakeFiles/../build/sorting.dir/classes/sort.cpp.s

CMakeFiles/../build/sorting.dir/classes/sort.cpp.o.requires:

.PHONY : CMakeFiles/../build/sorting.dir/classes/sort.cpp.o.requires

CMakeFiles/../build/sorting.dir/classes/sort.cpp.o.provides: CMakeFiles/../build/sorting.dir/classes/sort.cpp.o.requires
	$(MAKE) -f CMakeFiles/../build/sorting.dir/build.make CMakeFiles/../build/sorting.dir/classes/sort.cpp.o.provides.build
.PHONY : CMakeFiles/../build/sorting.dir/classes/sort.cpp.o.provides

CMakeFiles/../build/sorting.dir/classes/sort.cpp.o.provides.build: CMakeFiles/../build/sorting.dir/classes/sort.cpp.o


# Object files for target ../build/sorting
__/build/sorting_OBJECTS = \
"CMakeFiles/../build/sorting.dir/main.cpp.o" \
"CMakeFiles/../build/sorting.dir/classes/gen.cpp.o" \
"CMakeFiles/../build/sorting.dir/classes/sort.cpp.o"

# External object files for target ../build/sorting
__/build/sorting_EXTERNAL_OBJECTS =

../build/sorting: CMakeFiles/../build/sorting.dir/main.cpp.o
../build/sorting: CMakeFiles/../build/sorting.dir/classes/gen.cpp.o
../build/sorting: CMakeFiles/../build/sorting.dir/classes/sort.cpp.o
../build/sorting: CMakeFiles/../build/sorting.dir/build.make
../build/sorting: CMakeFiles/../build/sorting.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/media/faizainur/Data/Kuliah/Semester 4 2019/Algoritma/UTS/src/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable ../build/sorting"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/../build/sorting.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/../build/sorting.dir/build: ../build/sorting

.PHONY : CMakeFiles/../build/sorting.dir/build

CMakeFiles/../build/sorting.dir/requires: CMakeFiles/../build/sorting.dir/main.cpp.o.requires
CMakeFiles/../build/sorting.dir/requires: CMakeFiles/../build/sorting.dir/classes/gen.cpp.o.requires
CMakeFiles/../build/sorting.dir/requires: CMakeFiles/../build/sorting.dir/classes/sort.cpp.o.requires

.PHONY : CMakeFiles/../build/sorting.dir/requires

CMakeFiles/../build/sorting.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/../build/sorting.dir/cmake_clean.cmake
.PHONY : CMakeFiles/../build/sorting.dir/clean

CMakeFiles/../build/sorting.dir/depend:
	cd "/media/faizainur/Data/Kuliah/Semester 4 2019/Algoritma/UTS/src" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/media/faizainur/Data/Kuliah/Semester 4 2019/Algoritma/UTS/src" "/media/faizainur/Data/Kuliah/Semester 4 2019/Algoritma/UTS/src" "/media/faizainur/Data/Kuliah/Semester 4 2019/Algoritma/UTS/src" "/media/faizainur/Data/Kuliah/Semester 4 2019/Algoritma/UTS/src" "/media/faizainur/Data/Kuliah/Semester 4 2019/Algoritma/UTS/src/build/sorting.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/../build/sorting.dir/depend

