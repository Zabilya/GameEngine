#shader vertex
#version 330 core

layout (location = 0) in vec3 position;
// layout (location = 2) in vec2 textCoord;

// out vec2 texCoord;

uniform mat4 model;
uniform mat4 view;
uniform mat4 projection;

void main()
{
	gl_Position = projection * view * model * vec4(position, 1.0f);
// 	texCoord = vec2(textCoord.x, textCoord.y);
}

#shader fragment
#version 330 core

// in vec2 texCoord;

// uniform sampler2D texture1;
// uniform sampler2D texture2;

uniform vec3 objectColor;
uniform vec3 lightColor;

out vec4 fragColor;

void main()
{
// 	fragColor = mix(texture(texture1, texCoord), texture(texture2, texCoord), 0.2);
fragColor = vec4(lightColor * objectColor, 1.0f);
}