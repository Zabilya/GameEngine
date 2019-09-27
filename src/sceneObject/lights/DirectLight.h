//
// Created by 17776048 on 2019-09-27.
//

#ifndef ENGINE_DIRECTLIGHT_H
#define ENGINE_DIRECTLIGHT_H

#include "Light.h"

class DirectLight : public Light {
public:
    glm::vec3 direction;
    glm::vec3 ambient;
    glm::vec3 diffuse;
    glm::vec3 specular;
    int number;
    Type lightType;

    DirectLight(const glm::vec3 &direction, const glm::vec3 &ambient, const glm::vec3 &diffuse,
                const glm::vec3 &specular, int number);

    void render(Shader shader);
};


#endif //ENGINE_DIRECTLIGHT_H
