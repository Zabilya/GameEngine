# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/u17776048/Documents/GameEngine

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/u17776048/Documents/GameEngine/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/engine.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/engine.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/engine.dir/flags.make

CMakeFiles/engine.dir/src/main.cpp.o: CMakeFiles/engine.dir/flags.make
CMakeFiles/engine.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/u17776048/Documents/GameEngine/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/engine.dir/src/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/engine.dir/src/main.cpp.o -c /Users/u17776048/Documents/GameEngine/src/main.cpp

CMakeFiles/engine.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/src/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/u17776048/Documents/GameEngine/src/main.cpp > CMakeFiles/engine.dir/src/main.cpp.i

CMakeFiles/engine.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/src/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/u17776048/Documents/GameEngine/src/main.cpp -o CMakeFiles/engine.dir/src/main.cpp.s

CMakeFiles/engine.dir/dependencies/stb_image/stb_image.cpp.o: CMakeFiles/engine.dir/flags.make
CMakeFiles/engine.dir/dependencies/stb_image/stb_image.cpp.o: ../dependencies/stb_image/stb_image.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/u17776048/Documents/GameEngine/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/engine.dir/dependencies/stb_image/stb_image.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/engine.dir/dependencies/stb_image/stb_image.cpp.o -c /Users/u17776048/Documents/GameEngine/dependencies/stb_image/stb_image.cpp

CMakeFiles/engine.dir/dependencies/stb_image/stb_image.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/dependencies/stb_image/stb_image.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/u17776048/Documents/GameEngine/dependencies/stb_image/stb_image.cpp > CMakeFiles/engine.dir/dependencies/stb_image/stb_image.cpp.i

CMakeFiles/engine.dir/dependencies/stb_image/stb_image.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/dependencies/stb_image/stb_image.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/u17776048/Documents/GameEngine/dependencies/stb_image/stb_image.cpp -o CMakeFiles/engine.dir/dependencies/stb_image/stb_image.cpp.s

CMakeFiles/engine.dir/src/shader/Shader.cpp.o: CMakeFiles/engine.dir/flags.make
CMakeFiles/engine.dir/src/shader/Shader.cpp.o: ../src/shader/Shader.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/u17776048/Documents/GameEngine/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/engine.dir/src/shader/Shader.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/engine.dir/src/shader/Shader.cpp.o -c /Users/u17776048/Documents/GameEngine/src/shader/Shader.cpp

CMakeFiles/engine.dir/src/shader/Shader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/src/shader/Shader.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/u17776048/Documents/GameEngine/src/shader/Shader.cpp > CMakeFiles/engine.dir/src/shader/Shader.cpp.i

CMakeFiles/engine.dir/src/shader/Shader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/src/shader/Shader.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/u17776048/Documents/GameEngine/src/shader/Shader.cpp -o CMakeFiles/engine.dir/src/shader/Shader.cpp.s

CMakeFiles/engine.dir/src/key_handler/keyHandler.cpp.o: CMakeFiles/engine.dir/flags.make
CMakeFiles/engine.dir/src/key_handler/keyHandler.cpp.o: ../src/key_handler/keyHandler.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/u17776048/Documents/GameEngine/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/engine.dir/src/key_handler/keyHandler.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/engine.dir/src/key_handler/keyHandler.cpp.o -c /Users/u17776048/Documents/GameEngine/src/key_handler/keyHandler.cpp

CMakeFiles/engine.dir/src/key_handler/keyHandler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/src/key_handler/keyHandler.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/u17776048/Documents/GameEngine/src/key_handler/keyHandler.cpp > CMakeFiles/engine.dir/src/key_handler/keyHandler.cpp.i

CMakeFiles/engine.dir/src/key_handler/keyHandler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/src/key_handler/keyHandler.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/u17776048/Documents/GameEngine/src/key_handler/keyHandler.cpp -o CMakeFiles/engine.dir/src/key_handler/keyHandler.cpp.s

