//
// Created by Ilya on 27.02.2020.
//

#include "../../include/GameObject.h"

GameObject::GameObject(glm::vec3 position, glm::vec3 scale, Shader *shader, Model *model) :
    _position(glm::vec3(1.0f)), _scale(glm::vec3(1.0f)), _shader(*shader), _model(*model) {
    SetPosition(position);
    SetScale(scale);
}

glm::vec3 GameObject::GetPosition() {
    return _position;
}

GLuint GameObject::SetPosition(glm::vec3 position) {
    //TODO: if position is valid replace pos, otherwise return error code
    _position = position;
    return GL_TRUE;
}

glm::vec3 GameObject::GetScale() {
    return _scale;
}

GLuint GameObject::SetScale(glm::vec3 scale) {
    //TODO: if scale is valid replace scale, otherwise return error code
    _scale = scale;
    return GL_TRUE;

}

Shader GameObject::GetShader() {
    return _shader;
}

Model GameObject::GetModel() {
    return _model;
}


