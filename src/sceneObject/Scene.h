//
// Created by 17776048 on 2019-09-25.
//

#ifndef ENGINE_SCENE_H
#define ENGINE_SCENE_H

#include "SceneObject.h"
#include <vector>

class Scene {
public:
    std::vector<SceneObject> objects;

    Scene(std::vector<SceneObject> objects);
    void drawAll();
    void drawPortals();
    void drawNonPortals();
    void drawOne(unsigned int index);
    void drawOnlyType(objectType type);
    void addObject(SceneObject object);

};


#endif //ENGINE_SCENE_H
