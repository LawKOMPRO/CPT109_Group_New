# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.29

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
CMAKE_COMMAND = "E:\Clion\CLion 2024.2.3\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "E:\Clion\CLion 2024.2.3\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = F:\Github\CPT109_Group_CW

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\Github\CPT109_Group_CW\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/CPT109_CW.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/CPT109_CW.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/CPT109_CW.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CPT109_CW.dir/flags.make

CMakeFiles/CPT109_CW.dir/main.c.obj: CMakeFiles/CPT109_CW.dir/flags.make
CMakeFiles/CPT109_CW.dir/main.c.obj: CMakeFiles/CPT109_CW.dir/includes_C.rsp
CMakeFiles/CPT109_CW.dir/main.c.obj: F:/Github/CPT109_Group_CW/main.c
CMakeFiles/CPT109_CW.dir/main.c.obj: CMakeFiles/CPT109_CW.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=F:\Github\CPT109_Group_CW\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/CPT109_CW.dir/main.c.obj"
	"E:\Clion\CLion 2024.2.3\bin\mingw\bin\gcc.exe" $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/CPT109_CW.dir/main.c.obj -MF CMakeFiles\CPT109_CW.dir\main.c.obj.d -o CMakeFiles\CPT109_CW.dir\main.c.obj -c F:\Github\CPT109_Group_CW\main.c

CMakeFiles/CPT109_CW.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/CPT109_CW.dir/main.c.i"
	"E:\Clion\CLion 2024.2.3\bin\mingw\bin\gcc.exe" $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E F:\Github\CPT109_Group_CW\main.c > CMakeFiles\CPT109_CW.dir\main.c.i

CMakeFiles/CPT109_CW.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/CPT109_CW.dir/main.c.s"
	"E:\Clion\CLion 2024.2.3\bin\mingw\bin\gcc.exe" $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S F:\Github\CPT109_Group_CW\main.c -o CMakeFiles\CPT109_CW.dir\main.c.s

CMakeFiles/CPT109_CW.dir/src/planet_manager.c.obj: CMakeFiles/CPT109_CW.dir/flags.make
CMakeFiles/CPT109_CW.dir/src/planet_manager.c.obj: CMakeFiles/CPT109_CW.dir/includes_C.rsp
CMakeFiles/CPT109_CW.dir/src/planet_manager.c.obj: F:/Github/CPT109_Group_CW/src/planet_manager.c
CMakeFiles/CPT109_CW.dir/src/planet_manager.c.obj: CMakeFiles/CPT109_CW.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=F:\Github\CPT109_Group_CW\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/CPT109_CW.dir/src/planet_manager.c.obj"
	"E:\Clion\CLion 2024.2.3\bin\mingw\bin\gcc.exe" $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/CPT109_CW.dir/src/planet_manager.c.obj -MF CMakeFiles\CPT109_CW.dir\src\planet_manager.c.obj.d -o CMakeFiles\CPT109_CW.dir\src\planet_manager.c.obj -c F:\Github\CPT109_Group_CW\src\planet_manager.c

CMakeFiles/CPT109_CW.dir/src/planet_manager.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/CPT109_CW.dir/src/planet_manager.c.i"
	"E:\Clion\CLion 2024.2.3\bin\mingw\bin\gcc.exe" $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E F:\Github\CPT109_Group_CW\src\planet_manager.c > CMakeFiles\CPT109_CW.dir\src\planet_manager.c.i

CMakeFiles/CPT109_CW.dir/src/planet_manager.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/CPT109_CW.dir/src/planet_manager.c.s"
	"E:\Clion\CLion 2024.2.3\bin\mingw\bin\gcc.exe" $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S F:\Github\CPT109_Group_CW\src\planet_manager.c -o CMakeFiles\CPT109_CW.dir\src\planet_manager.c.s

CMakeFiles/CPT109_CW.dir/src/researcher_manager.c.obj: CMakeFiles/CPT109_CW.dir/flags.make
CMakeFiles/CPT109_CW.dir/src/researcher_manager.c.obj: CMakeFiles/CPT109_CW.dir/includes_C.rsp
CMakeFiles/CPT109_CW.dir/src/researcher_manager.c.obj: F:/Github/CPT109_Group_CW/src/researcher_manager.c
CMakeFiles/CPT109_CW.dir/src/researcher_manager.c.obj: CMakeFiles/CPT109_CW.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=F:\Github\CPT109_Group_CW\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/CPT109_CW.dir/src/researcher_manager.c.obj"
	"E:\Clion\CLion 2024.2.3\bin\mingw\bin\gcc.exe" $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/CPT109_CW.dir/src/researcher_manager.c.obj -MF CMakeFiles\CPT109_CW.dir\src\researcher_manager.c.obj.d -o CMakeFiles\CPT109_CW.dir\src\researcher_manager.c.obj -c F:\Github\CPT109_Group_CW\src\researcher_manager.c

