/**
 * @file	Source\input_component.cpp.
 *
 * @brief	Implements the input component class
 */

#pragma once

#include <input_component.h>
#include <GL\glew.h>
#include <GLFW\glfw3.h>

namespace Rubeus
{
	namespace GraphicComponents
	{
		/** @brief	The key a */
		char KEY_A = GLFW_KEY_A;
		
		bool RWindowComponent::isKeyPressed(unsigned int keycode)
		{
			//TODO: Log This
			if (keycode >= MAX_KEYS)
				return false;
			return m_Keys[keycode];
		}

		bool RWindowComponent::isMouseButtonPressed(unsigned int button)
		{
			//TODO: Log This
			if (button >= MAX_BUTTONS)
				return false;
			return m_MouseButtons[button];
		}

		void RWindowComponent::getMousePosition(double& x, double& y)
		{
			x = mx;
			y = my;
		}

		/**
		 * @fn	void cursorPositionCallback(GLFWwindow *window, double xpos, double ypos)
		 *
		 * @brief	Callback, called when the cursor position
		 *
		 * @author	Nikita
		 * @date	26-06-2018
		 *
		 * @param [in,out]	window	If non-null, the window.
		 * @param 		  	xpos  	The xpos.
		 * @param 		  	ypos  	The ypos.
		 */

		void cursorPositionCallback(GLFWwindow *window, double xpos, double ypos)

		{

			RWindowComponent* win = (RWindowComponent*)glfwGetWindowUserPointer(window);
			win->mx = xpos;
			win->my = ypos;
		}

		/**
		 * @fn	void mouseButtonCallback(GLFWwindow *window, int button, int action, int mods)
		 *
		 * @brief	Callback, called when the mouse button
		 *
		 * @author	Nikita
		 * @date	26-06-2018
		 *
		 * @param [in,out]	window	If non-null, the window.
		 * @param 		  	button	The button.
		 * @param 		  	action	The action.
		 * @param 		  	mods  	The mods.
		 */

		void mouseButtonCallback(GLFWwindow *window, int button, int action, int mods)
		{

			RWindowComponent* win = (RWindowComponent*)glfwGetWindowUserPointer(window);
			win->m_MouseButtons[button] = action != GLFW_RELEASE;
		}

		/**
		 * @fn	void keyCallback(GLFWwindow *window, int key, int scancode, int action, int mods)
		 *
		 * @brief	Callback, called when the key
		 *
		 * @author	Nikita
		 * @date	26-06-2018
		 *
		 * @param [in,out]	window  	If non-null, the window.
		 * @param 		  	key			The key.
		 * @param 		  	scancode	The scancode.
		 * @param 		  	action  	The action.
		 * @param 		  	mods		The mods.
		 */

		void keyCallback(GLFWwindow *window, int key, int scancode, int action, int mods)
		{

			RWindowComponent* win = (RWindowComponent*)glfwGetWindowUserPointer(window);
			win->m_Keys[key] = action != GLFW_RELEASE;
		}

		void RWindowComponent::doWhileKeyIsPressed(char key, void(*ptr)())
		{
			if (RWindowComponent::isKeyPressed(key))
			{
				ptr();
			}
		}

	}
		
}

