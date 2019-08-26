//
// Created by Илья Заболотний on 24/08/2019.
//

#ifndef ENGINE_SHADER_H

#define ENGINE_SHADER_H

#include <GL/glew.h>

#include <iostream>
#include <GLFW/glfw3.h>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

class Shader {
private:
    string vertexSource;
    string fragmentSource;
    unsigned int id;

public:
    Shader(const string& filePath);

    ~Shader();

    void parseShader(const string& filePath);

    unsigned int compileShader(unsigned int type, string& source);

    void createShader();

    void use();

    void setBool(const string &name, bool value) const;

    void setInt(const string &name, int value) const;

    void setFloat(const string &name, float value) const;

    const string &getVertexSource() const;

    const string &getFragmentSource() const;

    unsigned int getShaderId() const;

};


#endif //ENGINE_SHADER_H