CMakeFiles/CPT109_CW.dir/src/researcher_manager.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/CPT109_CW.dir/src/researcher_manager.c.i"
	"E:\Clion\CLion 2024.2.3\bin\mingw\bin\gcc.exe" $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E F:\Github\CPT109_Group_CW\src\researcher_manager.c > CMakeFiles\CPT109_CW.dir\src\researcher_manager.c.i

CMakeFiles/CPT109_CW.dir/src/researcher_manager.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/CPT109_CW.dir/src/researcher_manager.c.s"
	"E:\Clion\CLion 2024.2.3\bin\mingw\bin\gcc.exe" $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S F:\Github\CPT109_Group_CW\src\researcher_manager.c -o CMakeFiles\CPT109_CW.dir\src\researcher_manager.c.s

CMakeFiles/CPT109_CW.dir/src/search_manager.c.obj: CMakeFiles/CPT109_CW.dir/flags.make
CMakeFiles/CPT109_CW.dir/src/search_manager.c.obj: CMakeFiles/CPT109_CW.dir/includes_C.rsp
CMakeFiles/CPT109_CW.dir/src/search_manager.c.obj: F:/Github/CPT109_Group_CW/src/search_manager.c
CMakeFiles/CPT109_CW.dir/src/search_manager.c.obj: CMakeFiles/CPT109_CW.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=F:\Github\CPT109_Group_CW\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/CPT109_CW.dir/src/search_manager.c.obj"
	"E:\Clion\CLion 2024.2.3\bin\mingw\bin\gcc.exe" $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/CPT109_CW.dir/src/search_manager.c.obj -MF CMakeFiles\CPT109_CW.dir\src\search_manager.c.obj.d -o CMakeFiles\CPT109_CW.dir\src\search_manager.c.obj -c F:\Github\CPT109_Group_CW\src\search_manager.c

CMakeFiles/CPT109_CW.dir/src/search_manager.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/CPT109_CW.dir/src/search_manager.c.i"
	"E:\Clion\CLion 2024.2.3\bin\mingw\bin\gcc.exe" $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E F:\Github\CPT109_Group_CW\src\search_manager.c > CMakeFiles\CPT109_CW.dir\src\search_manager.c.i

CMakeFiles/CPT109_CW.dir/src/search_manager.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/CPT109_CW.dir/src/search_manager.c.s"
	"E:\Clion\CLion 2024.2.3\bin\mingw\bin\gcc.exe" $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S F:\Github\CPT109_Group_CW\src\search_manager.c -o CMakeFiles\CPT109_CW.dir\src\search_manager.c.s

CMakeFiles/CPT109_CW.dir/src/statics_manager.c.obj: CMakeFiles/CPT109_CW.dir/flags.make
CMakeFiles/CPT109_CW.dir/src/statics_manager.c.obj: CMakeFiles/CPT109_CW.dir/includes_C.rsp
CMakeFiles/CPT109_CW.dir/src/statics_manager.c.obj: F:/Github/CPT109_Group_CW/src/statics_manager.c
CMakeFiles/CPT109_CW.dir/src/statics_manager.c.obj: CMakeFiles/CPT109_CW.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=F:\Github\CPT109_Group_CW\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/CPT109_CW.dir/src/statics_manager.c.obj"
	"E:\Clion\CLion 2024.2.3\bin\mingw\bin\gcc.exe" $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/CPT109_CW.dir/src/statics_manager.c.obj -MF CMakeFiles\CPT109_CW.dir\src\statics_manager.c.obj.d -o CMakeFiles\CPT109_CW.dir\src\statics_manager.c.obj -c F:\Github\CPT109_Group_CW\src\statics_manager.c

CMakeFiles/CPT109_CW.dir/src/statics_manager.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/CPT109_CW.dir/src/statics_manager.c.i"
	"E:\Clion\CLion 2024.2.3\bin\mingw\bin\gcc.exe" $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E F:\Github\CPT109_Group_CW\src\statics_manager.c > CMakeFiles\CPT109_CW.dir\src\statics_manager.c.i

