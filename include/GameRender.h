//
// Created by Azure Void on 25.02.2020.
//

#ifndef GAME_ENGINE_GAMERENDER_H
#define GAME_ENGINE_GAMERENDER_H

#include "GameObject.h"
#include "GameScene.h"

using namespace std;

class GameRender {
public:
    void Init();
    void DrawObjects(const vector<shared_ptr<GameObject>>& objects, glm::mat4 view); //TODO: should be const
private:
    GLuint _width;
    GLuint _height;
};


#endif //GAME_ENGINE_GAMERENDER_H
