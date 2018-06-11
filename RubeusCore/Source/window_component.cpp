/**
 * @file	Source\c_Window\window.cpp.
 *
 * @brief	Implements the RWindowComponent class
 */

#pragma once

#include <window_component.h>
#include <GL\glew.h>
#include <GLFW\glfw3.h>

namespace Rubeus
{
	namespace GraphicComponents
	{

		void getGLFWErrorLog(int error, const char * description)
		{
			ERROR(description);
		}

		void windowCloseCallback(GLFWwindow * window)
		{
			LOG("Window close callback was evoked");
		}

		void windowResizeCallback(GLFWwindow * window, int width, int height)
		{
			LOG("Window resize callback was evoked");
			GLCall(glViewport(0, 0, width, height));
		}

		RWindowComponent::RWindowComponent(const char *title, int width, int height, EWindowParameters windowMode, EWindowParameters windowType)
		{
			if(!initWindow(title, width, height, windowMode, windowType))
			{
				ERROR("WindowComponent Initialisation failed");
				glfwTerminate();
			}

			ASSERT("Window initialisation successful");

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
			ASSERT("Window title set to...");
			ASSERT(title);
		}

		void RWindowComponent::setWindowIcon(RWindowComponent GameWindow, std::string names[])
		{
			//GLFWimage * images = new GLFWimage[names->length];

			//for(int i = 0; i < names->length; i++)
			//{
			//	images[i] = LoaderComponent::LoadImageWindows(names[i]);
			//}

			// TODO: Remove this when LoaderComponent::LoadImageWindows() is completed
			ERROR("ABORT! Incomplete code used");

			//delete[] images;
		}

		RWindowComponent::~RWindowComponent()
		{
			ASSERT("Terminating GLFW Window");
			glfwTerminate();
		}

		void RWindowComponent::clearWindow()
		{
			// No GLCall() used for maintaining performance
			glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		}

		void RWindowComponent::updateWindow()
		{
			glfwPollEvents();
			glfwSwapBuffers(m_Window);
		}

		bool RWindowComponent::initWindow(const char * title, int width, int height, EWindowParameters windowMode, EWindowParameters windowType)
		{
			if(!glfwInit())
			{
				ERROR("Error: GLFW initialisation failed");
			}

			ASSERT("GLFW initialisation successful");

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
					ERROR("Semantics error: Use valid Enum values");
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
					ERROR("Semantics error: Use valid Enum values");
				}
			}

			if(!m_Window)
			{
				glfwTerminate();
				ERROR("Failed to create window");

				return false;
			}


			// Set the new window as the current context
			glfwMakeContextCurrent(m_Window);
			glfwSetWindowUserPointer(m_Window, this);

			ASSERT("Window creation successful");

			glfwSetErrorCallback(getGLFWErrorLog);
			glfwSetWindowCloseCallback(m_Window, windowCloseCallback);
			glfwSetFramebufferSizeCallback(m_Window, windowResizeCallback);

			if(glewInit() != GLEW_OK)
			{
				ERROR("GLEW initialisation failed");

				return false;
			}

			ASSERT("GLEW initialisation successful");
			ASSERT(glGetString(GL_VERSION));

			return true;
		}
	}
}
