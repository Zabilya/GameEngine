//
// Created by Azure Void on 25.02.2020.
//

#ifndef GAME_ENGINE_GAMESCENE_H
#define GAME_ENGINE_GAMESCENE_H

#include <vector>
#include <string>

#include "GameObject.h"

using namespace std;


class GameScene {
public:
    GameScene(GLchar* filePath);
    ~GameScene();
    void AddNewObject(GameObject* object);
    void RemoveObject(GameObject* object);
    void RemoveObjectById(GLuint id);
    void RemoveObjectsByTag(string tag);
    void EnableDefaultFlags();
    GameObject* FindObjectById(GLuint id);
    vector<GameObject*> FindObjectByTag(string tag);
private:
    vector<GameObject *> _objects;
};


#endif //GAME_ENGINE_GAMESCENE_H
