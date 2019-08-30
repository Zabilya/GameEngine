//
// Created by Илья Заболотний on 24/08/2019.
//
#ifndef ENGINE_KEYHANDLER_H
#define ENGINE_KEYHANDLER_H

#include <GLFW/glfw3.h>
#include "../../dependencies/glm/glm.hpp"
#include "../../dependencies/glm/gtc/matrix_transform.hpp"
#include "../../dependencies/glm/gtc/type_ptr.hpp"
#include "../Camera/Camera.h"

void processInput(GLFWwindow *window, Camera *camera, float deltaTime);

#endif //ENGINE_KEYHANDLER_H
