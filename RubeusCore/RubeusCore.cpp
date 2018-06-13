// RubeusCore.cpp : Defines the entry point for the application.
//

#include "RubeusCore.h"

int main()
{
	using namespace Rubeus;
	using namespace GraphicComponents;
	using namespace RML;
	RWindowComponent GameWindow("Hello World",
								1280, 720,
								EWindowParameters::WINDOWED_MODE,
								EWindowParameters::NON_RESIZABLE_WINDOW);

	glEnableVertexAttribArray(0);
	glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 0, 0);

	RShaderComponent shader("Shaders/basic.vertexshader", "Shaders/basic.fragmentshader");
	shader.enableShader();
	shader.setUniformMat4("proj_matrix", Matrix4::orthographic(0.0f, 16.0f, 0.0f, 9.0f, -1.0f, 1.0f));

	//GLfloat vertices[] =
	//{
	//	6, 2, 0,      //0
	//	6.75, 3.5, 0, //1
	//	6, 5, 0,	  //2
	//	7.5, 5, 0,	  //3
	//	8, 6, 0,	  //4
	//	8.5, 5, 0,	  //5
	//	10, 5, 0,	  //6
	//	9.25, 3.5, 0, //7
	//	10, 2, 0,	  //8
	//	8.5, 2, 0,	  //9
	//	8, 1, 0,	  //10
	//	7.5, 2, 0	  //11
	//};

	//GLushort indices[] =
	//{
	//	0, 4, 8,
	//	2, 6, 10
	//};

	//GLfloat colorsA[] =
	//{
	//	1, 0, 0, 1, //0
	//	0, 1, 0, 1,	//1
	//	0, 0, 1, 1,	//2
	//	1, 1, 1, 1,	//3
	//	0, 1, 1, 1,	//4
	//	1, 0, 1, 1,	//5
	//	1, 1, 0, 1,	//6
	//	0, 0, 0, 1,	//7
	//	1, 1, 0, 1,	//8
	//	1, 1, 1, 1,	//9
	//	1, 1, 1, 1,	//10
	//	1, 1, 1, 1,	//11
	//};

	//GLfloat colorsB[] =
	//{
	//	0.2f, 0.8f, 0.2f, 1.0f,
	//	0.2f, 0.8f, 0.2f, 1.0f,
	//	0.2f, 0.8f, 0.2f, 1.0f,
	//	0.2f, 0.8f, 0.2f, 1.0f
	//};
	//RVertexArray sprite1, sprite2;
	//RIndexBuffer ibo(indices, 6);

	//sprite1.addBuffer(new RBuffer(vertices, 12 * 3, 3), 0);
	//sprite1.addBuffer(new RBuffer(colorsA, 12 * 4, 4), 1);

	//sprite2.addBuffer(new RBuffer(vertices, 4 * 3, 3), 0);
	//sprite2.addBuffer(new RBuffer(colorsB, 4 * 4, 4), 1);

	RRenderableObject sprite(RML::Vector3D(5, 5, 0), RML::Vector2D(3, 3), RML::Vector4D(1, 0, 1, 1), shader);
	RSimpleRendererComponent renderer;

	sprite2.addBuffer(new RBuffer(vertices, 4 * 3, 3), 0);
	sprite2.addBuffer(new RBuffer(colorsB, 4 * 4, 4), 1);

	while(!GameWindow.closed())
	{
		GameWindow.clearWindow();

		renderer.submit(&sprite);
		renderer.flush();

		GameWindow.updateWindow();
	}

	return 0;
}
