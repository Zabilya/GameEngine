//
// Created by 17776048 on 2019-09-14.
//

#include "scenes.h"

float calcDeltaTime();
glm::mat4 calcPortalView(glm::mat4 cameraView, glm::mat4 portalModelSrc, glm::mat4 portalModelDst);
void drawFloor(Shader shader);
void drawGrass(Shader shader, vector<glm::vec3> grass);
void drawPortal(Shader shader, glm::mat4 view);
void drawRecursivePortals(Shader shader, glm::mat4 view, unsigned int maxRecursion, unsigned int recursion);

unsigned int planeVao = 0;
unsigned int grassVao = 0;
unsigned int portalVao = 0;
unsigned int portalTexture = 0;
unsigned int grassTexture = 0;
unsigned int floorTexture = 0;
glm::mat4 portalModelSrc;
glm::mat4 portalModelDst;
vector<glm::vec3> grass;

int scenePortal(GLFWwindow *window) {

//    glEnable(GL_CULL_FACE);
//    glDepthFunc(GL_LESS);

    Shader shader("../res/shaders/AdvancedOpenGL.shader");

    float planeVertices[] = {
            // positions          // texture Coords (note we set these higher than 1 (together with GL_REPEAT as texture wrapping mode). this will cause the floor texture to repeat)
            5.0f, -0.5f, 5.0f, 2.0f, 0.0f,
            -5.0f, -0.5f, 5.0f, 0.0f, 0.0f,
            -5.0f, -0.5f, -5.0f, 0.0f, 2.0f,

            5.0f, -0.5f, 5.0f, 2.0f, 0.0f,
            -5.0f, -0.5f, -5.0f, 0.0f, 2.0f,
            5.0f, -0.5f, -5.0f, 2.0f, 2.0f
    };

    float grassVertices[] = {
            // positions         // texture Coords (swapped y coordinates because texture is flipped upside down)
            0.0f,  0.5f,  0.0f,  0.0f,  0.0f,
            0.0f, -0.5f,  0.0f,  0.0f,  1.0f,
            1.0f, -0.5f,  0.0f,  1.0f,  1.0f,

            0.0f,  0.5f,  0.0f,  0.0f,  0.0f,
            1.0f, -0.5f,  0.0f,  1.0f,  1.0f,
            1.0f,  0.5f,  0.0f,  1.0f,  0.0f
    };

    float portalVertices[] = {
            -0.3f,  0.5f,  0.0f,  0.0f,  0.0f,
            -0.3f, -0.5f,  0.0f,  0.0f,  1.0f,
             0.3f, -0.5f,  0.0f,  1.0f,  1.0f,

            -0.3f,  0.5f,  0.0f,  0.0f,  0.0f,
             0.3f, -0.5f,  0.0f,  1.0f,  1.0f,
             0.3f,  0.5f,  0.0f,  1.0f,  0.0f
    };

    vector<glm::vec3> grass;
    grass.push_back(glm::vec3(-1.5f,  0.0f, -0.48f));
    grass.push_back(glm::vec3(-0.3f,  0.0f, -2.3f));
    grass.push_back(glm::vec3( 0.5f,  0.0f, -0.6f));

    glm::vec3 portalPosition1 = glm::vec3(-1.0f,  0.0f,  0.7f);
    glm::vec3 portalPosition2 = glm::vec3(5.3f,  0.0f,  0.51f);

    unsigned int planeVbo;
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

    unsigned int grassVbo;
    glGenVertexArrays(1, &grassVao);
    glGenBuffers(1, &grassVbo);
    glBindVertexArray(grassVao);
    glBindBuffer(GL_ARRAY_BUFFER, grassVbo);
    glBufferData(GL_ARRAY_BUFFER, sizeof(grassVertices), &grassVertices, GL_STATIC_DRAW);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(float), (void*)0);
    glEnableVertexAttribArray(0);
    glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(float), (void*)(3 * sizeof(float)));
    glEnableVertexAttribArray(1);
    glBindVertexArray(0);

    unsigned int portalVbo;
    glGenVertexArrays(1, &portalVao);
    glGenBuffers(1, &portalVbo);
    glBindVertexArray(portalVao);
    glBindBuffer(GL_ARRAY_BUFFER, portalVbo);
    glBufferData(GL_ARRAY_BUFFER, sizeof(portalVertices), &portalVertices, GL_STATIC_DRAW);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(float), (void*)0);
    glEnableVertexAttribArray(0);
    glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(float), (void*)(3 * sizeof(float)));
    glEnableVertexAttribArray(1);
    glBindVertexArray(0);

    floorTexture = loadTexture("../res/textures/metal.png");
    grassTexture = loadTexture("../res/textures/grass.png");
    portalTexture = loadTexture("../res/textures/marble.jpg");

    shader.use();
    shader.setInt("texture1", 0);
    glm::mat4 projection = glm::perspective(glm::radians(camera.zoom),
                                            (float)screenWidth / (float)screenHeight, 0.1f, 100.0f);
    shader.setMat4("projection", projection);


    portalModelSrc = glm::translate(glm::mat4(1.0f), portalPosition1);
    portalModelDst = glm::translate(glm::mat4(1.0f), portalPosition2);

    while (!glfwWindowShouldClose(window)) {

        glm::mat4 cameraView = camera.getViewMatrix();

        /* some usefull but not necessary stuff */
        calcDeltaTime();
        processInput(window, &camera, deltaTime);

        /* clearing buffers and enabling usefull things */
        glClearColor(0.1f, 0.1f, 0.1f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT);

        /* render here */
        shader.use();

        drawRecursivePortals(shader, cameraView, 2, 0);
//        shader.setMat4("view", cameraView);
//
//        drawFloor(shader);
//        drawGrass(shader, grass);
//        drawPortal(portalModelSrc);
//        drawPortal(portalModelDst);

        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }
    glDeleteVertexArrays(1, &planeVao);
    glDeleteBuffers(1, &planeVbo);
    glDeleteVertexArrays(1, &grassVao);
    glDeleteBuffers(1, &grassVbo);

    return 0;
}

