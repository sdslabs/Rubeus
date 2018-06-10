// RubeusCore.cpp : Defines the entry point for the application.
//

#include "RubeusCore.h"

using namespace std;

int main()
{
	using namespace Rubeus;
	using namespace GraphicComponents;
	using namespace RML;
	RWindowComponent GameWindow("Hello World", 1280, 720, EWindowParameters::WINDOWED_MODE, EWindowParameters::NON_RESIZABLE_WINDOW);
	glClearColor(0.5f, 0.2f, 0.1f, 1.0f);

	GLuint vbo;

	GLfloat vertices[] =
	{
		4, 3, 0,
		12, 3, 0,
		4, 6, 0,
		4, 6, 0,
		12, 6, 0,
		4, 3, 0
	};

	glGenBuffers(1, &vbo);
	glBindBuffer(GL_ARRAY_BUFFER, vbo);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, 0);
	glEnableVertexAttribArray(0);

	Matrix4 ortho = Matrix4::orthographic(0.0f, 16.0f, 0.0f, 9.0f, -1.0f, 1.0f);

	RShaderComponent shader("Shaders/basic.vertexshader", "Shaders/basic.fragmentshader");
	shader.enableShader();
	glUniformMatrix4fv(glGetUniformLocation(shader.m_ShaderID, "proj_matrix"), 1, GL_FALSE, ortho.elements);


	while(!GameWindow.closed())
	{
		GameWindow.clearWindow();
		
		glDrawArrays(GL_TRIANGLES, 0, 6);

		GameWindow.updateWindow();
	}

	return 0;
}
