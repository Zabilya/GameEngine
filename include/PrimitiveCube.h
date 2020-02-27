//
// Created by Azure Void on 26.02.2020.
//

#ifndef GAME_ENGINE_PRIMITIVECUBE_H
#define GAME_ENGINE_PRIMITIVECUBE_H


#include <GL/glew.h>
#include <GL/gl.h>
#include "GameObject.h"

class PrimitiveCube : public GameObject {
public:
    PrimitiveCube();
    PrimitiveCube(glm::vec3 position);
    GLuint Init();
};


#endif //GAME_ENGINE_PRIMITIVECUBE_H
