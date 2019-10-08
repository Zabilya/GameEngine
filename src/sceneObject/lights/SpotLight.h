//
// Created by 17776048 on 2019-09-27.
//

#ifndef ENGINE_SPOTLIGHT_H
#define ENGINE_SPOTLIGHT_H


#include "PointLight.h"

class SpotLight : PointLight {
public:
    glm::vec3 direction;

    /*
     * Градусы, которыми задается внутренная зона, которая будет освещена прожектором.
     */
    float cutOff;

    /*
     * Градусы, которыми задается внушняя граница освещенного участка.
     * Начиная с внутренней границы и до внешней границы свет будет мягко затухать.
     */
    float outerCutOff;

    SpotLight(int lightNumber, glm::vec3 position, glm::vec3 direction, glm::vec3 ambient, glm::vec3 diffuse,
            glm::vec3 specular, float constant, float linear, float quadratic, float cutOff, float outerCutOff);
    void render(Shader shader);
};


#endif //ENGINE_SPOTLIGHT_H
