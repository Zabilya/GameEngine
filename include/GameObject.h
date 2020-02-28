//
// Created by Azure Void on 25.02.2020.
//

#ifndef GAME_ENGINE_GAMEOBJECT_H
#define GAME_ENGINE_GAMEOBJECT_H


#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <memory>
#include "Shader.h"
#include "Model.h"

class GameObject {
public:
    GameObject(glm::vec3 position, glm::vec3 scale, Shader *shader, Model *model);
    glm::vec3 GetPosition();
    glm::vec3 GetScale();
    GLuint SetScale(glm::vec3 scale);
    Shader GetShader();
    GLuint SetPosition(glm::vec3 position);
    Model GetModel();

private:
    glm::vec3 _position;
    glm::vec3 _scale;
    Shader _shader;
    Model _model;
};


#endif //GAME_ENGINE_GAMEOBJECT_H
