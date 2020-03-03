//
// Created by Azure Void on 25.02.2020.
//

#include <stdexcept>
#include <fstream>
#include <iostream> //TODO: remove
#include <string> //TODO: remove

#include "../../include/DebugHelper.h"
#include "../../include/GameScene.h"
#include "../../include/PrimitiveCube.h"
#include "../../include/ResourceManager.h"

using namespace std;

GameScene::GameScene(const GLchar* filePath) {
    try {
        if (!filePath)
            return;
        ifstream fileStream;
        fileStream.exceptions(ifstream::badbit | ifstream::failbit);

        /*parsing code
        fileStream.open(filePath);
        ...
        */
        EnableDefaultFlags();
        DebugHelper::Log(new string("Game scene created."));
    }
    catch (ifstream::failure &ex) {
        DebugHelper::Log(DebugHelper::CreateLogMessage(new string(ex.what()), new string(__FILE__), __LINE__));
    }
}

GameScene::~GameScene() {
    _objects.clear();
}

void GameScene::AddNewObject(shared_ptr<GameObject> object) {
        _objects.push_back(object);
}

void GameScene::RemoveObject(shared_ptr<GameObject> object) {
//    if (object != nullptr) {
//        for (auto i = _objects.begin(); i < _objects.end(); ++i) {
//            if (i.operator*() == object) { //TODO: CHECK
//                _objects.erase(i);
//                break;
//            }
//        }
//    }
}

void GameScene::RemoveObjectById(GLuint id) {

}

void GameScene::RemoveObjectsByTag(string tag) {

}

shared_ptr<GameObject> GameScene::FindObjectById(GLuint id) {
//    return nullptr;
}

vector<shared_ptr<GameObject>> *GameScene::FindObjectByTag(string tag) {
//    return vector<GameObject *>();
}

void GameScene::EnableDefaultFlags() {
    glEnable(GL_DEPTH_TEST);
}

vector<shared_ptr<GameObject>> *GameScene::GetAllObjects() {
//    return shared_ptr<vector<shared_ptr<GameObject>>>(_objects); //TODO: realize how to change to const
    return &_objects;
}
