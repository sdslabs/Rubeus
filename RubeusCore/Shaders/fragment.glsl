#version 330 core

layout (location = 0) out vec4 color;

uniform vec2 light_position;

in vec4 pos;

in DATA
{
	vec4 position;
	vec4 color;
} fs_in;

void main()
{
	float intensity = 1.0 / length(pos.xy - light_position);

	color = fs_in.color * intensity;
}
