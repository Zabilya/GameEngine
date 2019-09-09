//
// Created by 17776048 on 2019-09-09.
//

#ifndef ENGINE_MODEL_H
#define ENGINE_MODEL_H

#include <GL/glew.h>

#include <assimp/Importer.hpp>
#include <assimp/scene.h>
#include <assimp/postprocess.h>
#include "../../../dependencies/glm/glm.hpp"
#include "../../../dependencies/glm/gtc/matrix_transform.hpp"
#include "../../../dependencies/glm/gtc/type_ptr.hpp"
#include "../../../dependencies/stb_image/stb_image.h"

#include <vector>
#include <string>
#include <map>
#include <sstream>
#include <iostream>
#include <fstream>

#include "../../shader/Shader.h"
#include "../mesh/Mesh.h"

using namespace std;

unsigned int textureFromFile(const char *path, const string &directory);

class Model {
public:
    vector<Texture> texturesLoaded;
    bool gammaCorrection;

    Model(char *path);
    void Draw(Shader shader);

private:
    vector<Mesh> meshes;
    string directory;

    void loadModel(string path);
    void processNode(aiNode *node, const aiScene *scene);
    Mesh processMesh(aiMesh *mesh, const aiScene *scene);
    vector<Texture> loadMaterialTextures(aiMaterial *mat, aiTextureType type, string typeName);
};


#endif //ENGINE_MODEL_H
