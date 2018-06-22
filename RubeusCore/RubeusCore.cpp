// RubeusCore.cpp : Defines the entry point for the application.
//

#include "RubeusCore.h"

using namespace std;

/**
 * @fn	int main()
 *
 * @brief	Main entry-point for this application
 *
 * @author	Nikita
 * @date	22-06-2018
 *
 * @return	Exit-code for the process - 0 for success, else an error code.
 */

int main()
{
	using namespace Rubeus;
	using namespace GraphicComponents;
	//using namespace RML;
	RWindowComponent GameWindow("Hello World",
								1280, 720,
								EWindowParameters::WINDOWED_MODE,
								EWindowParameters::NON_RESIZABLE_WINDOW);

	GLfloat vertices[] =
	{
		-0.5f, -0.5f,
		-0.5f, +0.5f,
		+0.5f, +0.5f,
		+0.5f, -0.5f
	};

	unsigned int indices[] =
	{
		0, 1, 2,
		2, 3, 0
	};

	unsigned int vbo;
	glGenBuffers(1, &vbo);
	glBindBuffer(GL_ARRAY_BUFFER, vbo);
	glBufferData(GL_ARRAY_BUFFER, 8 * sizeof(GLfloat), vertices, GL_STATIC_DRAW);

	unsigned int ibo;
	glGenBuffers(1, &ibo);
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ibo);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, 6 * sizeof(unsigned int), indices, GL_STATIC_DRAW);

	glEnableVertexAttribArray(0);
	glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 0, 0);

	//RShaderComponent shader("Shaders/basic.vertexshader", "Shaders/basic.fragmentshader");
	//shader.enableShader();

	LOG(toHex(9));

	/*
	while(!GameWindow.closed())
	{
		GameWindow.clearWindow();

		GLCall(glDrawElements(GL_TRIANGLES, 6, GL_INT, 0));

		GameWindow.updateWindow();
	}
	*/

	while (!GameWindow.closed())
	{

		GameWindow.clearWindow();

		if (GameWindow.isKeyPressed(GLFW_KEY_A))
		{
			std::cout << "PRESSED" << std::endl;
		}

		GameWindow.updateWindow();

	}
	return 0;
}
