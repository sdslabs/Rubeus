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

	void RInputManager::addKeysToKeyMap()
	{
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__UNKNOWN, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__SPACE, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__APOSTROPHE, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__COMMA, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__MINUS, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__PERIOD, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__SLASH, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__0, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__1, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__2, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__3, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__4, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__5, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__6, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__7, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__8, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__9, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__SEMICOLON, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__EQUAL, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__A, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__B, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__C, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__D, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__E, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__F, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__G, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__H, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__I, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__J, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__K, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__L, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__M, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__N, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__O, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__P, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__Q, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__R, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__S, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__T, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__U, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__V, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__W, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__X, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__Y, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__Z, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__LEFT_BRACKET, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__BACKSLASH, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__RIGHT_BRACKET, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__GRAVE_ACCENT, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__WORLD_1, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__WORLD_2, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__ESCAPE, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__ENTER, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__TAB, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__BACKSPACE, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__INSERT, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__DELETE, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__RIGHT, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__LEFT, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__DOWN, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__UP, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__PAGE_UP, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__PAGE_DOWN, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__HOME, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__END, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__CAPS_LOCK, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__SCROLL_LOCK, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__NUM_LOCK, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__PRINT_SCREEN, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__PAUSE, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__F1, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__F2, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__F3, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__F4, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__F5, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__F6, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__F7, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__F8, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__F9, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__F10, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__F11, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__F12, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__F13, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__F14, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__F15, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__F16, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__F17, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__F18, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__F19, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__F20, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__F21, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__F22, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__F23, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__F24, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__F25, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__KP_0, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__KP_1, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__KP_2, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__KP_3, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__KP_4, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__KP_5, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__KP_6, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__KP_7, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__KP_8, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__KP_9, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__KP_DECIMAL, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__KP_DIVIDE, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__KP_MULTIPLY, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__KP_SUBTRACT, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__KP_ADD, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__KP_ENTER, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__KP_EQUAL, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__LEFT_SHIFT, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__LEFT_CONTROL, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__LEFT_ALT, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__LEFT_SUPER, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__RIGHT_SHIFT, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__RIGHT_CONTROL, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__RIGHT_ALT, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__RIGHT_SUPER, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeys::__MENU, false));
	}
}

