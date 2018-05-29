/**
 * @file	Source\main.cpp.
 *
 * @brief	Implements the main class
 */

#pragma once

#include <GL/glew.h>
#include <iostream>
#include "logger_component.h"
#include "GraphicComponents\window.h"
#include "Libraries\MathsLibrary\maths.h"

int main()
{
	using namespace Rubeus::GraphicComponents;
	using namespace Rubeus::MathsLibrary;
	Rubeus::GraphicComponents::RWindowComponent GameWindow("Hello World", 1280, 720);
	glClearColor(0.5f, 0.2f, 0.1f, 1.0f);

	Matrix4 test(1);

	LOG(test);

	// Creates a rectangle, just as a test
	while(!GameWindow.closed())
	{
		GameWindow.clearWindow();
		
		glBegin(GL_QUADS);
		glVertex2f(0.5f, 0.5f);
		glVertex2f(-0.5f, 0.5f);
		glVertex2f(-0.5f, -0.5f);
		glVertex2f(0.5f, -0.5f);
		glEnd();

		GameWindow.update();
	}

	return 0;
}
