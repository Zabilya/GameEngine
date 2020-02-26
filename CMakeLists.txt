cmake_minimum_required(VERSION 3.15)
project(Game_Engine)

set(CMAKE_CXX_STANDARD 14)

find_package(OpenGL REQUIRED)
find_package(glfw3 REQUIRED)
find_package(glew REQUIRED)
find_library(assimp REQUIRED)

set(SOURCE_FILES
        dependencies/stb_image/stb_image.cpp
        src/main.cpp
        src/engine/Shader.cpp
        src/engine/Texture.cpp
        src/engine/ResourceManager.cpp
        src/engine/Model.cpp
        src/engine/Mesh.cpp
        src/engine/PrimitiveCube.cpp
        src/game/Game.cpp
        src/game/Camera.cpp
        src/game/Breakout/Breakout.cpp
        src/game/SceneTest.cpp
        src/game/SceneModel.cpp
        src/game/Breakout/SpriteRenderer.cpp
        src/game/Breakout/BreakoutObject.cpp
        src/game/Breakout/BreakoutLevel.cpp
        include/SmartPointer.h
        include/GameObject.h
        include/SceneModel.h)

add_executable(Game_Engine ${SOURCE_FILES})

target_link_libraries(Game_Engine assimp)

target_link_libraries (Game_Engine
        ${OPENGL_LIBRARIES}
        ${GLEW_LIBRARY} glew32
        ${GLFW_LIBRARY} glfw3
        )
