//
// Created by Ilya on 24.02.2020.
//

#ifndef GAME_ENGINE_SCENETEST_H
#define GAME_ENGINE_SCENETEST_H

#include "Game.h"
#include "Camera.h"
#include "ResourceManager.h"

class SceneTest : public virtual Game {
public:
    Camera camera;

    SceneTest(GLuint width, GLuint height);
    ~SceneTest();
    void Init() override;
    void ProcessInput(GLfloat deltaTime) override;
    void Update(GLfloat deltaTime) override;
    void Render() override;
};

#endif //GAME_ENGINE_SCENETEST_H
