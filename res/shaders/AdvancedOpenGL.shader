#shader vertex
#version 330 core

out vec2 texCoord;

layout (location = 0) in vec3 position;
layout (location = 1) in vec2 textCoords;

uniform mat4 model;
uniform mat4 view;
uniform mat4 projection;

void main()
{
    texCoord = textCoords;
    gl_Position = projection * view * model * vec4(position, 1.0);
}

#shader fragment
#version 330 core

out vec4 color;

in vec2 texCoord;

uniform sampler2D texture1;

void main()
{
    color = texture(texture1, texCoord);
}