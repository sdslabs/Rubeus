#pragma once

#include <string.h>
#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include <logger_component.h>
#include <loader.h>
#include <master_component.h>
#include <window.h>


namespace Rubeus
{
	namespace GraphicComponents
	{


		void cursorPositionCallback(GLFWwindow *window, double xpos, double ypos);
		void mouseButtonCallback(GLFWwindow *window, int button, int action, int mods);
		void scrollCallback(GLFWwindow *window, double xoffset, double yoffset);

		void keyCallback(GLFWwindow *window, int key, int scancode, int action, int mods);
		
	}


}