CMakeFiles/CPT109_CW.dir/src/statics_manager.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/CPT109_CW.dir/src/statics_manager.c.s"
	"E:\Clion\CLion 2024.2.3\bin\mingw\bin\gcc.exe" $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S F:\Github\CPT109_Group_CW\src\statics_manager.c -o CMakeFiles\CPT109_CW.dir\src\statics_manager.c.s

CMakeFiles/CPT109_CW.dir/src/user_manager.c.obj: CMakeFiles/CPT109_CW.dir/flags.make
CMakeFiles/CPT109_CW.dir/src/user_manager.c.obj: CMakeFiles/CPT109_CW.dir/includes_C.rsp
CMakeFiles/CPT109_CW.dir/src/user_manager.c.obj: F:/Github/CPT109_Group_CW/src/user_manager.c
CMakeFiles/CPT109_CW.dir/src/user_manager.c.obj: CMakeFiles/CPT109_CW.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=F:\Github\CPT109_Group_CW\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/CPT109_CW.dir/src/user_manager.c.obj"
	"E:\Clion\CLion 2024.2.3\bin\mingw\bin\gcc.exe" $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/CPT109_CW.dir/src/user_manager.c.obj -MF CMakeFiles\CPT109_CW.dir\src\user_manager.c.obj.d -o CMakeFiles\CPT109_CW.dir\src\user_manager.c.obj -c F:\Github\CPT109_Group_CW\src\user_manager.c

CMakeFiles/CPT109_CW.dir/src/user_manager.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/CPT109_CW.dir/src/user_manager.c.i"
	"E:\Clion\CLion 2024.2.3\bin\mingw\bin\gcc.exe" $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E F:\Github\CPT109_Group_CW\src\user_manager.c > CMakeFiles\CPT109_CW.dir\src\user_manager.c.i

CMakeFiles/CPT109_CW.dir/src/user_manager.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/CPT109_CW.dir/src/user_manager.c.s"
	"E:\Clion\CLion 2024.2.3\bin\mingw\bin\gcc.exe" $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S F:\Github\CPT109_Group_CW\src\user_manager.c -o CMakeFiles\CPT109_CW.dir\src\user_manager.c.s

# Object files for target CPT109_CW
CPT109_CW_OBJECTS = \
"CMakeFiles/CPT109_CW.dir/main.c.obj" \
"CMakeFiles/CPT109_CW.dir/src/planet_manager.c.obj" \
"CMakeFiles/CPT109_CW.dir/src/researcher_manager.c.obj" \
"CMakeFiles/CPT109_CW.dir/src/search_manager.c.obj" \
"CMakeFiles/CPT109_CW.dir/src/statics_manager.c.obj" \
"CMakeFiles/CPT109_CW.dir/src/user_manager.c.obj"

# External object files for target CPT109_CW
CPT109_CW_EXTERNAL_OBJECTS =

CPT109_CW.exe: CMakeFiles/CPT109_CW.dir/main.c.obj
CPT109_CW.exe: CMakeFiles/CPT109_CW.dir/src/planet_manager.c.obj
CPT109_CW.exe: CMakeFiles/CPT109_CW.dir/src/researcher_manager.c.obj
CPT109_CW.exe: CMakeFiles/CPT109_CW.dir/src/search_manager.c.obj
CPT109_CW.exe: CMakeFiles/CPT109_CW.dir/src/statics_manager.c.obj
CPT109_CW.exe: CMakeFiles/CPT109_CW.dir/src/user_manager.c.obj
CPT109_CW.exe: CMakeFiles/CPT109_CW.dir/build.make
CPT109_CW.exe: CMakeFiles/CPT109_CW.dir/linkLibs.rsp
CPT109_CW.exe: CMakeFiles/CPT109_CW.dir/objects1.rsp
CPT109_CW.exe: CMakeFiles/CPT109_CW.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=F:\Github\CPT109_Group_CW\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking C executable CPT109_CW.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\CPT109_CW.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CPT109_CW.dir/build: CPT109_CW.exe
.PHONY : CMakeFiles/CPT109_CW.dir/build

CMakeFiles/CPT109_CW.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\CPT109_CW.dir\cmake_clean.cmake
.PHONY : CMakeFiles/CPT109_CW.dir/clean

CMakeFiles/CPT109_CW.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\Github\CPT109_Group_CW F:\Github\CPT109_Group_CW F:\Github\CPT109_Group_CW\cmake-build-debug F:\Github\CPT109_Group_CW\cmake-build-debug F:\Github\CPT109_Group_CW\cmake-build-debug\CMakeFiles\CPT109_CW.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/CPT109_CW.dir/depend
