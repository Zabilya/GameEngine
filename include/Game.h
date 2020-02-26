//
// Created by Azure Void on 17.02.2020.
//

#ifndef GAME_ENGINE_GAME_H
#define GAME_ENGINE_GAME_H

#include <GL/glew.h>
#include <GLFW/glfw3.h>

enum GameState {

};

class Game {
public:
    GLboolean keys[1024];
    GLuint width, height;

    Game(GLuint width, GLuint height);
    ~Game();
    virtual void Init();
    virtual void ProcessInput(GLfloat deltaTime);
    virtual void Update(GLfloat deltaTime);
    virtual void Render();
};


#endif //GAME_ENGINE_GAME_H
