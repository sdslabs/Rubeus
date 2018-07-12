#version 330 core

layout (location = 0) out vec4 color;

uniform vec2 light_position;

in vec4 pos;

in DATA
{
	vec4 position;
	vec2 uv;
	vec4 color;
} fs_in;

uniform sampler2D tex;

void main()
{
	float intensity = 1.0;
	float l = pow(length(pos.xy - light_position), 2);

	intensity = 1 / l;

	color = fs_in.color * intensity;
	color = texture(tex, fs_in.uv) * intensity;
}
