#shader vertex
#version 330 core

layout (location = 0) in vec3 position;
layout (location = 1) in vec3 aNormal;
// layout (location = 2) in vec2 textCoord;

// out vec2 texCoord;
out vec3 normal;
out vec3 fragPos;

uniform mat4 model;
uniform mat4 view;
uniform mat4 projection;

void main()
{
	gl_Position = projection * view * model * vec4(position, 1.0);
	normal = aNormal;
	fragPos = vec3(model * vec4(position, 1.0));
// 	texCoord = vec2(textCoord.x, textCoord.y);
}

#shader fragment
#version 330 core

// in vec2 texCoord;

// uniform sampler2D texture1;
// uniform sampler2D texture2;

in vec3 normal;
in vec3 fragPos;

uniform vec3 objectColor;
uniform vec3 lightColor;
uniform vec3 lightPos;

out vec4 color;

void main()
{
    float ambientStrength = 0.1f;
    vec3 ambient = ambientStrength * lightColor;

    vec3 norm = normalize(normal);
    vec3 direction = normalize(lightPos - fragPos);

    float diff = max(dot(norm, direction), 0.0);
    vec3 diffuse = diff * lightColor;

// 	fragColor = mix(texture(texture1, texCoord), texture(texture2, texCoord), 0.2);
    color = vec4((ambient + diffuse) * objectColor, 1.0f);
}