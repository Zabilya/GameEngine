//
// Created by Azure Void on 25.02.2020.
//

#ifndef GAME_ENGINE_GAMEOBJECT_H
#define GAME_ENGINE_GAMEOBJECT_H


#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>

class GameObject {
public:
    GameObject() {};

    GameObject(glm::vec3 position) {
        //TODO: if pos !ok do smth
        SetPosition(position);
    }

    glm::vec3 GetPosition() {
        return _position;
    }

    GLuint SetPosition(glm::vec3 position) {
        //TODO: if position is valid replace pos, otherwise return error code
        _position = position;
        return 0;
    }
protected:
    glm::vec3 _position;
    virtual GLuint Init() = 0;
};


#endif //GAME_ENGINE_GAMEOBJECT_H
