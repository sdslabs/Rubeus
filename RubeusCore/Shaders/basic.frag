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
	
	vec4 colorTex;

	if(fs_in.texID >= 1.0) 
	{                            
		int tid = int(fs_in.texID - 0.5);
		colorTex = fs_in.color;
		//colorTex = texture(textures[tid], fs_in.uv);
	}
	else
	{
		colorTex = fs_in.color;
	}

	color = colorTex * intensity;
}
