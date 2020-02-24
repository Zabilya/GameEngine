//
// Created by Azure Void on 17.02.2020.
//

#ifndef LOFI_PINGPONG_GAME_H
#define LOFI_PINGPONG_GAME_H

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


#endif //LOFI_PINGPONG_GAME_H
