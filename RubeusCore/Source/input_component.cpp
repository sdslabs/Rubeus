#include <input_component.h>
#include <window_component.h>

namespace Rubeus
{
	namespace GraphicComponents
	{
		void RWindowComponent::cursorPositionCallback(GLFWwindow *window, double xpos, double ypos)
		{	
			RWindowComponent::m_X = xpos;
			RWindowComponent::m_Y = ypos;
		}

		void mouseButtonCallback(GLFWwindow *window, int button, int action, int mods)
		{
			if (button == GLFW_MOUSE_BUTTON_RIGHT && action == GLFW_PRESS)
			{
				std::cout << "Right button pressed" << std::endl;
			}
		}

		void scrollCallback(GLFWwindow *window, double xoffset, double yoffset)
		{
			std::cout << xoffset << " : " << yoffset << std::endl;
		}


		void keyCallback(GLFWwindow *window, int key, int scancode, int action, int mods)
		{
			std::cout << key << std::endl;

			// actions are GLFW_PRESS, GLFW_RELEASE or GLFW_REPEAT
			if (key == GLFW_KEY_SPACE && action == GLFW_REPEAT)
			{
				std::cout << "Space Key Pressed" << std::endl;
			}
		}
	}
		
}

