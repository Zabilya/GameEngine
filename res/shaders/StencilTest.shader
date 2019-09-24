#shader vertex
#version 330 core

out vec2 texCoord;

layout (location = 0) in vec2 position;
layout (location = 1) in vec2 textCoords;

void main()
{
    texCoord = textCoords;
    gl_Position = vec4(position.x, position.y, 0.0, 1.0);
}

#shader fragment
#version 330 core

out vec4 color;

in vec2 texCoord;

uniform sampler2D screenTexture;

void main()
{
    color = texture(screenTexture, texCoord);
}