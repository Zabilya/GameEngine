//
// Created by Azure Void on 27.02.2020.
//

#ifndef GAME_ENGINE_WINDOWMANAGER_H
#define GAME_ENGINE_WINDOWMANAGER_H


#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include <string>

#define DEFAULT_MAJOR_GL_VERSION 4
#define DEFAULT_MINOR_GL_VERSION 3

using namespace std;

class WindowManager {
public:
    bool Init(GLuint width, GLuint height, const char* title);
    GLFWwindow* GetWindow();
    void SetCallbacks(void (*scrollCallback)(GLFWwindow* window, double offsetX, double offsetY),
                      void (*mouseCallback)(GLFWwindow* window, double offsetX, double offsetY),
                      void (*keyCallback)(GLFWwindow* window, int key, int scancode, int action, int mode));
private:
    GLFWwindow* _window;
    void (*_scrollCallback)(GLFWwindow* window, double offsetX, double offsetY);
    void (*_mouseCallback)(GLFWwindow* window, double offsetX, double offsetY);
    void (*_keyCallback)(GLFWwindow* window, int key, int scancode, int action, int mode);
};


#endif //GAME_ENGINE_WINDOWMANAGER_H
