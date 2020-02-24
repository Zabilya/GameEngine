//
// Created by Azure Void on 17.02.2020.
//

#include "../../include/Game.h"

Game::Game(GLuint width, GLuint height) :
    keys(), width(width), height(height){}

Game::~Game() = default;

void Game::Init() {}

void Game::Update(GLfloat dt) {}

void Game::ProcessInput(GLfloat dt) {}

void Game::Render() {}
