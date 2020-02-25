//
// Created by Илья Заболотний on 08/09/2019.
//

#ifndef ENGINE_MESH_H
#define ENGINE_MESH_H

#include "GL/glew.h"
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include <vector>
#include <assimp/types.h>
#include <glm/glm.hpp>
#include <glm/gtc/type_ptr.hpp>
#include "Shader.h"

using namespace std;

struct Vertex {
    glm::vec3 position;
    glm::vec3 normal;
    glm::vec2 texCoord;
    glm::vec3 tangent;
    glm::vec3 biTangent;
};

struct ModelTexture {
    unsigned int id;
    string type;
    aiString path;
};

class Mesh {
public:
    vector<Vertex> vertices;
    vector<unsigned int> indices;
    vector<ModelTexture> textures;
    Mesh(vector<Vertex> vertices, vector<unsigned int> indices, vector<ModelTexture> textures);
    void draw (Shader shader);
private:
    unsigned int vao, vbo, ebo;
    void setupMesh();
};

#endif //ENGINE_MESH_H
