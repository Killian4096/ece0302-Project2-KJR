# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_SOURCE_DIR = /home/killian/ece0302-KR/ece0302-Project2-KJR

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/killian/ece0302-KR/ece0302-Project2-KJR

# Include any dependencies generated for this target.
include CMakeFiles/FindPalindrome-tests.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/FindPalindrome-tests.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/FindPalindrome-tests.dir/flags.make

CMakeFiles/FindPalindrome-tests.dir/FindPalindrome.cpp.o: CMakeFiles/FindPalindrome-tests.dir/flags.make
CMakeFiles/FindPalindrome-tests.dir/FindPalindrome.cpp.o: FindPalindrome.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/killian/ece0302-KR/ece0302-Project2-KJR/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/FindPalindrome-tests.dir/FindPalindrome.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FindPalindrome-tests.dir/FindPalindrome.cpp.o -c /home/killian/ece0302-KR/ece0302-Project2-KJR/FindPalindrome.cpp

CMakeFiles/FindPalindrome-tests.dir/FindPalindrome.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FindPalindrome-tests.dir/FindPalindrome.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/killian/ece0302-KR/ece0302-Project2-KJR/FindPalindrome.cpp > CMakeFiles/FindPalindrome-tests.dir/FindPalindrome.cpp.i

CMakeFiles/FindPalindrome-tests.dir/FindPalindrome.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FindPalindrome-tests.dir/FindPalindrome.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/killian/ece0302-KR/ece0302-Project2-KJR/FindPalindrome.cpp -o CMakeFiles/FindPalindrome-tests.dir/FindPalindrome.cpp.s

CMakeFiles/FindPalindrome-tests.dir/FindPalindrome_test.cpp.o: CMakeFiles/FindPalindrome-tests.dir/flags.make
CMakeFiles/FindPalindrome-tests.dir/FindPalindrome_test.cpp.o: FindPalindrome_test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/killian/ece0302-KR/ece0302-Project2-KJR/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/FindPalindrome-tests.dir/FindPalindrome_test.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FindPalindrome-tests.dir/FindPalindrome_test.cpp.o -c /home/killian/ece0302-KR/ece0302-Project2-KJR/FindPalindrome_test.cpp

CMakeFiles/FindPalindrome-tests.dir/FindPalindrome_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FindPalindrome-tests.dir/FindPalindrome_test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/killian/ece0302-KR/ece0302-Project2-KJR/FindPalindrome_test.cpp > CMakeFiles/FindPalindrome-tests.dir/FindPalindrome_test.cpp.i

CMakeFiles/FindPalindrome-tests.dir/FindPalindrome_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FindPalindrome-tests.dir/FindPalindrome_test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/killian/ece0302-KR/ece0302-Project2-KJR/FindPalindrome_test.cpp -o CMakeFiles/FindPalindrome-tests.dir/FindPalindrome_test.cpp.s

# Object files for target FindPalindrome-tests
FindPalindrome__tests_OBJECTS = \
"CMakeFiles/FindPalindrome-tests.dir/FindPalindrome.cpp.o" \
"CMakeFiles/FindPalindrome-tests.dir/FindPalindrome_test.cpp.o"

# External object files for target FindPalindrome-tests
FindPalindrome__tests_EXTERNAL_OBJECTS =

FindPalindrome-tests: CMakeFiles/FindPalindrome-tests.dir/FindPalindrome.cpp.o
FindPalindrome-tests: CMakeFiles/FindPalindrome-tests.dir/FindPalindrome_test.cpp.o
FindPalindrome-tests: CMakeFiles/FindPalindrome-tests.dir/build.make
FindPalindrome-tests: CMakeFiles/FindPalindrome-tests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/killian/ece0302-KR/ece0302-Project2-KJR/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable FindPalindrome-tests"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/FindPalindrome-tests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/FindPalindrome-tests.dir/build: FindPalindrome-tests

.PHONY : CMakeFiles/FindPalindrome-tests.dir/build

CMakeFiles/FindPalindrome-tests.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/FindPalindrome-tests.dir/cmake_clean.cmake
.PHONY : CMakeFiles/FindPalindrome-tests.dir/clean

CMakeFiles/FindPalindrome-tests.dir/depend:
	cd /home/killian/ece0302-KR/ece0302-Project2-KJR && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/killian/ece0302-KR/ece0302-Project2-KJR /home/killian/ece0302-KR/ece0302-Project2-KJR /home/killian/ece0302-KR/ece0302-Project2-KJR /home/killian/ece0302-KR/ece0302-Project2-KJR /home/killian/ece0302-KR/ece0302-Project2-KJR/CMakeFiles/FindPalindrome-tests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/FindPalindrome-tests.dir/depend

