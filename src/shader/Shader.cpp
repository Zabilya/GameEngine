//
// Created by Илья Заболотний on 24/08/2019.
//

#include "Shader.h"

Shader::Shader(const string &filePath) {
    parseShader(filePath);
    createShader();
}

Shader::~Shader() {

}

void Shader::parseShader(const string& filePath){
    ifstream stream(filePath);

    enum class ShaderType
    {
        NONE = -1, VERTEX = 0, FRAGMENT = 1
    };

    string line;
    stringstream ss[2];
    ShaderType type = ShaderType::NONE;
    while (getline(stream, line)) {
        if (line.find("#shader") != string::npos) {
            if (line.find("vertex") != string::npos) {
                type = ShaderType::VERTEX;
            } else if (line.find("fragment") != string::npos) {
                type = ShaderType::FRAGMENT;
            }
        } else {
            ss[(unsigned int) (type)] << line << '\n';
        }
    }
    vertexSource = ss[(unsigned int)ShaderType::VERTEX].str();
    fragmentSource = ss[(unsigned int)ShaderType::FRAGMENT].str();
}

unsigned int Shader::compileShader(unsigned int type, string& source) {
    unsigned int id = glCreateShader(type);
    const char* src = source.c_str();
    glShaderSource(id, 1, &src, nullptr);
    glCompileShader(id);

    // error handling
    int result;
    glGetShaderiv(id, GL_COMPILE_STATUS, &result);
    if (result == GL_FALSE) {
        int length;
        glGetShaderiv(id, GL_INFO_LOG_LENGTH, &length);
        char *message = (char *) alloca(length * sizeof(char));
        glGetShaderInfoLog(id, length, &length, message);
        cout << "Failed to compile " <<
             (type == GL_VERTEX_SHADER ? "vertex" : "fragment")
             << " shader" << endl;
        cout << message << endl;
        glDeleteShader(id);
    }
    return id;
}

void Shader::createShader() {
    id = glCreateProgram();
    unsigned int vs = compileShader(GL_VERTEX_SHADER, vertexSource);
    unsigned int fs = compileShader(GL_FRAGMENT_SHADER, fragmentSource);

    glAttachShader(id, vs);
    glAttachShader(id, fs);
    glLinkProgram(id);
    glValidateProgram(id);

    glDeleteShader(vs);
    glDeleteShader(fs);
}

void Shader::use() {
    glUseProgram(id);
}

void Shader::setBool(const string &name, bool value) const {
    glUniform1i(glGetUniformLocation(id, name.c_str()), (int)value);
}

void Shader::setInt(const string &name, int value) const {
    glUniform1i(glGetUniformLocation(id, name.c_str()), value);
}

void Shader::setFloat(const string &name, float value) const {
    glUniform1f(glGetUniformLocation(id, name.c_str()), value);
}

void Shader::setMat4(const string &name, glm::mat4 value) {
    glUniformMatrix4fv(glGetUniformLocation(id, name.c_str()), 1, GL_FALSE, glm::value_ptr(value));
}

void Shader::setVec3(const string &name, float x, float y, float z) {
    glUniform3f(glGetUniformLocation(id, name.c_str()), x, y, z);
}

const string &Shader::getVertexSource() const {
    return vertexSource;
}

const string &Shader::getFragmentSource() const {
    return fragmentSource;
}

unsigned int Shader::getShaderId() const {
    return id;
}
