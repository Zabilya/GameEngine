//
// Created by 17776048 on 2019-09-11.
//

#include "scenes.h"

int sceneAdvancedOpenGL(GLFWwindow* window) {

    glDepthFunc(GL_LESS);

    Shader shader("../res/shaders/AdvancedOpenGL.shader");

    float cubeVertices[] = {
            -0.5f, -0.5f, -0.5f,  0.0f, 0.0f, -1.0f, 0.0f, 0.0f,
            0.5f, -0.5f, -0.5f,  0.0f, 0.0f, -1.0f, 1.0f, 0.0f,
            0.5f,  0.5f, -0.5f,  0.0f, 0.0f, -1.0f, 1.0f, 1.0f,
            0.5f,  0.5f, -0.5f,  0.0f, 0.0f, -1.0f, 1.0f, 1.0f,
            -0.5f,  0.5f, -0.5f,  0.0f, 0.0f, -1.0f, 0.0f, 1.0f,
            -0.5f, -0.5f, -0.5f,  0.0f, 0.0f, -1.0f, 0.0f, 0.0f,

            -0.5f, -0.5f,  0.5f,  0.0f, 0.0f, 1.0f, 0.0f, 0.0f,
            0.5f, -0.5f,  0.5f,  0.0f, 0.0f, 1.0f, 1.0f, 0.0f,
            0.5f,  0.5f,  0.5f,  0.0f, 0.0f, 1.0f, 1.0f, 1.0f,
            0.5f,  0.5f,  0.5f,  0.0f, 0.0f, 1.0f, 1.0f, 1.0f,
            -0.5f,  0.5f,  0.5f,  0.0f, 0.0f, 1.0f, 0.0f, 1.0f,
            -0.5f, -0.5f,  0.5f,  0.0f, 0.0f, 1.0f, 0.0f, 0.0f,

            -0.5f,  0.5f,  0.5f,  -1.0f, 0.0f, 0.0f, 1.0f, 0.0f,
            -0.5f,  0.5f, -0.5f,  -1.0f, 0.0f, 0.0f, 1.0f, 1.0f,
            -0.5f, -0.5f, -0.5f,  -1.0f, 0.0f, 0.0f, 0.0f, 1.0f,
            -0.5f, -0.5f, -0.5f,  -1.0f, 0.0f, 0.0f, 0.0f, 1.0f,
            -0.5f, -0.5f,  0.5f,  -1.0f, 0.0f, 0.0f, 0.0f, 0.0f,
            -0.5f,  0.5f,  0.5f,  -1.0f, 0.0f, 0.0f, 1.0f, 0.0f,

            0.5f,  0.5f,  0.5f,  1.0f, 0.0f, 0.0f, 1.0f, 0.0f,
            0.5f,  0.5f, -0.5f,  1.0f, 0.0f, 0.0f, 1.0f, 1.0f,
            0.5f, -0.5f, -0.5f,  1.0f, 0.0f, 0.0f, 0.0f, 1.0f,
            0.5f, -0.5f, -0.5f,  1.0f, 0.0f, 0.0f, 0.0f, 1.0f,
            0.5f, -0.5f,  0.5f,  1.0f, 0.0f, 0.0f, 0.0f, 0.0f,
            0.5f,  0.5f,  0.5f,  1.0f, 0.0f, 0.0f, 1.0f, 0.0f,

            -0.5f, -0.5f, -0.5f,  0.0f, -1.0f, 0.0f, 0.0f, 1.0f,
            0.5f, -0.5f, -0.5f,  0.0f, -1.0f, 0.0f, 1.0f, 1.0f,
            0.5f, -0.5f,  0.5f,  0.0f, -1.0f, 0.0f, 1.0f, 0.0f,
            0.5f, -0.5f,  0.5f,  0.0f, -1.0f, 0.0f, 1.0f, 0.0f,
            -0.5f, -0.5f,  0.5f,  0.0f, -1.0f, 0.0f, 0.0f, 0.0f,
            -0.5f, -0.5f, -0.5f,  0.0f, -1.0f, 0.0f, 0.0f, 1.0f,

            -0.5f,  0.5f, -0.5f,  0.0f, 1.0f, 0.0f, 0.0f, 1.0f,
            0.5f,  0.5f, -0.5f,  0.0f, 1.0f, 0.0f, 1.0f, 1.0f,
            0.5f,  0.5f,  0.5f,  0.0f, 1.0f, 0.0f, 1.0f, 0.0f,
            0.5f,  0.5f,  0.5f,  0.0f, 1.0f, 0.0f, 1.0f, 0.0f,
            -0.5f,  0.5f,  0.5f,  0.0f, 1.0f, 0.0f, 0.0f, 0.0f,
            -0.5f,  0.5f, -0.5f,  0.0f, 1.0f, 0.0f, 0.0f, 1.0f
    };

    glm::vec3 cubePositions[] = {
            glm::vec3( 0.0f,  0.0f,  0.0f),
            glm::vec3( 2.0f,  5.0f, -15.0f),
            glm::vec3(-1.5f, -2.2f, -2.5f),
            glm::vec3(-3.8f, -2.0f, -12.3f),
            glm::vec3( 2.4f, -0.4f, -3.5f),
            glm::vec3(-1.7f,  3.0f, -7.5f),
            glm::vec3( 1.3f, -2.0f, -2.5f),
            glm::vec3( 1.5f,  2.0f, -2.5f),
            glm::vec3( 1.5f,  0.2f, -1.5f),
            glm::vec3(-1.3f,  1.0f, -1.5f)
    };

    glm::vec3 pointLightPositions[] = {
            glm::vec3( 0.7f,  0.2f,  2.0f),
            glm::vec3( 2.3f, -3.3f, -4.0f),
            glm::vec3(-4.0f,  2.0f, -12.0f),
            glm::vec3( 0.0f,  0.0f, -3.0f)
    };

    float planeVertices[] = {
            // positions          // texture Coords (note we set these higher than 1 (together with GL_REPEAT as texture wrapping mode). this will cause the floor texture to repeat)
            5.0f, -0.5f, 5.0f, 2.0f, 0.0f,
            -5.0f, -0.5f, 5.0f, 0.0f, 0.0f,
            -5.0f, -0.5f, -5.0f, 0.0f, 2.0f,

            5.0f, -0.5f, 5.0f, 2.0f, 0.0f,
            -5.0f, -0.5f, -5.0f, 0.0f, 2.0f,
            5.0f, -0.5f, -5.0f, 2.0f, 2.0f
    };

    unsigned int cubeVao, cubeVbo;
//    unsigned int ebo;

    glGenVertexArrays(1, &cubeVao);
    glGenBuffers(1, &cubeVbo);
//    glGenBuffers(1, &ebo);
    glBindVertexArray(cubeVao);
    glBindBuffer(GL_ARRAY_BUFFER, cubeVbo);
//    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ebo);
    glBufferData(GL_ARRAY_BUFFER, sizeof(cubeVertices), &cubeVertices, GL_STATIC_DRAW);
//    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(float),
                          (void*)0);
    glEnableVertexAttribArray(0);
    glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(float),
                          (void*)(6 * sizeof(float)));
    glEnableVertexAttribArray(1);
    glBindVertexArray(0);

    unsigned int planeVao, planeVbo;
    glGenVertexArrays(1, &planeVao);
    glGenBuffers(1, &planeVbo);
    glBindVertexArray(planeVao);
    glBindBuffer(GL_ARRAY_BUFFER, planeVbo);
    glBufferData(GL_ARRAY_BUFFER, sizeof(planeVertices), &planeVertices, GL_STATIC_DRAW);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(float), (void*)0);
    glEnableVertexAttribArray(0);
    glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(float), (void*)(3 * sizeof(float)));
    glEnableVertexAttribArray(1);
    glBindVertexArray(0);

    unsigned int cubeTexture = loadTexture("../res/textures/marble.jpg");
    unsigned int floorTexture = loadTexture("../res/textures/metal.png");

    shader.use();
    shader.setInt("texture1", 0);

    while (!glfwWindowShouldClose(window))
    {

        float currentFrame = glfwGetTime();
        deltaTime = currentFrame - lastFrame;
        lastFrame = currentFrame;

        processInput(window, &camera, deltaTime);

        /* Render here */
        glClearColor(0.1f, 0.1f, 0.1f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

        shader.use();
        glm::mat4 model = glm::mat4(1.0f);
        glm::mat4 view = camera.getViewMatrix();
        glm::mat4 projection = glm::perspective(glm::radians(camera.zoom),
                (float)screenWidth / (float)screenHeight, 0.1f, 100.0f);
        shader.setMat4("view", view);
        shader.setMat4("projection", projection);

        // cubes
        glBindVertexArray(cubeVao);
        glActiveTexture(GL_TEXTURE0);
        glBindTexture(GL_TEXTURE_2D, cubeTexture);
        model = glm::translate(model, glm::vec3(-1.0f, 0.0f, -1.0f));
        shader.setMat4("model", model);
        glDrawArrays(GL_TRIANGLES, 0, 36);
        model = glm::mat4(1.0f);
        model = glm::translate(model, glm::vec3(2.0f, 0.0f, 0.0f));
        shader.setMat4("model", model);
        glDrawArrays(GL_TRIANGLES, 0, 36);
        // floor
        glBindVertexArray(planeVao);
        glBindTexture(GL_TEXTURE_2D, floorTexture);
        shader.setMat4("model", glm::mat4(1.0f));
        glDrawArrays(GL_TRIANGLES, 0, 6);
        glBindVertexArray(0);

        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glDeleteVertexArrays(1, &planeVao);
    glDeleteBuffers(1, &planeVbo);
    glDeleteVertexArrays(1, &cubeVao);
    glDeleteBuffers(1, &cubeVbo);

    glfwTerminate();
    return 0;
}

