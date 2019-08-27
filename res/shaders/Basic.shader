#shader vertex
#version 330 core

layout (location = 0) in vec3 position;
layout (location = 1) in vec3 color;
layout (location = 2) in vec2 textCoord;

out vec3 vertexColor;
out vec2 texCoord;

uniform mat4 transform;

void main()
{
	gl_Position = transform * vec4(position, 1.0);
	vertexColor = color;
	texCoord = textCoord;
}

#shader fragment
#version 330 core

in vec3 vertexColor;
in vec2 texCoord;

uniform sampler2D texture1;
uniform sampler2D texture2;

out vec4 fragColor;

void main()
{
	fragColor = mix(texture(texture1, texCoord), texture(texture2, texCoord), 0.2);
}