CMakeFiles/engine.dir/src/window_manager/windowManager.cpp.o: CMakeFiles/engine.dir/flags.make
CMakeFiles/engine.dir/src/window_manager/windowManager.cpp.o: ../src/window_manager/windowManager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/u17776048/Documents/GameEngine/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/engine.dir/src/window_manager/windowManager.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/engine.dir/src/window_manager/windowManager.cpp.o -c /Users/u17776048/Documents/GameEngine/src/window_manager/windowManager.cpp

CMakeFiles/engine.dir/src/window_manager/windowManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/src/window_manager/windowManager.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/u17776048/Documents/GameEngine/src/window_manager/windowManager.cpp > CMakeFiles/engine.dir/src/window_manager/windowManager.cpp.i

CMakeFiles/engine.dir/src/window_manager/windowManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/src/window_manager/windowManager.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/u17776048/Documents/GameEngine/src/window_manager/windowManager.cpp -o CMakeFiles/engine.dir/src/window_manager/windowManager.cpp.s

CMakeFiles/engine.dir/src/camera/Camera.cpp.o: CMakeFiles/engine.dir/flags.make
CMakeFiles/engine.dir/src/camera/Camera.cpp.o: ../src/camera/Camera.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/u17776048/Documents/GameEngine/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/engine.dir/src/camera/Camera.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/engine.dir/src/camera/Camera.cpp.o -c /Users/u17776048/Documents/GameEngine/src/camera/Camera.cpp

CMakeFiles/engine.dir/src/camera/Camera.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/src/camera/Camera.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/u17776048/Documents/GameEngine/src/camera/Camera.cpp > CMakeFiles/engine.dir/src/camera/Camera.cpp.i

CMakeFiles/engine.dir/src/camera/Camera.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/src/camera/Camera.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/u17776048/Documents/GameEngine/src/camera/Camera.cpp -o CMakeFiles/engine.dir/src/camera/Camera.cpp.s

CMakeFiles/engine.dir/src/utils/utils.cpp.o: CMakeFiles/engine.dir/flags.make
CMakeFiles/engine.dir/src/utils/utils.cpp.o: ../src/utils/utils.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/u17776048/Documents/GameEngine/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/engine.dir/src/utils/utils.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/engine.dir/src/utils/utils.cpp.o -c /Users/u17776048/Documents/GameEngine/src/utils/utils.cpp

CMakeFiles/engine.dir/src/utils/utils.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/src/utils/utils.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/u17776048/Documents/GameEngine/src/utils/utils.cpp > CMakeFiles/engine.dir/src/utils/utils.cpp.i

CMakeFiles/engine.dir/src/utils/utils.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/src/utils/utils.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/u17776048/Documents/GameEngine/src/utils/utils.cpp -o CMakeFiles/engine.dir/src/utils/utils.cpp.s

CMakeFiles/engine.dir/src/model/mesh/Mesh.cpp.o: CMakeFiles/engine.dir/flags.make
CMakeFiles/engine.dir/src/model/mesh/Mesh.cpp.o: ../src/model/mesh/Mesh.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/u17776048/Documents/GameEngine/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/engine.dir/src/model/mesh/Mesh.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/engine.dir/src/model/mesh/Mesh.cpp.o -c /Users/u17776048/Documents/GameEngine/src/model/mesh/Mesh.cpp

CMakeFiles/engine.dir/src/model/mesh/Mesh.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/src/model/mesh/Mesh.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/u17776048/Documents/GameEngine/src/model/mesh/Mesh.cpp > CMakeFiles/engine.dir/src/model/mesh/Mesh.cpp.i

CMakeFiles/engine.dir/src/model/mesh/Mesh.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/src/model/mesh/Mesh.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/u17776048/Documents/GameEngine/src/model/mesh/Mesh.cpp -o CMakeFiles/engine.dir/src/model/mesh/Mesh.cpp.s

