/**
 * @file	Source\c_Window\window.cpp.
 *
 * @brief	Implements the window class
 */

#pragma once

#include <string.h>

#include "window.h"

void getGLFWErrorLog(int error, const char * description)
{
	LOG(description);
}

void windowCloseCallback(GLFWwindow * window)
{
	LOG("Window close callback was evoked");
}

RWindowComponent::RWindowComponent(const char *title, int width, int height)
{
	if(!initWindow(title, width, height))
	{
		LOGEXTENDED("WindowComponent Initialisation failed");
		glfwTerminate();
	}

	m_Height = height;
	m_Width = width;
	m_Title = title;
}

bool RWindowComponent::closed()
{
	return glfwWindowShouldClose(m_Window);
}

RWindowComponent::~RWindowComponent()
{
	glfwTerminate();
}

void RWindowComponent::clearWindow()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}

bool RWindowComponent::initWindow(const char * title, int width, int height)
{
	if(!glfwInit())
	{
		LOGEXTENDED("Error: GLFW Initialisation failed");
	}


	// Create a window of specified title, width and height
	m_Window = glfwCreateWindow(width, height, title, NULL, NULL);

	if(!m_Window)
	{
		glfwTerminate();
		LOGEXTENDED("Failed to create window");

		return false;
	}

	// Set the new window as the current context
	glfwMakeContextCurrent(m_Window);
	glfwSetWindowUserPointer(m_Window, this);
	
	glfwSetErrorCallback(getGLFWErrorLog);
	glfwSetWindowCloseCallback(m_Window, windowCloseCallback);
	
	if(glewInit() != GLEW_OK)
	{
		LOGEXTENDED("Glew initialisation failed");

		return false;
	}

	LOG(glGetString(GL_VERSION));

	return true;
}
