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
#include "../../../dependencies/glm/glm.hpp"
#include "../../../dependencies/glm/gtc/matrix_transform.hpp"
#include "../../../dependencies/glm/gtc/type_ptr.hpp"
#include "../../shader/Shader.h"

using namespace std;

struct Vertex {
    glm::vec3 position;
    glm::vec3 normal;
    glm::vec2 texCoord;
};

struct Texture {
    unsigned int id;
    string type;
};

class Mesh {
public:
    vector<Vertex> vertices;
    vector<unsigned int> indices;
    vector<Texture> textures;
    Mesh(vector<Vertex> vertices, vector<unsigned int> indices, vector<Texture> textures);
    void draw (Shader shader);
private:
    unsigned int vao, vbo, ebo;
    void setupMesh();
};

#endif //ENGINE_MESH_H
