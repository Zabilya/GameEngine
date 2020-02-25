//#define GLEW_STATIC
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>

#include "../include/ResourceManager.h"
#include "../include/Breakout/Breakout.h"
#include "../include/SceneTest.h"
#include "../include/SceneModel.h"

using namespace std;

// GLFW function declarations
void keyCallback(GLFWwindow* window, int key, int scancode, int action, int mode);
void scrollCallback(GLFWwindow* window, double offsetX, double offsetY);
void mouseCallback(GLFWwindow* window, double posX, double posY);
void processInput(GLFWwindow *window, Camera *camera, float deltaTime);

// The Width of the screen
const GLuint SCREEN_WIDTH = 800;
// The height of the screen
const GLuint SCREEN_HEIGHT = 600;

float lastX = (float)SCREEN_WIDTH / 2.0f;
float lastY = (float)SCREEN_HEIGHT / 2.0f;
bool firstMouse = true; // первая ли это итерация игрового цикла или нет

SceneModel game(SCREEN_WIDTH, SCREEN_HEIGHT);

int main(int argc, char *argv[])
{
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
//    glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);

    GLFWwindow* window = glfwCreateWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Breakout", nullptr, nullptr);
    if (!window)
    {
        cout << "Failed to create GLFW window" << endl;
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);

    glewInit();
    if (glewInit() != GLEW_OK)
        return -1;

    glfwSetKeyCallback(window, keyCallback);

    // OpenGL configuration
    // TODO вынесте из мейна в game
    glViewport(0, 0, SCREEN_WIDTH, SCREEN_HEIGHT);
//    glEnable(GL_CULL_FACE);
    glEnable(GL_DEPTH_TEST);
//    glEnable(GL_BLEND);
//    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

    // Initialize game
    game.Init();

    /* Take cursor */
    glfwSetCursorPosCallback(window, mouseCallback);
    /* for scrolling */
    glfwSetScrollCallback(window, scrollCallback);
    /* for disabling cursor */
    glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_DISABLED);

    // DeltaTime variables
    GLfloat deltaTime = 0.0f;
    GLfloat lastFrame = 0.0f;

    while (!glfwWindowShouldClose(window))
    {
        // Calculate delta time
        GLfloat currentFrame = glfwGetTime();
        deltaTime = currentFrame - lastFrame;
        lastFrame = currentFrame;

        glClearColor(0.05f, 0.05f, 0.05f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

        //deltaTime = 0.001f;
        // Manage user input

        processInput(window, &game.camera, deltaTime);
        game.ProcessInput(deltaTime);

        // Update Game state
        game.Update(deltaTime);

        // Render
        game.Render();

        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    // Delete all resources as loaded using the resource manager
    ResourceManager::Clear();

    glfwTerminate();
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

