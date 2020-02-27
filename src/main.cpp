//#define GLEW_STATIC
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>

#include "../include/ResourceManager.h"
#include "../include/Breakout/Breakout.h"
#include "../include/Game_MainGame.h"
#include "../include/Game_SceneModel.h"
#include "../include/WindowManager.h"

using namespace std;

// GLFW function declarations
void keyCallback(GLFWwindow* window, int key, int scancode, int action, int mode);
void scrollCallback(GLFWwindow* window, double offsetX, double offsetY);
void mouseCallback(GLFWwindow* window, double posX, double posY);
void processInput(GLFWwindow *window, Camera *camera, float deltaTime);

const GLuint SCREEN_WIDTH = 800;
const GLuint SCREEN_HEIGHT = 600;
float lastX = (float)SCREEN_WIDTH / 2.0f;
float lastY = (float)SCREEN_HEIGHT / 2.0f;
bool firstMouse = true; // первая ли это итерация игрового цикла или нет

Game_SceneModel game(SCREEN_WIDTH, SCREEN_HEIGHT); //TODO: remove
//Game_MainGame game(SCREEN_WIDTH, SCREEN_HEIGHT); //TODO: remove

GLfloat deltaTime {0.0f};
GLfloat lastFrame {0.0f};

//Game mainGame(); //TODO: add

int main(int argc, char *argv[])
{
    //===============================WindowManager class==============================
    WindowManager winManager{};

    if (!winManager.Init(SCREEN_WIDTH, SCREEN_HEIGHT, "DemoScene")) {
        cout << "Failed to init window manager" << endl;
        return -1;
    }
    winManager.SetCallbacks(scrollCallback, mouseCallback, keyCallback);
    //================================================================================


    //================================================================================
    glewInit();
    if (glewInit() != GLEW_OK)
        return -1;
    //================================================================================


    //================================================================================
    // TODO zabilya -> _render
    glViewport(0, 0, SCREEN_WIDTH, SCREEN_HEIGHT);
    //================================================================================


    //================================================================================
    game.Init();
    //================================================================================


    //TODO: move to method main loop V
    while (!glfwWindowShouldClose(winManager.GetWindow()))
    {
        //================================================================================
        //TODO: move to smth like update delta time
        GLfloat currentFrame = glfwGetTime();
        deltaTime = currentFrame - lastFrame;
        lastFrame = currentFrame;
        //================================================================================


        //================================================================================
        //TODO: move it to _render?
        glClearColor(0.15f, 0.15f, 0.15f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        //================================================================================


        //============================GAME LOOP?========================================
        processInput(winManager.GetWindow(), &game.camera, deltaTime); //TODO: checkout wtf
        game.ProcessInput(deltaTime);
        game.Update(deltaTime);
        game.Render();
        //================================================================================


        //================================================================================
        glfwSwapBuffers(winManager.GetWindow());
        glfwPollEvents();
        //================================================================================
    }

    //================================================================================
    ResourceManager::Clear();
    glfwTerminate();
    //================================================================================

    return 0;
}

void keyCallback(GLFWwindow* window, int key, int scancode, int action, int mode)
{
    // When a user presses the escape key, we set the WindowShouldClose property to true, closing the application
    if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
        glfwSetWindowShouldClose(window, GL_TRUE);
    if (key >= 0 && key < 1024)
    {
        if (action == GLFW_PRESS)
            game.keys[key] = GL_TRUE;
        else if (action == GLFW_RELEASE)
            game.keys[key] = GL_FALSE;
    }
}

void mouseCallback(GLFWwindow* window, double posX, double posY) {
    if (firstMouse)
    {
        lastX = posX;
        lastY = posY;
        firstMouse = false;
    }

    float offsetX = posX - lastX;
    float offsetY = lastY - posY; // reversed since y-coordinates go from bottom to top

    lastX = posX;
    lastY = posY;

    game.camera.ProcessMouseMovement(offsetX, offsetY);
}

void scrollCallback(GLFWwindow* window, double offsetX, double offsetY)
{
    game.camera.ProcessMouseScroll(offsetY);
}

void processInput(GLFWwindow *window, Camera *camera, float deltaTime) {
    if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
        glfwSetWindowShouldClose(window, true);
    if (glfwGetKey(window, GLFW_KEY_W) == GLFW_PRESS)
        camera->ProcessKeyboard(FORWARD, deltaTime);
    if (glfwGetKey(window, GLFW_KEY_S) == GLFW_PRESS)
        camera->ProcessKeyboard(BACKWARD, deltaTime);
    if (glfwGetKey(window, GLFW_KEY_A) == GLFW_PRESS)
        camera->ProcessKeyboard(LEFT, deltaTime);
    if (glfwGetKey(window, GLFW_KEY_D) == GLFW_PRESS)
        camera->ProcessKeyboard(RIGHT, deltaTime);
    if (glfwGetKey(window, GLFW_KEY_SPACE) == GLFW_PRESS)
        camera->ProcessKeyboard(UP, deltaTime);
    if (glfwGetKey(window, GLFW_KEY_C) == GLFW_PRESS)
        camera->ProcessKeyboard(DOWN, deltaTime);
}

