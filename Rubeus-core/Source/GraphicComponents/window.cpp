/**
 * @file	Source\c_Window\window.cpp.
 *
 * @brief	Implements the RWindowComponent class
 */

#pragma once

#include "window.h"

namespace Rubeus
{
	namespace GraphicComponents
	{

		void getGLFWErrorLog(int error, const char * description)
		{
			LOG(description);
		}

		void windowCloseCallback(GLFWwindow * window)
		{
			LOG("Window close callback was evoked");
		}

		void windowResizeCallback(GLFWwindow * window, int width, int height)
		{
			LOG("Window resize callback was evoked");
			glViewport(0, 0, width, height);
		}

		RWindowComponent::RWindowComponent(const char *title, int width, int height, EWindowParameters windowMode, EWindowParameters windowType)
		{
			if(!initWindow(title, width, height, windowMode, windowType))
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

		void RWindowComponent::update()
		{
			glfwPollEvents();
			glfwSwapBuffers(m_Window);
		}

		bool RWindowComponent::initWindow(const char * title, int width, int height, EWindowParameters windowMode, EWindowParameters windowType)
		{
			if(!glfwInit())
			{
				LOGEXTENDED("Error: GLFW Initialisation failed");
			}

			// Set window hints if any
			if (windowType == EWindowParameters::RESIZABLE_WINDOW)
			{
				glfwWindowHint(GLFW_RESIZABLE, GLFW_TRUE);
			}
			else
			{
				if(windowType == EWindowParameters::NON_RESIZABLE_WINDOW)
				{
					glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);
				}
				else
				{
					LOGEXTENDED("Syntax error: Use valid Enum values");
				}
			}

			glfwWindowHint(GLFW_FOCUSED, GLFW_TRUE);

			// Create a window of specified mode, title, width and height
			if(windowMode == EWindowParameters::WINDOWED_MODE)
			{
				m_Window = glfwCreateWindow(width, height, title, NULL, NULL);
			}
			else
			{
				if(windowMode == EWindowParameters::FULLSCREEN_MODE)
				{
					m_Window = glfwCreateWindow(width, height, title, glfwGetPrimaryMonitor(), NULL);
				}
				else
				{
					LOGEXTENDED("Syntax error: Use valid Enum values");
				}
			}

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
			glfwSetFramebufferSizeCallback(m_Window, windowResizeCallback);

			if(glewInit() != GLEW_OK)
			{
				LOGEXTENDED("GLEW initialisation failed");

				return false;
			}

			LOG(glGetString(GL_VERSION));

			return true;
		}
	}
}
