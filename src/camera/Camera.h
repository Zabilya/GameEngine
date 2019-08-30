//
// Created by Илья Заболотний on 30/08/2019.
//

#ifndef ENGINE_CAMERA_H
#define ENGINE_CAMERA_H

#include "../../dependencies/glm/glm.hpp"
#include "../../dependencies/glm/gtc/matrix_transform.hpp"

#include <vector>

enum CAMERA_MOVEMENT {
    FORWARD,
    BACKWARD,
    LEFT,
    RIGHT
};

const float YAW         = -90.0f;
const float PITCH       =  0.0f;
const float SPEED       =  2.5f;
const float SENSITIVITY =  0.1f;
const float ZOOM        =  45.0f;

class Camera {
public:
    // camera Attributes
    glm::vec3 position;
    glm::vec3 front;
    glm::vec3 up;
    glm::vec3 right;
    glm::vec3 worldUp;
    // Euler Angles
    float yaw;
    float pitch;
    // camera options
    float movementSpeed;
    float mouseSensitivity;
    float zoom;

    Camera(glm::vec3 position);

    // Returns the view matrix calculated using Euler Angles and the LookAt Matrix
    glm::mat4 getViewMatrix();

    void processKeyboard(CAMERA_MOVEMENT direction, float deltaTime);

    void processMouseMovement(float offsetX, float offsetY);

    void processMouseScroll(float offsetY);

private:
    // Calculates the front vector from the camera's (updated) Euler Angles
    void updateCameraVectors();
};


#endif //ENGINE_CAMERA_H
