//
// Created by Илья Заболотний on 24/08/2019.
//

#include "keyHandler.h"

void processInput(GLFWwindow *window) {
    if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
        glfwSetWindowShouldClose(window, true);
}

