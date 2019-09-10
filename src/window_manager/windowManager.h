//
// Created by Илья Заболотний on 24/08/2019.
//

#ifndef ENGINE_WINDOWMANAGER_H
#define ENGINE_WINDOWMANAGER_H

#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>
#include <string>

using namespace std;

void frameBufferSizeCallback(GLFWwindow* window, int width, int height);
GLFWwindow *createWindow(int width, int height, string title);

#endif //ENGINE_WINDOWMANAGER_H
