//
// Created by Azure Void on 25.02.2020.
//

#include <stdexcept>
#include <fstream>
#include <iostream> //TODO: remove
#include <string> //TODO: remove

#include "../../include/GameScene.h"
#include "../../include/PrimitiveCube.h"

using namespace std;


GameScene::GameScene(GLchar* filePath) {
    try {
        ifstream fileStream;

        fileStream.open(filePath);
        if (!fileStream.is_open()) {
            string errorMsg {"Cannot open file: "};
            throw runtime_error(errorMsg.append(filePath));
        }
        /*parsing code
        ...
        */
        AddNewObject(new PrimitiveCube()); //TODO: change for real reading
    }
    catch (runtime_error &ex) {
        cout << ex.what() << endl; //TODO: replace to error logger
    }
    catch (exception &ex) {
        cout << ex.what() << endl; //TODO: replace to error logger
    }
}

GameScene::~GameScene() {
    _objects.clear();
}

void GameScene::AddNewObject(GameObject *object) {
    if (object != nullptr) {
        _objects.push_back(object);
    }
}

void GameScene::RemoveObject(GameObject *object) {
    if (object != nullptr) {
        for (auto i = _objects.begin(); i < _objects.end(); ++i) {
            if (i.operator*() == object) {
                _objects.erase(i);
                break;
            }
        }
    }
}

void GameScene::RemoveObjectById(GLuint id) {

}

void GameScene::RemoveObjectsByTag(string tag) {

}

GameObject *GameScene::FindObjectById(GLuint id) {
    return nullptr;
}

vector<GameObject *> GameScene::FindObjectByTag(string tag) {
    return vector<GameObject *>();
}