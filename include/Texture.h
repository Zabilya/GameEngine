//
// Created by Azure Void on 17.02.2020.
//

#ifndef LOFI_PINGPONG_TEXTURE_H
#define LOFI_PINGPONG_TEXTURE_H

#include <GL/glew.h>

// Texture2D is able to store and configure a texture in OpenGL.
// It also hosts engine functions for easy management.
class Texture2D
{
public:
    // Holds the ID of the texture object, used for all texture operations to reference to this particlar texture
    GLuint id;
    // Texture image dimensions
    GLuint width, height; // Width and height of loaded image in pixels
    // Texture Format
    GLuint format;
    // Texture configuration
    GLuint wrap_S; // Wrapping mode on S axis
    GLuint wrap_T; // Wrapping mode on T axis
    GLuint filter_Min; // Filtering mode if texture pixels < screen pixels
    GLuint filter_Mag; // Filtering mode if texture pixels > screen pixels
    // Constructor (sets default texture modes)
    Texture2D();
    // Generates texture from image data
    void Generate(GLuint width, GLuint height, unsigned char* data);
    // Binds the texture as the current active GL_TEXTURE_2D texture object
    void Bind() const;
};

#endif //LOFI_PINGPONG_TEXTURE_H
