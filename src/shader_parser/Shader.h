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
#include "../../dependencies/glm/glm.hpp"
#include "../../dependencies/glm/gtc/matrix_transform.hpp"
#include "../../dependencies/glm/gtc/type_ptr.hpp"

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

    void setMat4(const string &name, glm::mat4 value);

    const string &getVertexSource() const;

    const string &getFragmentSource() const;

    unsigned int getShaderId() const;

};


#endif //ENGINE_SHADER_H
