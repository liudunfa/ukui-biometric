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
CMAKE_SOURCE_DIR = /home/liudun/ukui-biometric-auth/ukui-biometric-auth

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/liudun/ukui-biometric-auth/ukui-biometric-auth/build

# Include any dependencies generated for this target.
include bioauth-bin/CMakeFiles/bioauth.dir/depend.make

# Include the progress variables for this target.
include bioauth-bin/CMakeFiles/bioauth.dir/progress.make

# Include the compile flags for this target's objects.
include bioauth-bin/CMakeFiles/bioauth.dir/flags.make

bioauth-bin/CMakeFiles/bioauth.dir/bioauth_autogen/mocs_compilation.cpp.o: bioauth-bin/CMakeFiles/bioauth.dir/flags.make
bioauth-bin/CMakeFiles/bioauth.dir/bioauth_autogen/mocs_compilation.cpp.o: bioauth-bin/bioauth_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/liudun/ukui-biometric-auth/ukui-biometric-auth/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object bioauth-bin/CMakeFiles/bioauth.dir/bioauth_autogen/mocs_compilation.cpp.o"
	cd /home/liudun/ukui-biometric-auth/ukui-biometric-auth/build/bioauth-bin && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/bioauth.dir/bioauth_autogen/mocs_compilation.cpp.o -c /home/liudun/ukui-biometric-auth/ukui-biometric-auth/build/bioauth-bin/bioauth_autogen/mocs_compilation.cpp

bioauth-bin/CMakeFiles/bioauth.dir/bioauth_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bioauth.dir/bioauth_autogen/mocs_compilation.cpp.i"
	cd /home/liudun/ukui-biometric-auth/ukui-biometric-auth/build/bioauth-bin && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/liudun/ukui-biometric-auth/ukui-biometric-auth/build/bioauth-bin/bioauth_autogen/mocs_compilation.cpp > CMakeFiles/bioauth.dir/bioauth_autogen/mocs_compilation.cpp.i

bioauth-bin/CMakeFiles/bioauth.dir/bioauth_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bioauth.dir/bioauth_autogen/mocs_compilation.cpp.s"
	cd /home/liudun/ukui-biometric-auth/ukui-biometric-auth/build/bioauth-bin && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/liudun/ukui-biometric-auth/ukui-biometric-auth/build/bioauth-bin/bioauth_autogen/mocs_compilation.cpp -o CMakeFiles/bioauth.dir/bioauth_autogen/mocs_compilation.cpp.s

bioauth-bin/CMakeFiles/bioauth.dir/src/main.cpp.o: bioauth-bin/CMakeFiles/bioauth.dir/flags.make
bioauth-bin/CMakeFiles/bioauth.dir/src/main.cpp.o: ../bioauth-bin/src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/liudun/ukui-biometric-auth/ukui-biometric-auth/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object bioauth-bin/CMakeFiles/bioauth.dir/src/main.cpp.o"
	cd /home/liudun/ukui-biometric-auth/ukui-biometric-auth/build/bioauth-bin && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/bioauth.dir/src/main.cpp.o -c /home/liudun/ukui-biometric-auth/ukui-biometric-auth/bioauth-bin/src/main.cpp

bioauth-bin/CMakeFiles/bioauth.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bioauth.dir/src/main.cpp.i"
	cd /home/liudun/ukui-biometric-auth/ukui-biometric-auth/build/bioauth-bin && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/liudun/ukui-biometric-auth/ukui-biometric-auth/bioauth-bin/src/main.cpp > CMakeFiles/bioauth.dir/src/main.cpp.i

bioauth-bin/CMakeFiles/bioauth.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bioauth.dir/src/main.cpp.s"
	cd /home/liudun/ukui-biometric-auth/ukui-biometric-auth/build/bioauth-bin && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/liudun/ukui-biometric-auth/ukui-biometric-auth/bioauth-bin/src/main.cpp -o CMakeFiles/bioauth.dir/src/main.cpp.s

bioauth-bin/CMakeFiles/bioauth.dir/src/keywatcher.cpp.o: bioauth-bin/CMakeFiles/bioauth.dir/flags.make
bioauth-bin/CMakeFiles/bioauth.dir/src/keywatcher.cpp.o: ../bioauth-bin/src/keywatcher.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/liudun/ukui-biometric-auth/ukui-biometric-auth/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object bioauth-bin/CMakeFiles/bioauth.dir/src/keywatcher.cpp.o"
	cd /home/liudun/ukui-biometric-auth/ukui-biometric-auth/build/bioauth-bin && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/bioauth.dir/src/keywatcher.cpp.o -c /home/liudun/ukui-biometric-auth/ukui-biometric-auth/bioauth-bin/src/keywatcher.cpp

bioauth-bin/CMakeFiles/bioauth.dir/src/keywatcher.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bioauth.dir/src/keywatcher.cpp.i"
	cd /home/liudun/ukui-biometric-auth/ukui-biometric-auth/build/bioauth-bin && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/liudun/ukui-biometric-auth/ukui-biometric-auth/bioauth-bin/src/keywatcher.cpp > CMakeFiles/bioauth.dir/src/keywatcher.cpp.i