float calcDeltaTime() {
    float currentFrame = glfwGetTime();
    deltaTime = currentFrame - lastFrame;
    lastFrame = currentFrame;
}

glm::mat4 calcPortalView(glm::mat4 cameraView, glm::mat4 portalModelSrc, glm::mat4 portalModelDst) {

    glm::mat4 mv = cameraView * portalModelSrc;
    glm::mat4 portalCam = mv * glm::rotate(glm::mat4(1.0), glm::radians(180.0f), glm::vec3(0.0, 1.0, 0.0))
            * glm::inverse(portalModelDst);
    return portalCam;
}

void drawFloor(Shader shader) {
    glBindVertexArray(planeVao);
    glBindTexture(GL_TEXTURE_2D, floorTexture);
    shader.setMat4("model", glm::mat4(1.0f));
    glDrawArrays(GL_TRIANGLES, 0, 6);
    glBindVertexArray(0);
}

void drawGrass(Shader shader, vector<glm::vec3> grass) {
    glm::mat4 model(1.0);
    glBindVertexArray(grassVao);
    glBindTexture(GL_TEXTURE_2D, grassTexture);
    for (GLint i = 0; i < grass.size(); i++) {
        model = glm::mat4(1.0f);
        model = glm::translate(model, grass[i]);
        shader.setMat4("model", model);
        glDrawArrays(GL_TRIANGLES, 0, 6);
    }
}

void drawPortal(Shader shader, glm::mat4 model) {
    glBindVertexArray(portalVao);
    glBindTexture(GL_TEXTURE_2D, portalTexture);
    shader.setMat4("model", model);
    glDrawArrays(GL_TRIANGLES, 0, 6);
}

glm::mat4 clippedProjMat(glm::mat4 view, glm::mat4 proj) {

}

