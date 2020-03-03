//
// Created by Azure Void on 27.02.2020.
//

#include "../../include/DebugHelper.h"
#include "../../include/WindowManager.h"

bool WindowManager::Init(GLuint width, GLuint height, const char* title) {
    if (width < 1 || height < 1 || title == nullptr)
        return false;
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, DEFAULT_MAJOR_GL_VERSION);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, DEFAULT_MINOR_GL_VERSION);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    _window = glfwCreateWindow(width, height, title, nullptr, nullptr);
    if (!_window) {
        glfwTerminate();
        return false;
    }
    glfwMakeContextCurrent(_window);

    DebugHelper::Log(new string("Window inited."));
    return true;
}

GLFWwindow *WindowManager::GetWindow() {
    return _window;
}

void WindowManager::SetCallbacks(void (*scrollCallback)(GLFWwindow *, double, double),
                                 void (*mouseCallback)(GLFWwindow *, double, double),
                                 void (*keyCallback)(GLFWwindow *, int, int, int, int)) {
    if (scrollCallback != nullptr) {
        _scrollCallback = scrollCallback;
        glfwSetScrollCallback(_window, scrollCallback);
    }
    if (mouseCallback != nullptr) {
        _mouseCallback = mouseCallback;
        glfwSetCursorPosCallback(_window, mouseCallback);
    }
    if (keyCallback != nullptr) {
        _keyCallback = keyCallback;
        glfwSetKeyCallback(_window, keyCallback);
    }
    glfwSetInputMode(_window, GLFW_CURSOR, GLFW_CURSOR_DISABLED);
}
