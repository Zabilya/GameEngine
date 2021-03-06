#version 330 core

out vec2 texCord;

layout (location = 0) in vec3 position;
layout (location = 2) in vec2 texCordinates;

uniform mat4 model;
uniform mat4 view;
uniform mat4 projection;

void main()
{
    gl_Position = projection * view * model * vec4(position, 1.0f);
    texCord = texCordinates;
}