CMakeFiles/engine.dir/src/model/model/Model.cpp.o: CMakeFiles/engine.dir/flags.make
CMakeFiles/engine.dir/src/model/model/Model.cpp.o: ../src/model/model/Model.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/u17776048/Documents/GameEngine/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/engine.dir/src/model/model/Model.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/engine.dir/src/model/model/Model.cpp.o -c /Users/u17776048/Documents/GameEngine/src/model/model/Model.cpp

CMakeFiles/engine.dir/src/model/model/Model.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/src/model/model/Model.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/u17776048/Documents/GameEngine/src/model/model/Model.cpp > CMakeFiles/engine.dir/src/model/model/Model.cpp.i

CMakeFiles/engine.dir/src/model/model/Model.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/src/model/model/Model.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/u17776048/Documents/GameEngine/src/model/model/Model.cpp -o CMakeFiles/engine.dir/src/model/model/Model.cpp.s

CMakeFiles/engine.dir/src/scenes/scenes.cpp.o: CMakeFiles/engine.dir/flags.make
CMakeFiles/engine.dir/src/scenes/scenes.cpp.o: ../src/scenes/scenes.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/u17776048/Documents/GameEngine/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/engine.dir/src/scenes/scenes.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/engine.dir/src/scenes/scenes.cpp.o -c /Users/u17776048/Documents/GameEngine/src/scenes/scenes.cpp

CMakeFiles/engine.dir/src/scenes/scenes.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/src/scenes/scenes.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/u17776048/Documents/GameEngine/src/scenes/scenes.cpp > CMakeFiles/engine.dir/src/scenes/scenes.cpp.i

CMakeFiles/engine.dir/src/scenes/scenes.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/src/scenes/scenes.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/u17776048/Documents/GameEngine/src/scenes/scenes.cpp -o CMakeFiles/engine.dir/src/scenes/scenes.cpp.s

CMakeFiles/engine.dir/src/scenes/portalScene.cpp.o: CMakeFiles/engine.dir/flags.make
CMakeFiles/engine.dir/src/scenes/portalScene.cpp.o: ../src/scenes/portalScene.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/u17776048/Documents/GameEngine/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/engine.dir/src/scenes/portalScene.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/engine.dir/src/scenes/portalScene.cpp.o -c /Users/u17776048/Documents/GameEngine/src/scenes/portalScene.cpp

CMakeFiles/engine.dir/src/scenes/portalScene.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/src/scenes/portalScene.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/u17776048/Documents/GameEngine/src/scenes/portalScene.cpp > CMakeFiles/engine.dir/src/scenes/portalScene.cpp.i

CMakeFiles/engine.dir/src/scenes/portalScene.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/src/scenes/portalScene.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/u17776048/Documents/GameEngine/src/scenes/portalScene.cpp -o CMakeFiles/engine.dir/src/scenes/portalScene.cpp.s

CMakeFiles/engine.dir/src/textures/textures_util.cpp.o: CMakeFiles/engine.dir/flags.make
CMakeFiles/engine.dir/src/textures/textures_util.cpp.o: ../src/textures/textures_util.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/u17776048/Documents/GameEngine/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/engine.dir/src/textures/textures_util.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/engine.dir/src/textures/textures_util.cpp.o -c /Users/u17776048/Documents/GameEngine/src/textures/textures_util.cpp

CMakeFiles/engine.dir/src/textures/textures_util.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/src/textures/textures_util.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/u17776048/Documents/GameEngine/src/textures/textures_util.cpp > CMakeFiles/engine.dir/src/textures/textures_util.cpp.i

CMakeFiles/engine.dir/src/textures/textures_util.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/src/textures/textures_util.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/u17776048/Documents/GameEngine/src/textures/textures_util.cpp -o CMakeFiles/engine.dir/src/textures/textures_util.cpp.s

CMakeFiles/engine.dir/src/sceneObject/SceneObject.cpp.o: CMakeFiles/engine.dir/flags.make
CMakeFiles/engine.dir/src/sceneObject/SceneObject.cpp.o: ../src/sceneObject/SceneObject.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/u17776048/Documents/GameEngine/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/engine.dir/src/sceneObject/SceneObject.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/engine.dir/src/sceneObject/SceneObject.cpp.o -c /Users/u17776048/Documents/GameEngine/src/sceneObject/SceneObject.cpp

