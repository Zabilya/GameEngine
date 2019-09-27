//
// Created by 17776048 on 2019-09-27.
//

#include "DirectLight.h"

DirectLight::DirectLight(const glm::vec3 &direction, const glm::vec3 &ambient, const glm::vec3 &diffuse,
        const glm::vec3 &specular, int number) : direction(direction), ambient(ambient), diffuse(diffuse),
        specular(specular), number(number) {
    lightType = DIRECT;
}

void DirectLight::render(Shader shader) {
    shader.setVec3("dirLight[" + std::to_string(number) + "].direction", direction.x, direction.y, direction.z);
    shader.setVec3("dirLight[" + std::to_string(number) + "].ambient", ambient.x, ambient.y, ambient.z);
    shader.setVec3("dirLight[" + std::to_string(number) + "].diffuse", diffuse.x, diffuse.y, diffuse.z);
    shader.setVec3("dirLight[" + std::to_string(number) + "].specular", specular.x, specular.y, specular.z);
}