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
    void AddNewObject(shared_ptr<GameObject> object);
    void RemoveObject(shared_ptr<GameObject> object);
    void RemoveObjectById(GLuint id);
    void RemoveObjectsByTag(string tag);
    shared_ptr<GameObject> FindObjectById(GLuint id);
    //TODO подумать, как возвращать shared_ptr вместо обычного указателя
    vector<shared_ptr<GameObject>> *FindObjectByTag(string tag);
    vector<shared_ptr<GameObject>> *GetAllObjects(); //TODO: realize how to change to const
private:
    vector<shared_ptr<GameObject>> _objects;
    void EnableDefaultFlags();
};


#endif //GAME_ENGINE_GAMESCENE_H
