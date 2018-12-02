#include <input_manager.h>
#include <window_component.h>

namespace Rubeus
{
	std::unordered_map<int, bool> RInputManager::KeyMap;

	// To be deleted when input functionality is complete
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
	}

	void keyCallback(GLFWwindow *window, int key, int scancode, int action, int mods)
	{
		RInputManager::KeyMap[key] = action == GLFW_RELEASE ? 0 : 1;
	}

	void RInputManager::clearFlags()
	{
		for (auto& item : KeyMap)
		{
			item.second = false;
		}
	}

	void RInputManager::addKeysToKeyMap()
	{
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__SPACE, false));
	}

	RInputManager::RInputManager(const GraphicComponents::RWindowComponent & window)
		: m_IsEnabled(true), m_Window(window)
	{
		addKeysToKeyMap();
	}

	RInputManager::~RInputManager()
	{
	}

	void RInputManager::addKeyBinding(const std::string & keyBinding)
	{
		m_KeybindingsToKeys.insert(std::pair<std::string, std::vector<EKeys>>(keyBinding, std::vector<EKeys>()));
		m_KeybindingsToKeys[keyBinding].push_back(EKeys::__DEACTIVATED);
	}

	void RInputManager::update()
	{
		//clearFlags();
	}

	void RInputManager::addKeyToKeyBinding(const std::string & keyBinding, const EKeys & keyName)
	{
		addKeyBinding(keyBinding);
		m_KeybindingsToKeys[keyBinding].push_back(keyName);

		m_KeysToKeybindings.insert(std::pair<EKeys, std::string>(keyName, keyBinding));
	}

	void RInputManager::addKeysToKeyBinding(const std::string & keyBinding, const std::vector<EKeys> & keyNames)
	{
		addKeyBinding(keyBinding);
		for (auto& keyName : keyNames)
		{
			m_KeybindingsToKeys[keyBinding].push_back(keyName);
			m_KeysToKeybindings.insert(std::pair<EKeys, std::string>(keyName, keyBinding));
		}
	}

	void RInputManager::activate(const std::string & keyBinding)
	{
		m_KeybindingsToKeys[keyBinding][0] = EKeys::__ACTIVATED;
	}

	void RInputManager::deactivate(const std::string & keyBinding)
	{
		m_KeybindingsToKeys[keyBinding][0] = EKeys::__DEACTIVATED;
	}

	bool RInputManager::isKeyBindingPressed(const std::string & keyBinding)
	{
		if (m_IsEnabled == true && m_KeybindingsToKeys[keyBinding][0] == EKeys::__ACTIVATED)
		{
			for (auto& key : m_KeybindingsToKeys[keyBinding])
			{
				if (KeyMap[(int)key] == true)
				{
					return true;
				}
			}
		}

		return false;
	}

	bool RInputManager::isKeyPressed(const EKeys & keyName)
	{
		if (m_IsEnabled == true)
		{
			return KeyMap[(int)keyName];
		}

		return false;
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

