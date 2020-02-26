//
// Created by Ilya on 25.02.2020.
//

#ifndef GAME_ENGINE_SCENEMODEL_H
#define GAME_ENGINE_SCENEMODEL_H

#include "Game.h"
#include "Camera.h"
#include "ResourceManager.h"

class SceneModel : public virtual Game {
public:
    Camera camera;

    SceneModel(GLuint width, GLuint height);
    ~SceneModel();
    void Init() override;
    void ProcessInput(GLfloat deltaTime) override;
    void Update(GLfloat deltaTime) override;
    void Render() override;
};

#endif //GAME_ENGINE_SCENEMODEL_H
