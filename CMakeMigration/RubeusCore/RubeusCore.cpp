// RubeusCore.cpp : Defines the entry point for the application.
//

#pragma once
#include "RubeusCore.h"

int main()
{
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