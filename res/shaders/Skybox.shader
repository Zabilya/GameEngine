#shader vertex
#version 330 core

out vec3 texCoord;

layout (location = 0) in vec3 position;

uniform mat4 projection;
uniform mat4 view;

void main()
{
    texCoord = position;
    vec4 pos = projection * view * vec4(position, 1.0);
    gl_Position = pos.xyww;
}

#shader fragment
#version 330 core

out vec4 color;

in vec3 texCoord;

uniform samplerCube skybox;

void main()
{
    color = texture(skybox, texCoord);
}