CMakeFiles/engine.dir/src/sceneObject/SceneObject.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/src/sceneObject/SceneObject.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/u17776048/Documents/GameEngine/src/sceneObject/SceneObject.cpp > CMakeFiles/engine.dir/src/sceneObject/SceneObject.cpp.i

CMakeFiles/engine.dir/src/sceneObject/SceneObject.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/src/sceneObject/SceneObject.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/u17776048/Documents/GameEngine/src/sceneObject/SceneObject.cpp -o CMakeFiles/engine.dir/src/sceneObject/SceneObject.cpp.s

CMakeFiles/engine.dir/src/scenes/sceneFrameBuffer.cpp.o: CMakeFiles/engine.dir/flags.make
CMakeFiles/engine.dir/src/scenes/sceneFrameBuffer.cpp.o: ../src/scenes/sceneFrameBuffer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/u17776048/Documents/GameEngine/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/engine.dir/src/scenes/sceneFrameBuffer.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/engine.dir/src/scenes/sceneFrameBuffer.cpp.o -c /Users/u17776048/Documents/GameEngine/src/scenes/sceneFrameBuffer.cpp

CMakeFiles/engine.dir/src/scenes/sceneFrameBuffer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/src/scenes/sceneFrameBuffer.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/u17776048/Documents/GameEngine/src/scenes/sceneFrameBuffer.cpp > CMakeFiles/engine.dir/src/scenes/sceneFrameBuffer.cpp.i

CMakeFiles/engine.dir/src/scenes/sceneFrameBuffer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/src/scenes/sceneFrameBuffer.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/u17776048/Documents/GameEngine/src/scenes/sceneFrameBuffer.cpp -o CMakeFiles/engine.dir/src/scenes/sceneFrameBuffer.cpp.s

CMakeFiles/engine.dir/src/sceneObject/Scene.cpp.o: CMakeFiles/engine.dir/flags.make
CMakeFiles/engine.dir/src/sceneObject/Scene.cpp.o: ../src/sceneObject/Scene.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/u17776048/Documents/GameEngine/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object CMakeFiles/engine.dir/src/sceneObject/Scene.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/engine.dir/src/sceneObject/Scene.cpp.o -c /Users/u17776048/Documents/GameEngine/src/sceneObject/Scene.cpp

CMakeFiles/engine.dir/src/sceneObject/Scene.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/src/sceneObject/Scene.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/u17776048/Documents/GameEngine/src/sceneObject/Scene.cpp > CMakeFiles/engine.dir/src/sceneObject/Scene.cpp.i

CMakeFiles/engine.dir/src/sceneObject/Scene.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/src/sceneObject/Scene.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/u17776048/Documents/GameEngine/src/sceneObject/Scene.cpp -o CMakeFiles/engine.dir/src/sceneObject/Scene.cpp.s

CMakeFiles/engine.dir/src/sceneObject/Cube.cpp.o: CMakeFiles/engine.dir/flags.make
CMakeFiles/engine.dir/src/sceneObject/Cube.cpp.o: ../src/sceneObject/Cube.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/u17776048/Documents/GameEngine/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building CXX object CMakeFiles/engine.dir/src/sceneObject/Cube.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/engine.dir/src/sceneObject/Cube.cpp.o -c /Users/u17776048/Documents/GameEngine/src/sceneObject/Cube.cpp

CMakeFiles/engine.dir/src/sceneObject/Cube.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/src/sceneObject/Cube.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/u17776048/Documents/GameEngine/src/sceneObject/Cube.cpp > CMakeFiles/engine.dir/src/sceneObject/Cube.cpp.i

CMakeFiles/engine.dir/src/sceneObject/Cube.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/src/sceneObject/Cube.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/u17776048/Documents/GameEngine/src/sceneObject/Cube.cpp -o CMakeFiles/engine.dir/src/sceneObject/Cube.cpp.s