bioauth-bin/CMakeFiles/bioauth.dir/src/keywatcher.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bioauth.dir/src/keywatcher.cpp.s"
	cd /home/liudun/ukui-biometric-auth/ukui-biometric-auth/build/bioauth-bin && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/liudun/ukui-biometric-auth/ukui-biometric-auth/bioauth-bin/src/keywatcher.cpp -o CMakeFiles/bioauth.dir/src/keywatcher.cpp.s

bioauth-bin/CMakeFiles/bioauth.dir/__/common/generic.cpp.o: bioauth-bin/CMakeFiles/bioauth.dir/flags.make
bioauth-bin/CMakeFiles/bioauth.dir/__/common/generic.cpp.o: ../common/generic.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/liudun/ukui-biometric-auth/ukui-biometric-auth/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object bioauth-bin/CMakeFiles/bioauth.dir/__/common/generic.cpp.o"
	cd /home/liudun/ukui-biometric-auth/ukui-biometric-auth/build/bioauth-bin && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/bioauth.dir/__/common/generic.cpp.o -c /home/liudun/ukui-biometric-auth/ukui-biometric-auth/common/generic.cpp

bioauth-bin/CMakeFiles/bioauth.dir/__/common/generic.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bioauth.dir/__/common/generic.cpp.i"
	cd /home/liudun/ukui-biometric-auth/ukui-biometric-auth/build/bioauth-bin && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/liudun/ukui-biometric-auth/ukui-biometric-auth/common/generic.cpp > CMakeFiles/bioauth.dir/__/common/generic.cpp.i

bioauth-bin/CMakeFiles/bioauth.dir/__/common/generic.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bioauth.dir/__/common/generic.cpp.s"
	cd /home/liudun/ukui-biometric-auth/ukui-biometric-auth/build/bioauth-bin && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/liudun/ukui-biometric-auth/ukui-biometric-auth/common/generic.cpp -o CMakeFiles/bioauth.dir/__/common/generic.cpp.s

# Object files for target bioauth
bioauth_OBJECTS = \
"CMakeFiles/bioauth.dir/bioauth_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/bioauth.dir/src/main.cpp.o" \
"CMakeFiles/bioauth.dir/src/keywatcher.cpp.o" \
"CMakeFiles/bioauth.dir/__/common/generic.cpp.o"

# External object files for target bioauth
bioauth_EXTERNAL_OBJECTS =

bioauth-bin/bioauth: bioauth-bin/CMakeFiles/bioauth.dir/bioauth_autogen/mocs_compilation.cpp.o
bioauth-bin/bioauth: bioauth-bin/CMakeFiles/bioauth.dir/src/main.cpp.o
bioauth-bin/bioauth: bioauth-bin/CMakeFiles/bioauth.dir/src/keywatcher.cpp.o
bioauth-bin/bioauth: bioauth-bin/CMakeFiles/bioauth.dir/__/common/generic.cpp.o
bioauth-bin/bioauth: bioauth-bin/CMakeFiles/bioauth.dir/build.make
bioauth-bin/bioauth: bioauth/libBioAuth.a
bioauth-bin/bioauth: /usr/lib/x86_64-linux-gnu/libQt5DBus.so.5.12.8
bioauth-bin/bioauth: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.12.8
bioauth-bin/bioauth: bioauth-bin/CMakeFiles/bioauth.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/liudun/ukui-biometric-auth/ukui-biometric-auth/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable bioauth"
	cd /home/liudun/ukui-biometric-auth/ukui-biometric-auth/build/bioauth-bin && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/bioauth.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
bioauth-bin/CMakeFiles/bioauth.dir/build: bioauth-bin/bioauth

.PHONY : bioauth-bin/CMakeFiles/bioauth.dir/build

bioauth-bin/CMakeFiles/bioauth.dir/clean:
	cd /home/liudun/ukui-biometric-auth/ukui-biometric-auth/build/bioauth-bin && $(CMAKE_COMMAND) -P CMakeFiles/bioauth.dir/cmake_clean.cmake
.PHONY : bioauth-bin/CMakeFiles/bioauth.dir/clean

bioauth-bin/CMakeFiles/bioauth.dir/depend:
	cd /home/liudun/ukui-biometric-auth/ukui-biometric-auth/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/liudun/ukui-biometric-auth/ukui-biometric-auth /home/liudun/ukui-biometric-auth/ukui-biometric-auth/bioauth-bin /home/liudun/ukui-biometric-auth/ukui-biometric-auth/build /home/liudun/ukui-biometric-auth/ukui-biometric-auth/build/bioauth-bin /home/liudun/ukui-biometric-auth/ukui-biometric-auth/build/bioauth-bin/CMakeFiles/bioauth.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : bioauth-bin/CMakeFiles/bioauth.dir/depend
