//
// Created by Azure Void on 17.02.2020.
//

#include "../../include/ResourceManager.h"

#include <iostream>
#include <sstream>
#include <fstream>

// Instantiate static variables
std::map<std::string, Texture2D>    ResourceManager::textures;
std::map<std::string, Shader>       ResourceManager::shaders;


Shader ResourceManager::LoadShader(const GLchar *vShaderFile, const GLchar *fShaderFile, const GLchar *gShaderFile, std::string name)
{
    shaders[name] = loadShaderFromFile(vShaderFile, fShaderFile, gShaderFile);
    return shaders[name];
}

Shader ResourceManager::GetShader(std::string name)
{
    return shaders[name];
}

Texture2D ResourceManager::LoadTexture(const GLchar *file, std::string name)
{
    textures[name] = loadTextureFromFile(file);
    return textures[name];
}

Texture2D ResourceManager::GetTexture(std::string name)
{
    return textures[name];
}

Model ResourceManager::LoadModel(const GLchar *file) {
    return loadModelFromFile(file);
}

void ResourceManager::Clear()
{
    // (Properly) delete all shaders
    for (auto iter : shaders)
        glDeleteProgram(iter.second.id);
    // (Properly) delete all textures
    for (auto iter : textures)
        glDeleteTextures(1, &iter.second.id);
}

Shader ResourceManager::loadShaderFromFile(const GLchar *vShaderFile, const GLchar *fShaderFile, const GLchar *gShaderFile)
{
    // 1. Retrieve the vertex/fragment source code from filePath
    std::string vertexCode;
    std::string fragmentCode;
    std::string geometryCode;
    try
    {
        // Open files
        std::ifstream vertexShaderFile(vShaderFile);
        std::ifstream fragmentShaderFile(fShaderFile);
        std::stringstream vShaderStream, fShaderStream;
        // Read file's buffer contents into streams
        vShaderStream << vertexShaderFile.rdbuf();
        fShaderStream << fragmentShaderFile.rdbuf();
        // close file handlers
        vertexShaderFile.close();
        fragmentShaderFile.close();
        // Convert stream into string
        vertexCode = vShaderStream.str();
        fragmentCode = fShaderStream.str();
        // If geometry shader path is present, also load a geometry shader
        if (gShaderFile != nullptr)
        {
            std::ifstream geometryShaderFile(gShaderFile);
            std::stringstream gShaderStream;
            gShaderStream << geometryShaderFile.rdbuf();
            geometryShaderFile.close();
            geometryCode = gShaderStream.str();
        }
    }
    catch (std::exception e)
    {
        std::cout << "ERROR::SHADER: Failed to read shader files" << std::endl;
    }
    const GLchar *vShaderCode = vertexCode.c_str();
    const GLchar *fShaderCode = fragmentCode.c_str();
    const GLchar *gShaderCode = geometryCode.c_str();
    // 2. Now create shader object from source code
    Shader shader;
    shader.Compile(vShaderCode, fShaderCode, gShaderFile != nullptr ? gShaderCode : nullptr);
    return shader;
}

Texture2D ResourceManager::loadTextureFromFile(const GLchar *file)
{
    // Create Texture object
    Texture2D texture;
    // Load image
    int width, height, nrComponents;
    GLenum format;
    unsigned char* data = stbi_load(file, &width, &height, &nrComponents, 0);
    if (data) {
        if (nrComponents == 1) {
            texture.format = GL_RED;
        } else if (nrComponents == 3) {
            texture.format = GL_RGB;
        } else if (nrComponents == 4) {
            texture.format = GL_RGBA;
            texture.wrap_S = GL_CLAMP_TO_EDGE;
            texture.wrap_T = GL_CLAMP_TO_EDGE;
        } else {
            std::cout << "Failed to load texture" << std::endl;
        }
    }
    // Now generate texture
    texture.Generate(width, height, data);
    // And finally free image data
    stbi_image_free(data);
    return texture;
}

Model ResourceManager::loadModelFromFile(const GLchar *file) {
    // TODO перенести код загрузки модели из класса Model
    return Model(file);
}

GameScene ResourceManager::LoadScene(const GLchar *file) {
    return GameScene(file);
}

//TODO createTexture and loadCubeMap












