//
// Created by Ilya on 02.03.2020.
//

#ifndef GAME_ENGINE_GAME_SCENELIGHT_H
#define GAME_ENGINE_GAME_SCENELIGHT_H

#include "Game.h"
#include "Camera.h"
#include "ResourceManager.h"

class Game_SceneLight : public virtual Game {
public:
    Camera camera;

    Game_SceneLight(GLuint width, GLuint height);
    ~Game_SceneLight();
    void Init() override;
    void ProcessInput(GLfloat deltaTime) override;
    void Update(GLfloat deltaTime) override;
    void Render() override;
};

#endif //GAME_ENGINE_GAME_SCENELIGHT_H
