//
// Created by Илья Заболотний on 30/08/2019.
//

#include "../../include/DebugHelper.h"
#include "../../include/Camera.h"

Camera::Camera(glm::vec3 position) {
    this->position = position;
    worldUp = glm::vec3(0.0f, 1.0f, 0.0f);
    yaw = YAW;
    pitch = PITCH;
    front = glm::vec3(0.0f, 0.0f, -1.0f);
    movementSpeed = SPEED;
    mouseSensitivity = SENSITIVITY;
    zoom = ZOOM;
    updateCameraVectors();
    DebugHelper::Log(new string("Camera created."));
}

glm::mat4 Camera::GetViewMatrix() {
    return glm::lookAt(position, position + front, up);
}

void Camera::ProcessKeyboard(CAMERA_MOVEMENT direction, float deltaTime) {
    float velocity = movementSpeed * deltaTime;
    if (direction == FORWARD)
        position += front * velocity;
    if (direction == BACKWARD)
        position -= front * velocity;
    if (direction == LEFT)
        position -= right * velocity;
    if (direction == RIGHT)
        position += right * velocity;
    if (direction == UP)
        position += up * velocity;
    if (direction == DOWN)
        position -= up * velocity;
}

void Camera::ProcessMouseMovement(float offsetX, float offsetY) {
    offsetX *= mouseSensitivity;
    offsetY *= mouseSensitivity;

    yaw   += offsetX;
    pitch += offsetY;

    // Make sure that when pitch is out of bounds, screen doesn't get flipped

    if (pitch > 89.0f)
        pitch = 89.0f;
    if (pitch < -89.0f)
        pitch = -89.0f;

    // Update Front, Right and Up Vectors using the updated Euler angles
    updateCameraVectors();
}

void Camera::ProcessMouseScroll(float offsetY) {
    if (zoom >= 1.0f && zoom <= 45.0f)
        zoom -= offsetY;
    if (zoom <= 1.0f)
        zoom = 1.0f;
    if (zoom >= 45.0f)
        zoom = 45.0f;
}

void Camera::updateCameraVectors() {
    glm::vec3 Front;
    Front.x = cos(glm::radians(yaw)) * cos(glm::radians(pitch));
    Front.y = sin(glm::radians(pitch));
    Front.z = sin(glm::radians(yaw)) * cos(glm::radians(pitch));
    front = glm::normalize(Front);
    // Also re-calculate the Right and Up vector
    // Normalize the vectors, because their length gets closer to 0 the more you look up or down which results in slower movement.
    right = glm::normalize(glm::cross(front, worldUp));
    up    = glm::normalize(glm::cross(right, front));
}
