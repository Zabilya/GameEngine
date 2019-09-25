//
// Created by 17776048 on 2019-09-17.
//

#ifndef ENGINE_SCENEOBJECT_H
#define ENGINE_SCENEOBJECT_H

#include "../../dependencies/glm/glm.hpp"
#include "../../dependencies/glm/gtc/matrix_transform.hpp"
#include "../../dependencies/glm/gtc/type_ptr.hpp"
#include "../../dependencies/stb_image/stb_image.h"

enum objectType {
    CUBE, PLANE
};

class SceneObject {
public:
    SceneObject(objectType type, bool isPortal);
    void Draw();
    objectType getType();
    bool isPortal();

    glm::vec3 position;
    glm::vec3 orientation;
    glm::mat4 modelMat;
    unsigned int nrVertices;

private:
    bool portal;
    objectType objectType;


};


#endif //ENGINE_SCENEOBJECT_H
