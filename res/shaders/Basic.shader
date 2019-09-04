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
	normal = mat3(transpose(inverse(model))) * aNormal;
	fragPos = vec3(model * vec4(position, 1.0));
// 	texCoord = vec2(textCoord.x, textCoord.y);
}

#shader fragment
#version 330 core

struct Material
{
    vec3 ambient;
    vec3 diffuse;
    vec3 specular;
    float shininess;
};

struct Light
{
    vec3 position;
    vec3 ambient;
    vec3 diffuse;
    vec3 specular;
};

// uniform sampler2D texture1;
// uniform sampler2D texture2;

in vec3 normal;
in vec3 fragPos;

uniform Material material;
uniform Light light;
uniform vec3 viewPos;

out vec4 color;

void main()
{
    // ambient
    vec3 ambient = material.ambient * light.ambient;

    // diffuse
    vec3 norm = normalize(normal);
    vec3 lightDir = normalize(light.position - fragPos);
    float diff = max(dot(norm, lightDir), 0.0);
    vec3 diffuse = light.diffuse * (diff * material.diffuse);

    // specular
    vec3 viewDir = normalize(viewPos - fragPos);
    vec3 reflectDir = reflect(-lightDir, norm);
    float spec = pow(max(dot(viewDir, reflectDir), 0.0), material.shininess);
    vec3 specular = light.specular * (spec * material.specular);

    // result
// 	fragColor = mix(texture(texture1, texCoord), texture(texture2, texCoord), 0.2);
    vec3 result = ambient + diffuse + specular;
    color = vec4(result, 1.0f);
}