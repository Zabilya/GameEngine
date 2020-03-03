//
// Created by Azure Void on 29.02.2020.
//

#ifndef GAME_ENGINE_DEBUGHELPER_H
#define GAME_ENGINE_DEBUGHELPER_H

#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include <string>

using namespace std;

class DebugHelper {
public:
    static void Init();
    static void Log(const string *message);
    static const string *CreateLogMessage(const string *message, const string *fileName, const int line);
    static const string *GetTimeString();
    static void APIENTRY GLErrorCallback(GLenum source,
                                         GLenum type,
                                         GLuint id,
                                         GLenum severity,
                                         GLsizei length,
                                         const GLchar *msg,
                                         const void *userParam);
private:
};


#endif //GAME_ENGINE_DEBUGHELPER_H