CMakeFiles/engine.dir/src/scenes/sceneSkyBox.cpp.o: CMakeFiles/engine.dir/flags.make
CMakeFiles/engine.dir/src/scenes/sceneSkyBox.cpp.o: ../src/scenes/sceneSkyBox.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/u17776048/Documents/GameEngine/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Building CXX object CMakeFiles/engine.dir/src/scenes/sceneSkyBox.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/engine.dir/src/scenes/sceneSkyBox.cpp.o -c /Users/u17776048/Documents/GameEngine/src/scenes/sceneSkyBox.cpp

CMakeFiles/engine.dir/src/scenes/sceneSkyBox.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/src/scenes/sceneSkyBox.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/u17776048/Documents/GameEngine/src/scenes/sceneSkyBox.cpp > CMakeFiles/engine.dir/src/scenes/sceneSkyBox.cpp.i

CMakeFiles/engine.dir/src/scenes/sceneSkyBox.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/src/scenes/sceneSkyBox.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/u17776048/Documents/GameEngine/src/scenes/sceneSkyBox.cpp -o CMakeFiles/engine.dir/src/scenes/sceneSkyBox.cpp.s

CMakeFiles/engine.dir/src/sceneObject/lights/DirectLight.cpp.o: CMakeFiles/engine.dir/flags.make
CMakeFiles/engine.dir/src/sceneObject/lights/DirectLight.cpp.o: ../src/sceneObject/lights/DirectLight.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/u17776048/Documents/GameEngine/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_18) "Building CXX object CMakeFiles/engine.dir/src/sceneObject/lights/DirectLight.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/engine.dir/src/sceneObject/lights/DirectLight.cpp.o -c /Users/u17776048/Documents/GameEngine/src/sceneObject/lights/DirectLight.cpp

CMakeFiles/engine.dir/src/sceneObject/lights/DirectLight.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/src/sceneObject/lights/DirectLight.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/u17776048/Documents/GameEngine/src/sceneObject/lights/DirectLight.cpp > CMakeFiles/engine.dir/src/sceneObject/lights/DirectLight.cpp.i

CMakeFiles/engine.dir/src/sceneObject/lights/DirectLight.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/src/sceneObject/lights/DirectLight.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/u17776048/Documents/GameEngine/src/sceneObject/lights/DirectLight.cpp -o CMakeFiles/engine.dir/src/sceneObject/lights/DirectLight.cpp.s

CMakeFiles/engine.dir/src/sceneObject/lights/PointLight.cpp.o: CMakeFiles/engine.dir/flags.make
CMakeFiles/engine.dir/src/sceneObject/lights/PointLight.cpp.o: ../src/sceneObject/lights/PointLight.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/u17776048/Documents/GameEngine/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_19) "Building CXX object CMakeFiles/engine.dir/src/sceneObject/lights/PointLight.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/engine.dir/src/sceneObject/lights/PointLight.cpp.o -c /Users/u17776048/Documents/GameEngine/src/sceneObject/lights/PointLight.cpp

CMakeFiles/engine.dir/src/sceneObject/lights/PointLight.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/src/sceneObject/lights/PointLight.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/u17776048/Documents/GameEngine/src/sceneObject/lights/PointLight.cpp > CMakeFiles/engine.dir/src/sceneObject/lights/PointLight.cpp.i

CMakeFiles/engine.dir/src/sceneObject/lights/PointLight.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/src/sceneObject/lights/PointLight.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/u17776048/Documents/GameEngine/src/sceneObject/lights/PointLight.cpp -o CMakeFiles/engine.dir/src/sceneObject/lights/PointLight.cpp.s

CMakeFiles/engine.dir/src/sceneObject/lights/SpotLight.cpp.o: CMakeFiles/engine.dir/flags.make
CMakeFiles/engine.dir/src/sceneObject/lights/SpotLight.cpp.o: ../src/sceneObject/lights/SpotLight.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/u17776048/Documents/GameEngine/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_20) "Building CXX object CMakeFiles/engine.dir/src/sceneObject/lights/SpotLight.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/engine.dir/src/sceneObject/lights/SpotLight.cpp.o -c /Users/u17776048/Documents/GameEngine/src/sceneObject/lights/SpotLight.cpp

