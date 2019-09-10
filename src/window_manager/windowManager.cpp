//
// Created by Илья Заболотний on 24/08/2019.
//

#include "windowManager.h"

GLFWwindow *createWindow(int width, int height, string title) {
    if (!glfwInit())
        return nullptr;

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
#ifdef __APPLE__
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE); // uncomment this statement to fix compilation on OS X
#endif

    /* Create a windowed mode window and its OpenGL context */
    return glfwCreateWindow(width, height, title.c_str(), NULL, NULL);
}



void frameBufferSizeCallback(GLFWwindow* window, int width, int height) {
    glViewport(0, 0, width, height);
    cout << "ViewPort size is: " << width << " " << height << endl;
}