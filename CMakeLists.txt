#cmake_minimum_required(VERSION 3.14)
#project(engine)
#
#set(CMAKE_CXX_STANDARD 14)
#
#set(SOURCE_FILES src/main.cpp)
#
#set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
#set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
#set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
#
#add_subdirectory(dependencies/GLFW)
#
#set(dir ${CMAKE_CURRENT_SOURCE_DIR})
#set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${dir}/build)
#
#add_executable(engine ${SOURCE_FILES})
#target_link_libraries(engine glfw)
#
#find_package(OpenGL REQUIRED)
#target_include_directories(engine PUBLIC ${OPENGL_INCLUDE_DIR})
#target_link_libraries(engine ${OPENGL_gl_LIBRARY})
#
#target_link_libraries(engine ${OPENGL_glu_LIBRARY})

cmake_minimum_required(VERSION 3.8)
project(engine)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_MODULE_PATH /usr/local/lib)
set(CMAKE_PREFIX_PATH /usr/local/lib/GLFW)

#find_package (PkgConfig REQUIRED)
include_directories(/usr/local/include/assimp)
link_directories(/usr/local/lib)

find_package (OpenGL REQUIRED)
find_package (glfw3 REQUIRED)
find_package(glew REQUIRED)
#find_package(assimp REQUIRED)
include_directories(${GLFW_INCLUDE_DIRS})

#GLFW
#set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
#set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
#set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
#add_subdirectory(dependencies/GLFW)

#assimp
#add_subdirectory(dependencies/assimp)

include_directories(/usr/local/include)
find_library(COCOA_LIBRARY Cocoa REQUIRED)
find_library(IOKIT_LIBRARY IOKit REQUIRED)
find_library(COREVID_LIBRARY CoreVideo REQUIRED)

set(SOURCE_FILES src/main.cpp dependencies/stb_image/stb_image.cpp src/shader/Shader.cpp src/shader/Shader.h src/key_handler/keyHandler.h src/key_handler/keyHandler.cpp src/window_manager/windowManager.h src/window_manager/windowManager.cpp src/camera/Camera.cpp src/camera/Camera.h src/utils/utils.cpp src/utils/utils.h src/model/mesh/Mesh.cpp src/model/mesh/Mesh.h src/model/model/Model.cpp src/model/model/Model.h)
add_executable(engine ${SOURCE_FILES})

#target_link_libraries(engine glfw)
target_link_libraries(engine assimp)

target_link_libraries (engine
        ${OPENGL_LIBRARIES}
        ${GLEW_LIBRARY}
        ${COCOA_LIBRARY}
        ${COREVID_LIBRARY}
        ${IOKIT_LIBRARY}
        ${GLFW_LIBRARY} glfw)

















