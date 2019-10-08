//
// Created by 17776048 on 2019-09-17.
//

#include "SceneObject.h"

SceneObject::SceneObject(enum objectType type, bool isMovable, bool isPortal) {
    this->objectType = type;
    this->movable = isMovable;
    this->portal = isPortal;
}

void SceneObject::draw(Shader shader) {}

objectType SceneObject::getType() {
    return objectType;
}

bool SceneObject::isMovable() {
    return movable;
}

bool SceneObject::isPortal() {
    return portal;
}
