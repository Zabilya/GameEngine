//
// Created by Ilya on 24.02.2020.
//

#ifndef GAME_ENGINE_GAME_MAINGAME_H
#define GAME_ENGINE_GAME_MAINGAME_H

#include "Game.h"
#include "Camera.h"
#include "ResourceManager.h"

class Game_MainGame : public virtual Game {
public:
    Camera camera;

    Game_MainGame(GLuint width, GLuint height);
    ~Game_MainGame();
    void Init() override;
    void ProcessInput(GLfloat deltaTime) override;
    void Update(GLfloat deltaTime) override;
    void Render() override;
};

#endif //GAME_ENGINE_GAME_MAINGAME_H
