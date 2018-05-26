/**
 * @file	Source\c_Window\window.cpp.
 *
 * @brief	Implements the R  WindowComponent class
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

void RWindowComponent::setWindowTitle(RWindowComponent GameWindow, const char * title)
{
	glfwSetWindowTitle(GameWindow.m_Window, title);
}

/**
 * @fn	void RWindowComponent::setWindowIcon(RWindowComponent GameWindow, std::string names[])
 *
 * @brief	Sets the window icon
 *
 * @author	Twarit
 * @date	26-05-2018
 *
 * @param	GameWindow	The game window.
 * @param	names	  	The array consisting fullnames of all icons.
 */
void RWindowComponent::setWindowIcon(RWindowComponent GameWindow, std::string names[])
{
	//GLFWimage * images = new GLFWimage[names->length];

	//for(int i = 0; i < names->length; i++)
	//{
	//	images[i] = LoaderComponent::LoadImageWindows(names[i]);
	//}

	// TODO: Remove this when LoaderComponent::LoadImageWindows() is completed
	LOGEXTENDED("ABORT! Incomplete code used");

	//delete[] images;
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
