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
		/**
		 * @fn	void getGLFWErrorLog(int error, const char * description)
		 *
		 * @brief	Gets glfw error log
		 *
		 * @author	Nikita
		 * @date	22-06-2018
		 *
		 * @param	error	   	The error.
		 * @param	description	The description.
		 */

		void getGLFWErrorLog(int error, const char * description)
		{
			ERROR(description);
		}

		/**
		 * @fn	void windowCloseCallback(GLFWwindow * window)
		 *
		 * @brief	Callback, called when the window close
		 *
		 * @author	Nikita
		 * @date	22-06-2018
		 *
		 * @param [in,out]	window	If non-null, the window.
		 */

		void windowCloseCallback(GLFWwindow * window)
		{
			LOG("Window close callback was evoked");
		}

		/**
		 * @fn	void windowResizeCallback(GLFWwindow * window, int width, int height)
		 *
		 * @brief	Callback, called when the window resize
		 *
		 * @author	Nikita
		 * @date	22-06-2018
		 *
		 * @param [in,out]	window	If non-null, the window.
		 * @param 		  	width 	The width.
		 * @param 		  	height	The height.
		 */

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

			SUCCESS("Window initialisation successful");

			m_Height = height;
			m_Width = width;
			m_Title = title;

			for (int i = 0; i < MAX_KEYS; i++)
			{
				m_Keys[i] = false;
			}

			for (int i = 0; i < MAX_BUTTONS; i++)
			{
				m_MouseButtons[i] = false;
			}
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

			SUCCESS("GLFW initialisation successful");

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

			SUCCESS("Window creation successful");

			glfwSetErrorCallback(getGLFWErrorLog);
			glfwSetWindowCloseCallback(m_Window, windowCloseCallback);
			glfwSetFramebufferSizeCallback(m_Window, windowResizeCallback);


			glfwSetCursorPosCallback(m_Window, cursorPositionCallback);
			glfwSetMouseButtonCallback(m_Window, mouseButtonCallback);
			//glfwSetInputMode(m_Window, GLFW_STICKY_MOUSE_BUTTONS, 1);

			glfwSetKeyCallback(m_Window, keyCallback);
			//glfwSetInputMode(m_Window, GLFW_STICKY_KEYS, 1);
		

			if(glewInit() != GLEW_OK)
			{
				ERROR("GLEW initialisation failed");

				return false;
			}



			SUCCESS("GLEW initialisation successful");
			ASSERT(glGetString(GL_VERSION));

			return true;
		}

		
	}
}
