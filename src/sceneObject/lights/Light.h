//
// Created by 17776048 on 2019-09-27.
//

#ifndef ENGINE_LIGHT_H
#define ENGINE_LIGHT_H

#include "string"
#include "../../../dependencies/glm/glm.hpp"
#include "../../../dependencies/glm/gtc/matrix_transform.hpp"
#include "../../../dependencies/glm/gtc/type_ptr.hpp"
#include "../../shader/Shader.h"

enum Type {
    DIRECT, POINT, SPOT
};

class Light {
public:
    virtual void render(Shader shader) = 0;
};


#endif //ENGINE_LIGHT_H
