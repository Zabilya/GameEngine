//
// Created by Azure Void on 21.02.2020.
//

#ifndef LOFI_PINGPONG_GAMELEVEL_H
#define LOFI_PINGPONG_GAMELEVEL_H

#include <vector>

#include <GL/glew.h>
#include <glm/glm.hpp>

#include "BreakoutObject.h"
#include "../SpriteRenderer.h"
#include "../ResourceManager.h"

/// BreakoutLevel holds all Tiles as part of a Breakout level and
/// hosts functionality to Load/render breakout_levels from the harddisk.
class BreakoutLevel
{
public:
    // Level state
    std::vector<BreakoutObject> Bricks;
    // Constructor
    BreakoutLevel() { }
    // Loads level from file
    void      Load(const GLchar *file, GLuint levelWidth, GLuint levelHeight);
    // Render level
    void      Draw(SpriteRenderer &renderer);
    // Check if the level is completed (all non-solid tiles are destroyed)
    GLboolean IsCompleted();
private:
    // Initialize level from tile data
    void      init(std::vector<std::vector<GLuint>> tileData, GLuint levelWidth, GLuint levelHeight);
};


#endif //LOFI_PINGPONG_GAMELEVEL_H
