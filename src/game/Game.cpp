//
// Created by Azure Void on 17.02.2020.
//

#include "../../include/Game.h"
#include "../../include/GameScene.h"
#include "../../include/PrimitiveCube.h"
#include "../../include/ResourceManager.h"

using namespace std;


Game::Game(GLuint width, GLuint height) :
        keys(), width(width), height(height), currentScene("scenes/test.lvl"), render(){}

Game::~Game() = default;

void Game::Init() {
//    GameScene scene{ResourceManager::LoadScene("scenes/test.lvl")};
//    currentScene = &scene;
//    _currentScene.AddNewObject(new PrimitiveCube{glm::vec3{0.0f, 0.0f, 0.0f}});
//    render = GameRender();
//    render.Init();
}

void Game::Update(GLfloat dt) {

}

void Game::ProcessInput(GLfloat dt) {

}

void Game::Render() {
//    vector<GameObject*> objects{currentScene->GetAllObjects()}; //TODO: remove when const
//    render.DrawObjects(&objects, glm::mat4(1.0f));
}
