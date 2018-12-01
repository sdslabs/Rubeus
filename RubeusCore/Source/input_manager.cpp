#include <input_manager.h>

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

	RInputManager::RInputManager(GraphicComponents::RWindowComponent & window)
		: m_IsEnabled(true), m_Window(window)
	{
	}

	RInputManager::~RInputManager()
	{
	}

	void RInputManager::addKeyBinding(const std::string & keyBinding)
	{
		m_Keybindings.insert(std::pair<std::string, std::vector<int>>(keyBinding, std::vector<int>()));
		m_Keybindings[keyBinding].push_back(0);
	}

	void RInputManager::addKeyToKeyBinding(const std::string & keyBinding, const int & keyName)
	{
		addKeyBinding(keyBinding);
		m_Keybindings[keyBinding].push_back((int)keyName);
	}

	void RInputManager::addKeysToKeyBinding(const std::string & keyBinding, const std::vector<int>& keyNames)
	{
		addKeyBinding(keyBinding);
		for (auto& keyName : keyNames)
		{
			m_Keybindings[keyBinding].push_back((int)keyName);
		}
	}

	void RInputManager::activate(const std::string & keyBinding)
	{
		m_Keybindings[keyBinding][0] = 1;
	}

	void RInputManager::deactivate(const std::string & keyBinding)
	{
		m_Keybindings[keyBinding][0] = 0;
	}

	bool RInputManager::isKeyBindingActivated(const std::string & keyBinding) const
	{
		return (bool)(m_Keybindings[keyBinding][0]);
	}

	bool RInputManager::isKeyPressed(const int & keyName) const
	{
		return glfwGetKey(m_Window.m_Window, keyName) == GLFW_PRESS;
	}

	void RInputManager::onMessage(Message * msg)
	{
		switch (msg->m_Type)
		{
			case system_ok:
				LOG("Input Manager is OK");
				break;
		}
	}

}

