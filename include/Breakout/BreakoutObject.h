//
// Created by Azure Void on 21.02.2020.
//

#ifndef LOFI_PINGPONG_GAMEOBJECT_H
#define LOFI_PINGPONG_GAMEOBJECT_H

#include <GL/glew.h>
#include <glm/glm.hpp>

#include "../Texture.h"
#include "../SpriteRenderer.h"

// Container object for holding all state relevant for a single
// game object entity. Each object in the game likely needs the
// minimal of state as described within BreakoutObject.
class BreakoutObject
{
public:
    // Object state
    glm::vec2   Position, Size, Velocity;
    glm::vec3   Color;
    GLfloat     Rotation;
    GLboolean   IsSolid;
    GLboolean   Destroyed;
    // Render state
    Texture2D   Sprite;
    // Constructor(s)
    BreakoutObject();
    BreakoutObject(glm::vec2 pos, glm::vec2 size, Texture2D sprite, glm::vec3 color = glm::vec3(1.0f), glm::vec2 velocity = glm::vec2(0.0f, 0.0f));
    // Draw sprite
    virtual void Draw(SpriteRenderer &renderer);
};

#endif //LOFI_PINGPONG_GAMEOBJECT_H
