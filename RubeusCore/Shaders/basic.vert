#version 330 core

layout (location = 0) in vec4 position;
layout (location = 1) in vec4 color;

uniform mat4 proj_matrix;
uniform mat4 view_matrix = mat4(1.0);
uniform mat4 model_matrix = mat4(1.0);

out vec4 pos;

out DATA
{
	vec4 position;
	vec4 color;
} vs_out;

void main()
{
	pos = position;
	gl_Position = proj_matrix * view_matrix * model_matrix * position;
	vs_out.position = model_matrix * position;
	vs_out.color = color;
}
