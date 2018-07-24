#version 330 core

layout (location = 0) out vec4 color;

uniform vec2 light_position;
uniform sampler2D textures[32];

in vec4 pos;

in DATA
{
	vec4 position;
	vec2 uv;
	float texID;
	vec4 color;
} fs_in;


void main()
{
	float intensity = 1.0;
	float l = pow(length(pos.xy - light_position), 2);

	intensity = 1.0 / l;
	
	vec4 colorTex = vec4(1.0f, 1.0f, 1.0f, 1.0f);

	if(fs_in.texID >= 0.0)
	{
		int tid = int(fs_in.texID);
		colorTex = texture(textures[tid], fs_in.uv);
	}
	else
	{
		colorTex = fs_in.color;
	}

                                                                              // fs_in.texID was 0 here
	color = colorTex * intensity;
	//color = vec4(fs_in.texID, 0.0, 0.0, 1.0);
}
