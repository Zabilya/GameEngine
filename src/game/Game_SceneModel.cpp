//
// Created by Ilya on 25.02.2020.
//

#include "../../include/Game_SceneModel.h"

Game_SceneModel::Game_SceneModel(GLuint width, GLuint height) :
        Game(width, height), camera(glm::vec3(0.0f, 0.0f, 3.0f)) {
}

Game_SceneModel::~Game_SceneModel() {

}

void Game_SceneModel::Init() {
    glEnable(GL_DEPTH_TEST);
    ResourceManager::LoadShader("../res/shaders/model.vert",
                                "../res/shaders/model.frag", nullptr,"shader");
    Shader shader = ResourceManager::GetShader("shader");

    glm::mat4 projection = glm::perspective(glm::radians(camera.zoom),
                                            (float)width/height,0.1f, 100.0f);
    shader.SetMatrix4("projection", projection, true);
    ResourceManager::LoadModel("../res/models/nanosuit/nanosuit.obj", "nanosuit");
}

void Game_SceneModel::ProcessInput(GLfloat deltaTime) {
    Game::ProcessInput(deltaTime);
}

void Game_SceneModel::Update(GLfloat deltaTime) {

}

void Game_SceneModel::Render() {
    Shader shader = ResourceManager::GetShader("shader");
    shader.Use();

    glm::mat4 view = camera.GetViewMatrix();
    shader.SetMatrix4("view", view);

    glm::mat4 model = glm::mat4(1.0f);
    model = glm::translate(model, glm::vec3(0.0f, -1.75f, 0.0f)); // translate it down so it's at the center of the scene
    model = glm::scale(model, glm::vec3(0.2f, 0.2f, 0.2f));	// it's a bit too big for our scene, so scale it down
    shader.SetMatrix4("model", model);
    ResourceManager::GetModel("nanosuit").Draw(shader);
}