CMakeFiles/engine.dir/src/sceneObject/lights/SpotLight.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/src/sceneObject/lights/SpotLight.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/u17776048/Documents/GameEngine/src/sceneObject/lights/SpotLight.cpp > CMakeFiles/engine.dir/src/sceneObject/lights/SpotLight.cpp.i

CMakeFiles/engine.dir/src/sceneObject/lights/SpotLight.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/src/sceneObject/lights/SpotLight.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/u17776048/Documents/GameEngine/src/sceneObject/lights/SpotLight.cpp -o CMakeFiles/engine.dir/src/sceneObject/lights/SpotLight.cpp.s

CMakeFiles/engine.dir/src/scenes/sceneLight.cpp.o: CMakeFiles/engine.dir/flags.make
CMakeFiles/engine.dir/src/scenes/sceneLight.cpp.o: ../src/scenes/sceneLight.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/u17776048/Documents/GameEngine/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_21) "Building CXX object CMakeFiles/engine.dir/src/scenes/sceneLight.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/engine.dir/src/scenes/sceneLight.cpp.o -c /Users/u17776048/Documents/GameEngine/src/scenes/sceneLight.cpp

CMakeFiles/engine.dir/src/scenes/sceneLight.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/src/scenes/sceneLight.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/u17776048/Documents/GameEngine/src/scenes/sceneLight.cpp > CMakeFiles/engine.dir/src/scenes/sceneLight.cpp.i

CMakeFiles/engine.dir/src/scenes/sceneLight.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/src/scenes/sceneLight.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/u17776048/Documents/GameEngine/src/scenes/sceneLight.cpp -o CMakeFiles/engine.dir/src/scenes/sceneLight.cpp.s

CMakeFiles/engine.dir/src/scenes/sceneShadow.cpp.o: CMakeFiles/engine.dir/flags.make
CMakeFiles/engine.dir/src/scenes/sceneShadow.cpp.o: ../src/scenes/sceneShadow.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/u17776048/Documents/GameEngine/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_22) "Building CXX object CMakeFiles/engine.dir/src/scenes/sceneShadow.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/engine.dir/src/scenes/sceneShadow.cpp.o -c /Users/u17776048/Documents/GameEngine/src/scenes/sceneShadow.cpp

CMakeFiles/engine.dir/src/scenes/sceneShadow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/src/scenes/sceneShadow.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/u17776048/Documents/GameEngine/src/scenes/sceneShadow.cpp > CMakeFiles/engine.dir/src/scenes/sceneShadow.cpp.i

CMakeFiles/engine.dir/src/scenes/sceneShadow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/src/scenes/sceneShadow.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/u17776048/Documents/GameEngine/src/scenes/sceneShadow.cpp -o CMakeFiles/engine.dir/src/scenes/sceneShadow.cpp.s

