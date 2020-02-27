//
// Created by Azure Void on 17.02.2020.
//

#ifndef LOFI_PINGPONG_RESOURCEMANAGER_H
#define LOFI_PINGPONG_RESOURCEMANAGER_H

#include <map>
#include <string>

#include <GL/glew.h>

#include <assimp/Importer.hpp>
#include <assimp/scene.h>
#include <assimp/postprocess.h>
#include "../dependencies/stb_image/stb_image.h"

#include "Shader.h"
#include "Texture.h"
#include "Model.h"
#include "GameScene.h"

// A static singleton ResourceManager class that hosts several
// functions to load Textures and Shaders. Each loaded texture
// and/or shader is also stored for future reference by string
// handles. All functions and resources are static and no
// public constructor is defined.
class ResourceManager
{
public:
    //TODO: Default constructor may be public in purposes of multi-threading optimization availability.
    //ResourceManager() { }

    // Resource storage
    static std::map<std::string, Texture2D> textures;
    static std::map<std::string, Shader> shaders;
    static std::map<std::string, Model> models;
    static GameScene LoadScene(const GLchar *file);
    static Texture2D LoadTexture(const GLchar *file, std::string name);
    static Shader LoadShader(const GLchar *vShaderFile, const GLchar *fShaderFile, const GLchar *gShaderFile, std::string name);
    static Model LoadModel(const GLchar *file, std::string name);
    static Texture2D GetTexture(std::string name);
    static Shader GetShader(std::string name);
    static Model GetModel(std::string name);
    // Properly de-allocates all loaded resources
    static void      Clear();
private:
    ResourceManager() { }
    // Loads and generates a shader from file
    static Shader    loadShaderFromFile(const GLchar *vShaderFile, const GLchar *fShaderFile, const GLchar *gShaderFile = nullptr);
    // Loads a single texture from file
    static Texture2D loadTextureFromFile(const GLchar *file);
    // Loads model from file
    static Model loadModelFromFile(const GLchar *file);
};

#endif //LOFI_PINGPONG_RESOURCEMANAGER_H
