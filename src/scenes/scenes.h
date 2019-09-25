//
// Created by 17776048 on 2019-09-11.
//

#ifndef ENGINE_SCENES_H
#define ENGINE_SCENES_H

#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>
#include <string>
#include <tgmath.h>
#include <map>
#include "../../dependencies/stb_image/stb_image.h"
#include "../../dependencies/glm/glm.hpp"
#include "../../dependencies/glm/gtc/matrix_transform.hpp"
#include "../../dependencies/glm/gtc/type_ptr.hpp"

#include "../shader/Shader.h"
#include "../textures/textures_util.h"
#include "../camera/Camera.h"
#include "../key_handler/keyHandler.h"

extern float deltaTime;
extern float lastFrame;

extern const float screenWidth;
extern const float screenHeight;

extern Camera camera;

int sceneAdvancedOpenGL(GLFWwindow* window);
int scenePortal(GLFWwindow *window);
int testScene(GLFWwindow *window);
int sceneFrameBuffer(GLFWwindow* window);
int sceneSkybox(GLFWwindow *window);

#endif //ENGINE_SCENES_H
