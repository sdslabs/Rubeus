/**
 * @file	Source\main.cpp.
 *
 * @brief	Implements the main class
 */

#pragma once

#include <RMaths.h>

#include <GL/glew.h>
#include <iostream>
#include "logger_component.h"
#include "GraphicComponents\window.h"

int main()
{
	using namespace Rubeus::GraphicComponents;
	Rubeus::GraphicComponents::RWindowComponent GameWindow("Hello World", 1280, 720);
	glClearColor(0.5f, 0.2f, 0.1f, 1.0f);

	RML::Matrix4 test(1);

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
