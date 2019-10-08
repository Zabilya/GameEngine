//
// Created by 17776048 on 2019-09-25.
//

#ifndef ENGINE_CUBE_H
#define ENGINE_CUBE_H


#include "SceneObject.h"
#include "../textures/textures_util.h"

class Cube{
public:
    glm::vec3 position;
    unsigned int textureId;
    unsigned int cubeVbo;
    unsigned int cubeVao;
    string textureNameGL;
    glm::mat4 model;

    Cube(glm::vec3 position, string texturePath);
    void bindData();
    void bindTexture(Shader shader, string textureName, int nrTexture);
    void drawCube(Shader shader);

private:
    static const unsigned int nrArrayElements = 288;
    float *vertices;


};


#endif //ENGINE_CUBE_H
