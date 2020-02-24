//
// Created by Azure Void on 21.02.2020.
//

#include "../../../include/Breakout/BreakoutObject.h"

BreakoutObject::BreakoutObject() :
        Position(0, 0),
        Size(1, 1),
        Velocity(0.0f),
        Color(1.0f),
        Rotation(0.0f),
        Sprite(),
        IsSolid(false),
        Destroyed(false) {
}

BreakoutObject::BreakoutObject(glm::vec2 pos, glm::vec2 size, Texture2D sprite, glm::vec3 color, glm::vec2 velocity) :
        Position(pos),
        Size(size),
        Velocity(velocity),
        Color(color),
        Rotation(0.0f),
        Sprite(sprite),
        IsSolid(false),
        Destroyed(false) {
}

void BreakoutObject::Draw(SpriteRenderer &renderer)
{
    renderer.DrawSprite(this->Sprite, this->Position, this->Size, this->Rotation, this->Color);
}