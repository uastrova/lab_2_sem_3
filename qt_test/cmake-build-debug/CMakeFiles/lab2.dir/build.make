# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.27

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion2023.3\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion2023.3\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\c++Programs\qt_test\qt_test

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\c++Programs\qt_test\qt_test\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/lab2.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/lab2.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/lab2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lab2.dir/flags.make

CMakeFiles/lab2.dir/lab2_autogen/mocs_compilation.cpp.obj: CMakeFiles/lab2.dir/flags.make
CMakeFiles/lab2.dir/lab2_autogen/mocs_compilation.cpp.obj: CMakeFiles/lab2.dir/includes_CXX.rsp
CMakeFiles/lab2.dir/lab2_autogen/mocs_compilation.cpp.obj: lab2_autogen/mocs_compilation.cpp
CMakeFiles/lab2.dir/lab2_autogen/mocs_compilation.cpp.obj: CMakeFiles/lab2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\c++Programs\qt_test\qt_test\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lab2.dir/lab2_autogen/mocs_compilation.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/lab2.dir/lab2_autogen/mocs_compilation.cpp.obj -MF CMakeFiles\lab2.dir\lab2_autogen\mocs_compilation.cpp.obj.d -o CMakeFiles\lab2.dir\lab2_autogen\mocs_compilation.cpp.obj -c C:\c++Programs\qt_test\qt_test\cmake-build-debug\lab2_autogen\mocs_compilation.cpp

CMakeFiles/lab2.dir/lab2_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/lab2.dir/lab2_autogen/mocs_compilation.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\c++Programs\qt_test\qt_test\cmake-build-debug\lab2_autogen\mocs_compilation.cpp > CMakeFiles\lab2.dir\lab2_autogen\mocs_compilation.cpp.i

CMakeFiles/lab2.dir/lab2_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/lab2.dir/lab2_autogen/mocs_compilation.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\c++Programs\qt_test\qt_test\cmake-build-debug\lab2_autogen\mocs_compilation.cpp -o CMakeFiles\lab2.dir\lab2_autogen\mocs_compilation.cpp.s

CMakeFiles/lab2.dir/main.cpp.obj: CMakeFiles/lab2.dir/flags.make
CMakeFiles/lab2.dir/main.cpp.obj: CMakeFiles/lab2.dir/includes_CXX.rsp
CMakeFiles/lab2.dir/main.cpp.obj: C:/c++Programs/qt_test/qt_test/main.cpp
CMakeFiles/lab2.dir/main.cpp.obj: CMakeFiles/lab2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\c++Programs\qt_test\qt_test\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/lab2.dir/main.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/lab2.dir/main.cpp.obj -MF CMakeFiles\lab2.dir\main.cpp.obj.d -o CMakeFiles\lab2.dir\main.cpp.obj -c C:\c++Programs\qt_test\qt_test\main.cpp

CMakeFiles/lab2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/lab2.dir/main.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\c++Programs\qt_test\qt_test\main.cpp > CMakeFiles\lab2.dir\main.cpp.i

CMakeFiles/lab2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/lab2.dir/main.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\c++Programs\qt_test\qt_test\main.cpp -o CMakeFiles\lab2.dir\main.cpp.s

CMakeFiles/lab2.dir/mainwindow.cpp.obj: CMakeFiles/lab2.dir/flags.make
CMakeFiles/lab2.dir/mainwindow.cpp.obj: CMakeFiles/lab2.dir/includes_CXX.rsp
CMakeFiles/lab2.dir/mainwindow.cpp.obj: C:/c++Programs/qt_test/qt_test/mainwindow.cpp
CMakeFiles/lab2.dir/mainwindow.cpp.obj: CMakeFiles/lab2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\c++Programs\qt_test\qt_test\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/lab2.dir/mainwindow.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/lab2.dir/mainwindow.cpp.obj -MF CMakeFiles\lab2.dir\mainwindow.cpp.obj.d -o CMakeFiles\lab2.dir\mainwindow.cpp.obj -c C:\c++Programs\qt_test\qt_test\mainwindow.cpp

CMakeFiles/lab2.dir/mainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/lab2.dir/mainwindow.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\c++Programs\qt_test\qt_test\mainwindow.cpp > CMakeFiles\lab2.dir\mainwindow.cpp.i

CMakeFiles/lab2.dir/mainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/lab2.dir/mainwindow.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\c++Programs\qt_test\qt_test\mainwindow.cpp -o CMakeFiles\lab2.dir\mainwindow.cpp.s

# Object files for target lab2
lab2_OBJECTS = \
"CMakeFiles/lab2.dir/lab2_autogen/mocs_compilation.cpp.obj" \
"CMakeFiles/lab2.dir/main.cpp.obj" \
"CMakeFiles/lab2.dir/mainwindow.cpp.obj"

# External object files for target lab2
lab2_EXTERNAL_OBJECTS =

lab2.exe: CMakeFiles/lab2.dir/lab2_autogen/mocs_compilation.cpp.obj
lab2.exe: CMakeFiles/lab2.dir/main.cpp.obj
lab2.exe: CMakeFiles/lab2.dir/mainwindow.cpp.obj
lab2.exe: CMakeFiles/lab2.dir/build.make
lab2.exe: C:/Mingw64/mingw64/lib/libQt6Widgets.a
lab2.exe: C:/Mingw64/mingw64/lib/libQt6Gui.a
lab2.exe: C:/Mingw64/mingw64/lib/libQt6Core.a
lab2.exe: CMakeFiles/lab2.dir/linkLibs.rsp
lab2.exe: CMakeFiles/lab2.dir/objects1.rsp
lab2.exe: CMakeFiles/lab2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\c++Programs\qt_test\qt_test\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable lab2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\lab2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lab2.dir/build: lab2.exe
.PHONY : CMakeFiles/lab2.dir/build

CMakeFiles/lab2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\lab2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/lab2.dir/clean

CMakeFiles/lab2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\c++Programs\qt_test\qt_test C:\c++Programs\qt_test\qt_test C:\c++Programs\qt_test\qt_test\cmake-build-debug C:\c++Programs\qt_test\qt_test\cmake-build-debug C:\c++Programs\qt_test\qt_test\cmake-build-debug\CMakeFiles\lab2.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/lab2.dir/depend

