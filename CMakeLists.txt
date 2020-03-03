cmake_minimum_required(VERSION 3.15)
project(Game_Engine)

set(CMAKE_CXX_STANDARD 14)

find_package(OpenGL REQUIRED)
find_package(glfw3 REQUIRED)
find_package(glew REQUIRED)
find_library(assimp REQUIRED)

INCLUDE_DIRECTORIES(dependencies/bullet)
LINK_DIRECTORIES(dependencies/bullet)

set(SOURCE_FILES
        dependencies/stb_image/stb_image.cpp
        src/main.cpp
        src/engine/Shader.cpp
        src/engine/Texture.cpp
        src/engine/GameScene.cpp
        src/engine/GameRender.cpp
        src/engine/GameObject.cpp
        src/engine/ResourceManager.cpp
        src/engine/Model.cpp
        src/engine/Mesh.cpp
        src/engine/WindowManager.cpp
        src/game/Game.cpp
        src/game/Camera.cpp
        src/game/Game_MainGame.cpp
        src/game/Game_SceneModel.cpp
        src/engine/DebugHelper.cpp include/DebugHelper.h)

add_executable(Game_Engine ${SOURCE_FILES})

target_link_libraries(Game_Engine assimp)
TARGET_LINK_LIBRARIES(Game_Engine libBulletDynamics.a libBulletCollision.a libBullet3Common.a libBulletExampleBrowserLib.a
                    libBulletInverseDynamics.a libBulletInverseDynamicsUtils.a libBulletRobotics.a libBulletSoftBody.a
                    libBulletWorldImporter.a libBussIK.a libclsocket.a libgwen.a libLinearMath.a libOpenGLWindow.a)

target_link_libraries (Game_Engine
        ${OPENGL_LIBRARIES}
        ${GLEW_LIBRARY} glew32
        ${GLFW_LIBRARY} glfw3
        )
