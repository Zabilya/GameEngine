//
// Created by Azure Void on 17.02.2020.
//

#include "../../include/DebugHelper.h"
#include "../../include/Game.h"
#include "../../include/GameScene.h"
#include "../../include/PrimitiveCube.h"
#include "../../include/ResourceManager.h"

using namespace std;


Game::Game(GLuint width, GLuint height) :
        keys(), width(width), height(height), currentScene(nullptr), render(){}

Game::~Game() = default;

void Game::Init() {
    try {
        //    GameScene scene{ResourceManager::LoadScene("scenes/test.lvl")};
        //    currentScene = &scene;
        //    _currentScene.AddNewObject(new PrimitiveCube{glm::vec3{0.0f, 0.0f, 0.0f}});
        //    render = GameRender();
        //    render.Init();
        DebugHelper::Log(new string("Game inited."));
    }
    catch (exception &ex) {
        DebugHelper::Log(DebugHelper::CreateLogMessage(new string(ex.what()), new string(__FILE__), __LINE__));
    }
}

void Game::Update(GLfloat dt) {

}

void Game::ProcessInput(GLfloat dt) {

}

void Game::Render() {
//    vector<GameObject*> objects{currentScene->GetAllObjects()}; //TODO: remove when const
//    render.DrawObjects(&objects, glm::mat4(1.0f));
}
