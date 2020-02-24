//
// Created by Ilya on 24.02.2020.
//

#include "../../../include/Breakout/Breakout.h"

// Game-related State data
SpriteRenderer *Renderer;

//Player-related data
const glm::vec2 PLAYER_SIZE(100, 20);
const GLfloat PLAYER_VELOCITY(500.0f);
BreakoutObject *Player;

Breakout::Breakout(GLuint width, GLuint height) :
    Game(width, height), state() {

}

Breakout::~Breakout() {
    delete Renderer;
}

void Breakout::Init() {
// Load shaders
    ResourceManager::LoadShader("../res/shaders/breakout/sprite.vert",
            "../res/shaders/breakout/sprite.frag",nullptr, "sprite");

    // Configure shaders
    glm::mat4 projection = glm::ortho(0.0f, static_cast<GLfloat>(this->width),
            static_cast<GLfloat>(this->height), 0.0f,
                                      -1.0f, 1.0f);
    ResourceManager::GetShader("sprite").SetInteger("image", 0, true);
    ResourceManager::GetShader("sprite").SetMatrix4("projection", projection);

    // Set render-specific controls
    Shader shad{ResourceManager::GetShader("sprite")};
    Renderer = new SpriteRenderer(shad);

    // Load textures
    ResourceManager::LoadTexture("../res/textures/background.jpg", "background");
    ResourceManager::LoadTexture("../res/textures/awesomeface.png", "face");
    ResourceManager::LoadTexture("../res/textures/paddle.png", "paddle");
    ResourceManager::LoadTexture("../res/textures/block.png", "block");
    ResourceManager::LoadTexture("../res/textures/block_solid.png", "block_solid");

    BreakoutLevel one;
    one.Load("../res/breakout_levels/one", this->width, this->height * 0.5);
    BreakoutLevel two;
    two.Load("../res/breakout_levels/two", this->width, this->height * 0.5);

    this->levels.push_back(one);
    this->levels.push_back(two);
    this->level = 0;

    glm::vec2 playerPos = glm::vec2(this->width / 2 - PLAYER_SIZE.x / 2,
            this->height - PLAYER_SIZE.y);
    Player = new BreakoutObject(playerPos, PLAYER_SIZE,
            ResourceManager::GetTexture("paddle"));
}

void Breakout::Update(GLfloat dt) {

}

void Breakout::ProcessInput(GLfloat dt) {
    GLfloat velocity = PLAYER_VELOCITY * dt;
    // Move playerboard
    if (this->keys[GLFW_KEY_LEFT]) {
        if (Player->Position.x >= 0)
            Player->Position.x -= velocity;
    }
    if (this->keys[GLFW_KEY_RIGHT]) {
        if (Player->Position.x <= this->width - Player->Size.x)
            Player->Position.x += velocity;
    }
}

void Breakout::Render() {
    Texture2D texture{ResourceManager::GetTexture("background")};

    Renderer->DrawSprite(texture, glm::vec2(0, 0),
            glm::vec2(this->width, this->height), 0.0f);
    this->levels[this->level].Draw(*Renderer);
    Player->Draw(*Renderer);
}

