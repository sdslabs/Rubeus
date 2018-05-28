/**
 * @file	Source\main.cpp.
 *
 * @brief	Implements the main class
 */

#pragma once

#include <GL/glew.h>

#include <iostream>
#include "c_Logger\logger.h"
#include "c_Window\window.h"
#include "lib_Math\vector2d.h"

int main()
{
	Rubeus::GraphicComponents::RWindowComponent GameWindow("My game", 1280, 720);
	glClearColor(0.5f, 0.2f, 0.1f, 1.0f);

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
