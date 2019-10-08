//
// Created by 17776048 on 2019-09-27.
//

#include "SpotLight.h"

SpotLight::SpotLight(int lightNumber, glm::vec3 position, glm::vec3 direction, glm::vec3 ambient, glm::vec3 diffuse,
        glm::vec3 specular, float constant, float linear, float quadratic, float cutOff, float outerCutOff) {
    this->number = lightNumber;
    this->position = position;
    this->direction = direction;
    this->ambient = ambient;
    this->diffuse = diffuse;
    this->specular = specular;
    this->constant = constant;
    this->linear = linear;
    this->quadratic = quadratic;
    this->cutOff = cutOff;
    this->outerCutOff = outerCutOff;

    this->lightType = SPOT;
}

void SpotLight::render(Shader shader) {
    shader.setVec3("spotLight[" + std::to_string(number) + "].position", position.x, position.y, position.z);
    shader.setVec3("spotLight[" + std::to_string(number) + "].direction", direction.x, direction.y, direction.z);
    shader.setVec3("spotLight[" + std::to_string(number) + "].ambient", ambient.x, ambient.y, ambient.z);
    shader.setVec3("spotLight[" + std::to_string(number) + "].diffuse", diffuse.x, diffuse.y, diffuse.z);
    shader.setVec3("spotLight[" + std::to_string(number) + "].specular", specular.x, specular.y, specular.z);
    shader.setFloat("spotLight[" + std::to_string(number) + "].constant", constant);
    shader.setFloat("spotLight[" + std::to_string(number) + "].linear", linear);
    shader.setFloat("spotLight[" + std::to_string(number) + "].quadratic", quadratic);
    shader.setFloat("spotLight[" + std::to_string(number) + "].cutOff", glm::cos(cutOff));
    shader.setFloat("spotLight[" + std::to_string(number) + "].outerCutOff", glm::cos(outerCutOff));
}