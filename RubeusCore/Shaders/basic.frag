#version 330 core

layout (location = 0) out vec4 color;

uniform vec2 light_position;

in vec4 pos;

in DATA
{
	vec4 position;
	vec2 uv;
	float texID;
	vec4 color;
} fs_in;

uniform sampler2D textures[32];

void main()
{
	float intensity = 1.0;
	float l = pow(length(pos.xy - light_position), 2);

	intensity = 1.0 / l;
	
	vec4 colorTex = fs_in.color;

	if(fs_in.texID > 0.0)
	{
		int tid = int(fs_in.texID - 0.5);
		colorTex = texture(textures[tid], fs_in.uv);
	}

	color = colorTex * intensity;
}
