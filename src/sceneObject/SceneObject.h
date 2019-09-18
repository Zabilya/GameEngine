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
    PORTAL, NONPORTAL
};

class SceneObject {
public:
    SceneObject();
    objectType getType();
    void Draw();

private:
    glm::vec3 position;
    glm::mat4 modelMat;


};


#endif //ENGINE_SCENEOBJECT_H
