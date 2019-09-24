//
// Created by 17776048 on 2019-09-11.
//

#ifndef ENGINE_TEXTURES_UTIL_H
#define ENGINE_TEXTURES_UTIL_H

#include <iostream>
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include "../../dependencies/stb_image/stb_image.h"

using namespace std;

unsigned int loadTexture(char const *path);
unsigned int createTexture(unsigned int rgbType, unsigned int width, unsigned int height,
                          unsigned int minFilter, unsigned int magFilter);

#endif //ENGINE_TEXTURES_UTIL_H
