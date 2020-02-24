//
// Created by Ilya on 24.02.2020.
//

#ifndef GAME_ENGINE_BREAKOUT_H
#define GAME_ENGINE_BREAKOUT_H

#include "../Game.h"
#include "BreakoutLevel.h"
#include "../SpriteRenderer.h"
#include "../ResourceManager.h"

class Breakout : public virtual Game {
public:
    GameState state;
    std::vector<BreakoutLevel>  levels;
    GLuint                  level;

    Breakout(GLuint width, GLuint height);
    ~Breakout();
    void Init() override;
    void ProcessInput(GLfloat dt) override;
    void Update(GLfloat dt) override;
    void Render() override;
};

#endif //GAME_ENGINE_BREAKOUT_H
