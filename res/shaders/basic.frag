#version 330 core

out vec4 color;

in vec2 texCord;
uniform sampler2D cubeTexture;

void main()
{
    color = texture(cubeTexture, texCord);
}