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
    Shader shader = ResourceManager::LoadShader("../res/shaders/model.vert",
                                "../res/shaders/model.frag", nullptr,"shader");
    Model ourModel = ResourceManager::LoadModel("../res/models/nanosuit/nanosuit.obj");
//    GameScene scene = ResourceManager::LoadScene("scenes/test.lvl");
    // TODO: currentScene = new GameScene();
    GameScene scene("scenes/test.lvl");
    currentScene = scene;
    // TODO: устанавливать матрицу V во все шейдеры
    glm::mat4 projection = glm::perspective(glm::radians(camera.zoom),
                                            (float)width/height,0.1f, 100.0f);
    shader.SetMatrix4("projection", projection, true);

    shared_ptr<GameObject> ourObject (new GameObject(glm::vec3(0.0f, -1.75f, 0.0f),
            glm::vec3(0.2f, 0.2f, 0.2f), &shader, &ourModel));
    currentScene.AddNewObject(ourObject);

    throw exception(); //TODO REMOVE: test exception that handles in main.
    //it may be necessary to write own exception implementation to have damned constructor which will take actual message lol
}

void Game_SceneModel::ProcessInput(GLfloat deltaTime) {
    Game::ProcessInput(deltaTime);
}

void Game_SceneModel::Update(GLfloat deltaTime) {
    Game::Update(deltaTime);
}

void Game_SceneModel::Render() {
//    Shader shader = ResourceManager::GetShader("shader");
//    Model nanosuit = ResourceManager::GetModel("nanosuit");
//
//    vector<GameObject*> objects;
//    glm::mat4 view = camera.GetViewMatrix();
//    GameObject ourObject(glm::vec3(0.0f, -1.75f, 0.0f), glm::vec3(0.2f, 0.2f, 0.2f),
//                        &shader, &nanosuit);
//
//    objects.push_back(&ourObject);
    glm::mat4 view = camera.GetViewMatrix();
    vector<shared_ptr<GameObject>> *objects = currentScene.GetAllObjects();
    //TODO а мы точно правильно передаем objects?
    render.DrawObjects(vector<shared_ptr<GameObject>>(*objects), view, camera.position);
}

