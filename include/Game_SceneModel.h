//
// Created by Ilya on 25.02.2020.
//

#ifndef GAME_ENGINE_GAME_SCENEMODEL_H
#define GAME_ENGINE_GAME_SCENEMODEL_H

#include "Game.h"
#include "Camera.h"
#include "ResourceManager.h"

class Game_SceneModel : public virtual Game {
public:
    Camera camera;
    btDefaultCollisionConfiguration *collisionConfiguration;
    btCollisionDispatcher *dispatcher;
    btBroadphaseInterface *overlappingPairCache;
    btSequentialImpulseConstraintSolver *solver;
    btDiscreteDynamicsWorld *dynamicsWorld;

    Game_SceneModel(GLuint width, GLuint height);
    ~Game_SceneModel();
    void Init() override;
    void ProcessInput(GLfloat deltaTime) override;
    void Update(GLfloat deltaTime) override;
    void Render() override;
};

#endif //GAME_ENGINE_GAME_SCENEMODEL_H
