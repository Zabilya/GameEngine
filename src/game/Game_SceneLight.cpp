//
//
// Created by Ilya on 02.03.2020.
//

#include "../../include/Game_SceneLight.h"

Game_SceneLight::Game_SceneLight(GLuint width, GLuint height) :
        Game(width, height), camera(glm::vec3(0.0f, 0.0f, 3.0f)){

}

Game_SceneLight::~Game_SceneLight() {

}

void Game_SceneLight::Init() {
    Shader shader = ResourceManager::LoadShader("../res/shaders/light.vert",
                                                "../res/shaders/light.frag", nullptr,"shader");
    Model ourModel = ResourceManager::LoadModel("../res/models/nanosuit/nanosuit.obj");

    /* lightning */
    shader.Use();
    glm::vec3 pointLightPositions[] = {
            glm::vec3( 0.7f,  0.2f,  2.0f),
            glm::vec3( 2.3f, -3.3f, -4.0f),
            glm::vec3(-4.0f,  2.0f, -12.0f),
            glm::vec3( 0.0f,  0.0f, -3.0f)
    };

    // directional light
    shader.SetVector3f("dirLight.direction", -0.2f, -1.0f, -0.3f);
    shader.SetVector3f("dirLight.ambient", 0.05f, 0.05f, 0.05f);
    shader.SetVector3f("dirLight.diffuse", 0.4f, 0.4f, 0.4f);
    shader.SetVector3f("dirLight.specular", 0.5f, 0.5f, 0.5f);

//    // point light
    shader.SetInteger("numPointLight", 2);
    shader.SetVector3f("pointLights[0].position", pointLightPositions[0].x, pointLightPositions[0].y,
                      pointLightPositions[0].z);
    shader.SetVector3f("pointLights[0].ambient", 0.2f, 0.2f, 0.2f);
    shader.SetVector3f("pointLights[0].diffuse", 0.8f, 0.8f, 0.8f);
    shader.SetVector3f("pointLights[0].specular", 1.0f, 1.0f, 1.0f);
    shader.SetFloat("pointLights[0].constant", 1.0f);
    shader.SetFloat("pointLights[0].linear", 0.09);
    shader.SetFloat("pointLights[0].quadratic", 0.032);
    // point light 2
    shader.SetVector3f("pointLights[1].position", pointLightPositions[3].x, pointLightPositions[3].y,
                      pointLightPositions[3].z);
    shader.SetVector3f("pointLights[1].ambient", 0.05f, 0.05f, 0.05f);
    shader.SetVector3f("pointLights[1].diffuse", 0.8f, 0.8f, 0.8f);
    shader.SetVector3f("pointLights[1].specular", 1.0f, 1.0f, 1.0f);
    shader.SetFloat("pointLights[1].constant", 1.0f);
    shader.SetFloat("pointLights[1].linear", 0.09);
    shader.SetFloat("pointLights[1].quadratic", 0.032);
    /* end of lightning */

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
}

void Game_SceneLight::ProcessInput(GLfloat deltaTime) {
    Game::ProcessInput(deltaTime);
}

void Game_SceneLight::Update(GLfloat deltaTime) {
    Game::Update(deltaTime);
}

void Game_SceneLight::Render() {
    glm::mat4 view = camera.GetViewMatrix();
    vector<shared_ptr<GameObject>> *objects = currentScene.GetAllObjects();
    //TODO а мы точно правильно передаем objects?
    render.DrawObjects(vector<shared_ptr<GameObject>>(*objects), view, camera.position);
}