# Object files for target engine
engine_OBJECTS = \
"CMakeFiles/engine.dir/src/main.cpp.o" \
"CMakeFiles/engine.dir/dependencies/stb_image/stb_image.cpp.o" \
"CMakeFiles/engine.dir/src/shader/Shader.cpp.o" \
"CMakeFiles/engine.dir/src/key_handler/keyHandler.cpp.o" \
"CMakeFiles/engine.dir/src/window_manager/windowManager.cpp.o" \
"CMakeFiles/engine.dir/src/camera/Camera.cpp.o" \
"CMakeFiles/engine.dir/src/utils/utils.cpp.o" \
"CMakeFiles/engine.dir/src/model/mesh/Mesh.cpp.o" \
"CMakeFiles/engine.dir/src/model/model/Model.cpp.o" \
"CMakeFiles/engine.dir/src/scenes/scenes.cpp.o" \
"CMakeFiles/engine.dir/src/scenes/portalScene.cpp.o" \
"CMakeFiles/engine.dir/src/textures/textures_util.cpp.o" \
"CMakeFiles/engine.dir/src/sceneObject/SceneObject.cpp.o" \
"CMakeFiles/engine.dir/src/scenes/sceneFrameBuffer.cpp.o" \
"CMakeFiles/engine.dir/src/sceneObject/Scene.cpp.o" \
"CMakeFiles/engine.dir/src/sceneObject/Cube.cpp.o" \
"CMakeFiles/engine.dir/src/scenes/sceneSkyBox.cpp.o" \
"CMakeFiles/engine.dir/src/sceneObject/lights/DirectLight.cpp.o" \
"CMakeFiles/engine.dir/src/sceneObject/lights/PointLight.cpp.o" \
"CMakeFiles/engine.dir/src/sceneObject/lights/SpotLight.cpp.o" \
"CMakeFiles/engine.dir/src/scenes/sceneLight.cpp.o" \
"CMakeFiles/engine.dir/src/scenes/sceneShadow.cpp.o"

# External object files for target engine
engine_EXTERNAL_OBJECTS =

engine: CMakeFiles/engine.dir/src/main.cpp.o
engine: CMakeFiles/engine.dir/dependencies/stb_image/stb_image.cpp.o
engine: CMakeFiles/engine.dir/src/shader/Shader.cpp.o
engine: CMakeFiles/engine.dir/src/key_handler/keyHandler.cpp.o
engine: CMakeFiles/engine.dir/src/window_manager/windowManager.cpp.o
engine: CMakeFiles/engine.dir/src/camera/Camera.cpp.o
engine: CMakeFiles/engine.dir/src/utils/utils.cpp.o
engine: CMakeFiles/engine.dir/src/model/mesh/Mesh.cpp.o
engine: CMakeFiles/engine.dir/src/model/model/Model.cpp.o
engine: CMakeFiles/engine.dir/src/scenes/scenes.cpp.o
engine: CMakeFiles/engine.dir/src/scenes/portalScene.cpp.o
engine: CMakeFiles/engine.dir/src/textures/textures_util.cpp.o
engine: CMakeFiles/engine.dir/src/sceneObject/SceneObject.cpp.o
engine: CMakeFiles/engine.dir/src/scenes/sceneFrameBuffer.cpp.o
engine: CMakeFiles/engine.dir/src/sceneObject/Scene.cpp.o
engine: CMakeFiles/engine.dir/src/sceneObject/Cube.cpp.o
engine: CMakeFiles/engine.dir/src/scenes/sceneSkyBox.cpp.o
engine: CMakeFiles/engine.dir/src/sceneObject/lights/DirectLight.cpp.o
engine: CMakeFiles/engine.dir/src/sceneObject/lights/PointLight.cpp.o
engine: CMakeFiles/engine.dir/src/sceneObject/lights/SpotLight.cpp.o
engine: CMakeFiles/engine.dir/src/scenes/sceneLight.cpp.o
engine: CMakeFiles/engine.dir/src/scenes/sceneShadow.cpp.o
engine: CMakeFiles/engine.dir/build.make
engine: /usr/local/lib/libGLEW.dylib
engine: /usr/local/lib/libglfw.3.3.dylib
engine: CMakeFiles/engine.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/u17776048/Documents/GameEngine/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_23) "Linking CXX executable engine"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/engine.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/engine.dir/build: engine

.PHONY : CMakeFiles/engine.dir/build

CMakeFiles/engine.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/engine.dir/cmake_clean.cmake
.PHONY : CMakeFiles/engine.dir/clean

CMakeFiles/engine.dir/depend:
	cd /Users/u17776048/Documents/GameEngine/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/u17776048/Documents/GameEngine /Users/u17776048/Documents/GameEngine /Users/u17776048/Documents/GameEngine/cmake-build-debug /Users/u17776048/Documents/GameEngine/cmake-build-debug /Users/u17776048/Documents/GameEngine/cmake-build-debug/CMakeFiles/engine.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/engine.dir/depend

