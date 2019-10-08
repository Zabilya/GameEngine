//
// Created by 17776048 on 2019-10-07.
//

#include "scenes.h"

int sceneShadow(GLFWwindow *window) {
    Shader shader("../res/shaders/Shadow.shader");

    glm::vec3 cubePosition = glm::vec3 (0.0f, 0.0f, -2.0f);

    Cube cube(cubePosition, "../res/textures/container.jpg");
    cube.bindData();
    cube.bindTexture(shader, "cubeTexture", 0);

    shader.use();
    glm::mat4 projection = glm::perspective(glm::radians(camera.zoom),
            (float)screenWidth / (float)screenHeight, 0.1f, 100.0f);
    shader.setMat4("projection", projection);

    while (!glfwWindowShouldClose(window))
    {
        float currentFrame = glfwGetTime();
        deltaTime = currentFrame - lastFrame;
        lastFrame = currentFrame;

        processInput(window, &camera, deltaTime);

        /* Render here */
        glClearColor(0.1f, 0.1f, 0.1f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        glEnable(GL_DEPTH_TEST);

        glm::mat4 view = camera.getViewMatrix();
        shader.setMat4("view", view);

        shader.use();


        cube.drawCube(shader);

        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}