void drawRecursivePortals(Shader shader, glm::mat4 view, unsigned int maxRecursion,
        unsigned int recursion) {

    for (int i = 0; i < 2; i++) {
        // Disable color and depth drawing
        glColorMask(GL_FALSE, GL_FALSE, GL_FALSE, GL_FALSE);
        glDepthMask(GL_FALSE);

        // Disable depth test
        glDisable(GL_DEPTH_TEST);

        // Enable stencil test, to prevent drawing outside
        // region of current portal depth
        glEnable(GL_STENCIL_TEST);

        // Fail stencil test when inside of outer portal
        // (fail where we should be drawing the inner portal)
        glStencilFunc(GL_NOTEQUAL, recursion, 0xFF);

        // Increment stencil value on stencil fail
        // (on area of inner portal)
        glStencilOp(GL_INCR, GL_KEEP, GL_KEEP);

        // Enable (writing into) all stencil bits
        glStencilMask(0xFF);

        shader.setMat4("view", view);
        if (i == 0) {
            drawPortal(shader, portalModelSrc);
        }
        else {
            drawPortal(shader, portalModelDst);
        }
        glm::mat4 destView = calcPortalView(view, portalModelSrc, portalModelDst);

        if (recursion == maxRecursion) {
            // Enable color and depth drawing
            glColorMask(GL_TRUE, GL_TRUE, GL_TRUE, GL_TRUE);
            glDepthMask(GL_TRUE);

            // Clear the depth buffer so we don't interfere with stuff
            // outside of this inner portal
            glClear(GL_DEPTH_BUFFER_BIT);

            // Enable the depth test
            // So the stuff we render here is rendered correctly
            glEnable(GL_DEPTH_TEST);

            // Enable stencil test
            // So we can limit drawing inside of the inner portal
            glEnable(GL_STENCIL_TEST);

            // Disable drawing into stencil buffer
            glStencilMask(0x00);

            // Draw only where stencil value == recursionLevel + 1
            // which is where we just drew the new portal
            glStencilFunc(GL_EQUAL, recursion + 1, 0xFF);

            shader.setMat4("view", destView);
            drawFloor(shader);
            drawGrass(shader, grass);
        }
        else {
            drawRecursivePortals(shader, view, maxRecursion, recursion + 1);
        }
        // Disable color and depth drawing
        glColorMask(GL_FALSE, GL_FALSE, GL_FALSE, GL_FALSE);
        glDepthMask(GL_FALSE);

        // Enable stencil test and stencil drawing
        glEnable(GL_STENCIL_TEST);
        glStencilMask(0xFF);

        // Fail stencil test when inside of our newly rendered
        // inner portal
        glStencilFunc(GL_NOTEQUAL, recursion + 1, 0xFF);

        // Decrement stencil value on stencil fail
        // This resets the incremented values to what they were before,
        // eventually ending up with a stencil buffer full of zero's again
        // after the last (outer) step.
        glStencilOp(GL_DECR, GL_KEEP, GL_KEEP);

        // Draw portal into stencil buffer
        shader.setMat4("view", view);
        if (i == 0) {
            drawPortal(shader, portalModelSrc);
        }
        else {
            drawPortal(shader, portalModelDst);
        }
    }
    // Disable the stencil test and stencil writing
    glDisable(GL_STENCIL_TEST);
    glStencilMask(0x00);

    // Disable color writing
    glColorMask(GL_FALSE, GL_FALSE, GL_FALSE, GL_FALSE);

    // Enable the depth test, and depth writing.
    glEnable(GL_DEPTH_TEST);
    glDepthMask(GL_TRUE);

    // Make sure we always write the data into the buffer
    glDepthFunc(GL_ALWAYS);

    // Clear the depth buffer
    glClear(GL_DEPTH_BUFFER_BIT);

    shader.setMat4("view", view);
    drawPortal(shader, portalModelSrc);
    drawPortal(shader, portalModelDst);

    // Reset the depth function to the default
    glDepthFunc(GL_LESS);

    // Enable stencil test and disable writing to stencil buffer
    glEnable(GL_STENCIL_TEST);
    glStencilMask(0x00);

    // Draw at stencil >= recursionlevel
    // which is at the current level or higher (more to the inside)
    // This basically prevents drawing on the outside of this level.
    glStencilFunc(GL_LEQUAL, recursion, 0xFF);

    // Enable color and depth drawing again
    glColorMask(GL_TRUE, GL_TRUE, GL_TRUE, GL_TRUE);
    glDepthMask(GL_TRUE);

    // And enable the depth test
    glEnable(GL_DEPTH_TEST);

    shader.setMat4("view", view);
    drawFloor(shader);
    drawGrass(shader, grass);
}















