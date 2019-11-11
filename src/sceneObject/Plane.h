//
// Created by 17776048 on 2019-11-11.
//

#ifndef ENGINE_PLANE_H
#define ENGINE_PLANE_H

#include "SceneObject.h"
#include "../textures/textures_util.h"


class Plane {
public:
    glm::vec3 position;
    unsigned int textureId;
    unsigned int planeVbo;
    unsigned int planeVao;
    glm::mat4 model;

    Plane(glm::vec3 position, string texturePath);
    void bindData();
    void bindTexture(Shader shader, string textureName, int nrTexture);
    void drawPlane(Shader shader);

private:
    static const unsigned int nrArrayElements = 48;
    float *vertices;

};


#endif //ENGINE_PLANE_H
