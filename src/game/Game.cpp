//
// Created by Azure Void on 17.02.2020.
//

#include "../../include/Game.h"
#include "../../include/GameScene.h"
#include "../../include/PrimitiveCube.h"

using namespace std;


Game::Game(GLuint width, GLuint height) :
    keys(), width(width), height(height), currentScene(nullptr){}

Game::~Game() = default;

void Game::Init() {
    //TODO: ResourceManager manager{...};
    //TODO: currentScene = manager.LoadScene(pathToScene);

    //GameScene scene {""};
    //scene.AddNewObject(new PrimitiveCube());
    //TODO: ^upper code^ is what it should be like when we are working with "Game_SceneModel" etc.

    //init render
}

void Game::Update(GLfloat dt) {

}

void Game::ProcessInput(GLfloat dt) {

}

void Game::Render() {
    //call render's method "drawscene" and put current scene as argument
}
