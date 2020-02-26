//
// Created by Azure Void on 25.02.2020.
//

#ifndef GAME_ENGINE_RENDER_H
#define GAME_ENGINE_RENDER_H

#include "GameObject.h"
#include "GameScene.h"

using namespace std;

class Render {
public:
    void Init();
    void DrawScene(GameScene* scene);
private:
    GLuint _width;
    GLuint _height;
};


#endif //GAME_ENGINE_RENDER_H
