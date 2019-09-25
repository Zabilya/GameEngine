//
// Created by 17776048 on 2019-09-17.
//

#include "SceneObject.h"

SceneObject::SceneObject(enum objectType type, bool isPortal) {
    this->objectType = type;
    this->portal = isPortal;
}

objectType SceneObject::getType() {
    return objectType;
}

