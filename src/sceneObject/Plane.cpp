//
// Created by 17776048 on 2019-11-11.
//

#include "Plane.h"

Plane::Plane(glm::vec3 position, string texturePath) {
    this->position = position;
    float vert[nrArrayElements] = {
            -0.5f, -0.5f, -0.5f,  0.0f, -1.0f,  0.0f, 0.0f, 1.0f,
            0.5f, -0.5f, -0.5f,  0.0f, -1.0f,  0.0f, 1.0f, 1.0f,
            0.5f, -0.5f,  0.5f,  0.0f, -1.0f,  0.0f, 1.0f, 0.0f,
            0.5f, -0.5f,  0.5f,  0.0f, -1.0f,  0.0f, 1.0f, 0.0f,
            -0.5f, -0.5f,  0.5f,  0.0f, -1.0f,  0.0f, 0.0f, 0.0f,
            -0.5f, -0.5f, -0.5f,  0.0f, -1.0f,  0.0f, 0.0f, 1.0f
    };
    vertices = (float *)malloc(sizeof(float) * nrArrayElements);
    for (int i = 0; i < nrArrayElements; i++) {
        vertices[i] = vert[i];
    }
    this->textureId = loadTexture(texturePath.c_str());
    this->model = glm::mat4(1.0f);
    this->model = glm::translate(model, position);
}

void Plane::bindData() {
    glGenVertexArrays(1, &planeVao);
    glGenBuffers(1, &planeVbo);
    glBindVertexArray(planeVao);
    glBindBuffer(GL_ARRAY_BUFFER, planeVbo);
    glBufferData(GL_ARRAY_BUFFER, sizeof(float) * nrArrayElements, vertices, GL_STATIC_DRAW);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(float), (void *)0);
    glEnableVertexAttribArray(0);
    glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(float), (void *)(3 * sizeof(float)));
    glEnableVertexAttribArray(1);
    glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(float), (void *)(6 * sizeof(float)));
    glEnableVertexAttribArray(2);
    glBindVertexArray(0);
}

void Plane::bindTexture(Shader shader, string textureName, int nrTexture) {
    shader.use();
    shader.setInt(textureName, nrTexture);
}

void Plane::drawPlane(Shader shader) {
    shader.use();
    glEnable(GL_DEPTH_TEST);
    glBindVertexArray(planeVao);
    glActiveTexture(GL_TEXTURE1);
    glBindTexture(GL_TEXTURE_2D, textureId);
    shader.setMat4("model", model);
    glDrawArrays(GL_TRIANGLES, 0, 6);
}
