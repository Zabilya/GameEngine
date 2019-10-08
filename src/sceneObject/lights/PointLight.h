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

    /*
     * Постоянный коэффициент затухания. Обычно равен единице.
     * Выполняет защиту от уменьшения значения меньше 1
     */
    float constant;

    /*
     * Линейный коэффициент. Линейно уменьшает интенсивность света с ростом расстояния.
     * Чем меньше расстояние, тем больше вклад линейного коэффициента.
     * Выбирается небольшим при освещении больших расстояний.
     */
    float linear;

    /*
     * Квадратичный коэффиуиент. Задает квадратичный спад интенсивности.
     * На малых расстояниях играет незначительную роль, поскольку его вклад перекрыт вкладом линейного кэфа.
     * С ростом расстояния становится доминирующим в уравнении.
     * См. таблицу параметров: http://wiki.ogre3d.org/tiki-index.php?page=-Point+Light+Attenuation
     */
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
