//
// Created by Azure Void on 17.02.2020.
//

#include "../../include/Game.h"
#include "../../include/GameScene.h"
#include "../../include/PrimitiveCube.h"

using namespace std;


Game::Game(GLuint width, GLuint height) :
    keys(), width(width), height(height){}

Game::~Game() = default;

void Game::Init() {
    //TODO: parse scenes
    //TODO: init first scene
    //TODO: REMOVE V
    //GameScene scene {""};
    //scene.AddNewObject(new PrimitiveCube());
    //TODO: REMOVE ^
    //init render
}

void Game::Update(GLfloat dt) {}

void Game::ProcessInput(GLfloat dt) {}

void Game::Render() {
    //call render's method "drawscene" and put current scene as argument
}
