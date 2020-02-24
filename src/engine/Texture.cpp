//
// Created by Azure Void on 17.02.2020.
//

#include "../../include/Texture.h"

Texture2D::Texture2D()
        : width(0), height(0), format(GL_RGB), wrap_S(GL_REPEAT), wrap_T(GL_REPEAT), filter_Min(GL_LINEAR), filter_Mag(GL_LINEAR)
{
    glGenTextures(1, &this->id);
}

void Texture2D::Generate(GLuint width, GLuint height, unsigned char* data)
{
    this->width = width;
    this->height = height;
    // Create Texture
    glBindTexture(GL_TEXTURE_2D, this->id);
    glTexImage2D(GL_TEXTURE_2D, 0, this->format, width, height, 0, this->format, GL_UNSIGNED_BYTE, data);
    // Set Texture wrap and filter modes
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, this->wrap_S);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, this->wrap_T);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, this->filter_Min);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, this->filter_Mag);
    // Unbind texture
    glBindTexture(GL_TEXTURE_2D, 0);
}

void Texture2D::Bind() const
{
    glBindTexture(GL_TEXTURE_2D, this->id);
}