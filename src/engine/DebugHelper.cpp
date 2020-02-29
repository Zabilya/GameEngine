//
// Created by Azure Void on 29.02.2020.
//

#include "../../include/DebugHelper.h"

#include <string>
#include <iostream>

void DebugHelper::Init() {
    glEnable(GL_DEBUG_OUTPUT);
    glEnable(GL_DEBUG_OUTPUT_SYNCHRONOUS);
    glDebugMessageCallback(GLErrorCallback, nullptr);
}

void DebugHelper::Log(const string* message, const string* fileName, const int line) {
    cout << "========================= ERROR INFO BEGIN =========================" << endl;
    if (message != nullptr)
        cout << *message << endl;
    if (fileName != nullptr)
        cout << "File name: " << *fileName << endl << "Line: " << line << endl;
    cout << "========================== ERROR INFO END ==========================" << endl << endl;
}

void DebugHelper::GLErrorCallback(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar *message, const void *userParam) {
    string _source;
    string _type;
    string _severity;
    string _msg{message};

    switch (source) {
        case GL_DEBUG_SOURCE_API:
            _source = "API";
            break;

        case GL_DEBUG_SOURCE_WINDOW_SYSTEM:
            _source = "WINDOW SYSTEM";
            break;

        case GL_DEBUG_SOURCE_SHADER_COMPILER:
            _source = "SHADER COMPILER";
            break;

        case GL_DEBUG_SOURCE_THIRD_PARTY:
            _source = "THIRD PARTY";
            break;

        case GL_DEBUG_SOURCE_APPLICATION:
            _source = "APPLICATION";
            break;

        case GL_DEBUG_SOURCE_OTHER:
            _source = "UNKNOWN";
            break;

        default:
            _source = "UNKNOWN";
            break;
    }

    switch (type) {
        case GL_DEBUG_TYPE_ERROR:
            _type = "ERROR";
            break;

        case GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR:
            _type = "DEPRECATED BEHAVIOR";
            break;

        case GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR:
            _type = "UDEFINED BEHAVIOR";
            break;

        case GL_DEBUG_TYPE_PORTABILITY:
            _type = "PORTABILITY";
            break;

        case GL_DEBUG_TYPE_PERFORMANCE:
            _type = "PERFORMANCE";
            break;

        case GL_DEBUG_TYPE_OTHER:
            _type = "OTHER";
            break;

        case GL_DEBUG_TYPE_MARKER:
            _type = "MARKER";
            break;

        default:
            _type = "UNKNOWN";
            break;
    }

    switch (severity) {
        case GL_DEBUG_SEVERITY_HIGH:
            _severity = "HIGH";
            break;

        case GL_DEBUG_SEVERITY_MEDIUM:
            _severity = "MEDIUM";
            break;

        case GL_DEBUG_SEVERITY_LOW:
            _severity = "LOW";
            break;

        case GL_DEBUG_SEVERITY_NOTIFICATION:
            _severity = "NOTIFICATION";
            break;

        default:
            _severity = "UNKNOWN";
            break;
    }

    Log(new string("[GL Error]\n"
                   "Error id: " + std::to_string(id) + "\n" +
                   "Error type: " + _type + "\n" +
                   "Error severity: " + _severity + "\n" +
                   "Raised from: " + _source + "\n" +
                   "Message: \"" + _msg + "\""), nullptr, 0);

//                   "File: " + __FILE__ + "\n" +
//                   "Line: " + std::to_string(__LINE__) + "\n"));
// i dunno how to make it works for opengl calls ;/
// its actually possible to add line and file in which shit happened with a macro call of function-wrapper for gl calls,
//  on other hand using gl debugger sounds like an adequate alternative, if logger caught gl error

    if (severity == GL_DEBUG_SEVERITY_HIGH) {
        char x;
        cin >> x; //TODO REMOVE: temporary workaround to prompt when GL errors occurs
    }
}
