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
    GameScene(const GLchar* filePath);
    ~GameScene();
    void AddNewObject(GameObject* object);
    void RemoveObject(GameObject* object);
    void RemoveObjectById(GLuint id);
    void RemoveObjectsByTag(string tag);
    GameObject* FindObjectById(GLuint id);
    vector<GameObject*> FindObjectByTag(string tag);
    vector<GameObject*> GetAllObjects(); //TODO: realize how to change to const
private:
    vector<GameObject*> _objects;
    void EnableDefaultFlags();
};


#endif //GAME_ENGINE_GAMESCENE_H
