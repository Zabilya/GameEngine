//
// Created by 17776048 on 2019-09-27.
//

#ifndef ENGINE_POINTLIGHT_H
#define ENGINE_POINTLIGHT_H

#include "Light.h"

class PointLight : public Light {
public:
    glm::vec3 position;
    glm::vec3 ambient;
    glm::vec3 diffuse;
    glm::vec3 specular;
    float constant;
    float linear;
    float quadratic;
    int number;
    Type lightType;

    PointLight(const glm::vec3 &position, const glm::vec3 &ambient, const glm::vec3 &diffuse, const glm::vec3 &specular,
               float constant, float linear, float quadratic, int number);
    void render(Shader shader);

protected:
    PointLight();
};


#endif //ENGINE_POINTLIGHT_H
