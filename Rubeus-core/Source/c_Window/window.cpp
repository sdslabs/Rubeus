/**
 * @file	Source\c_Window\window.cpp.
 *
 * @brief	Implements the window class
 */

#pragma once

#include "window.h"

/**
 * @fn	void getErrorLog(int error, const char * description)
 *
 * @brief	Gets error log from GLFW fails
 *
 * @author	Twarit
 * @date	26-05-2018
 *
 * @param	error	   	The error code.
 * @param	description	The description.
 */

void getErrorLog(int error, const char * description)
{
	LOG(description);
}

/**
 * @fn	RWindowComponent::RWindowComponent()
 *
 * @brief	Default constructor
 *
 * @author	Twarit
 * @date	26-05-2018
 */

RWindowComponent::RWindowComponent()
{
	initWindow();
}

RWindowComponent::~RWindowComponent()
{
	glfwTerminate();
}

/**
 * @fn	void RWindowComponent::initWindow()
 *
 * @brief	Initializes GLFW library
 *
 * @author	Twarit
 * @date	26-05-2018
 */

bool RWindowComponent::initWindow()
{
	glfwSetErrorCallback(getErrorLog);
	if(!glfwInit())
	{
		LOG("Error: GLFW Initialisation failed");
	}

	// Create a full screen window
	GLFWwindow* window = glfwCreateWindow(640, 480, "My Title", NULL, NULL);
	
	if(!window)
	{
		glfwTerminate();
		LOG("Failed to create window");
		return false;
	}

	// Set the new window as the current context
	glfwMakeContextCurrent(window);
	glewInit();
	return true;
}
