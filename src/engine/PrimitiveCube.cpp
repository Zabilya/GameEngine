//
// Created by Azure Void on 26.02.2020.
//

#include "../../include/PrimitiveCube.h"

GLuint PrimitiveCube::Init() {
    SetPosition(glm::vec3{0.0f, 0.0f, 0.0f});
    //load model or smth etc?
    return 0;
}

PrimitiveCube::PrimitiveCube() = default;

PrimitiveCube::PrimitiveCube(glm::vec3 position) : GameObject(position) {}
