//
// Created by 17776048 on 2019-09-27.
//

#include "PointLight.h"

PointLight::PointLight() {}

PointLight::PointLight(const glm::vec3 &position, const glm::vec3 &ambient, const glm::vec3 &diffuse,
        const glm::vec3 &specular, float constant, float linear, float quadratic, int number) :
        position(position), ambient(ambient), diffuse(diffuse), specular(specular),
        constant(constant), linear(linear), quadratic(quadratic), number(number) {
    lightType = POINT;
}

void PointLight::render(Shader shader) {
    shader.setVec3("pointLight[" + std::to_string(number) + "].position", position.x, position.y, position.z);
    shader.setVec3("pointLight[" + std::to_string(number) + "].ambient", ambient.x, ambient.y, ambient.z);
    shader.setVec3("pointLight[" + std::to_string(number) + "].diffuse", diffuse.x, diffuse.y, diffuse.z);
    shader.setVec3("pointLight[" + std::to_string(number) + "].specular", specular.x, specular.y, specular.z);
    shader.setFloat("pointLight[" + std::to_string(number) + "].constant", constant);
    shader.setFloat("pointLight[" + std::to_string(number) + "].linear", linear);
    shader.setFloat("pointLight[" + std::to_string(number) + "].quadratic", quadratic);
}


