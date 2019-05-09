/**
 * @file		Source/input_manager.cpp.
 *
 * @brief	Defines the Input Manager class along with helper functions
 */

#include <input_manager.h>

#include <window_component.h>

namespace Rubeus
{
	void mouseButtonCallback(GLFWwindow *window, int button, int action, int mods)
	{
		RInputManager::MouseButtonMap[button] = action == GLFW_RELEASE ? 0 : 1;
	}

	void scrollCallback(GLFWwindow *window, double xoffset, double yoffset)
	{
		RInputManager::MouseScroll.x = (float)xoffset;
		RInputManager::MouseScroll.y = (float)yoffset;
	}

	void cursorPositionCallback(GLFWwindow *window, double xpos, double ypos)
	{
		RInputManager::MousePosition.x = (float)xpos;
		RInputManager::MousePosition.y = (float)ypos;
	}

	void keyCallback(GLFWwindow *window, int key, int scancode, int action, int mods)
	{
		RInputManager::KeyMap[key] = action == GLFW_RELEASE ? 0 : 1;
	}

	RInputManager::RInputManager(const GraphicComponents::RWindowComponent * window)
		: m_IsEnabled(true), m_Window(*window)
	{
		addKeysToKeyMap();

		MousePosition.x = 0.0f;
		MousePosition.y = 0.0f;

		MouseScroll.x = 0.0f;
		MouseScroll.y = 0.0f;
	}

	RInputManager::~RInputManager()
	{
	}

	void RInputManager::addKeyBinding(const std::string & keyBinding)
	{
		m_KeybindingsToKeys.insert(std::pair<std::string, std::vector<EKeyboardKeys>>(keyBinding, std::vector<EKeyboardKeys>()));
		m_KeybindingsToKeys[keyBinding].push_back(EKeyboardKeys::__ACTIVATED);
	}

	void RInputManager::addKeyToKeyBinding(const std::string & keyBinding, const EKeyboardKeys & keyName)
	{
		addKeyBinding(keyBinding);
		m_KeybindingsToKeys[keyBinding].push_back(keyName);

		m_KeysToKeybindings.insert(std::pair<EKeyboardKeys, std::string>(keyName, keyBinding));
	}

	void RInputManager::addKeysToKeyBinding(const std::string & keyBinding, const std::vector<EKeyboardKeys> & keyNames)
	{
		addKeyBinding(keyBinding);
		for (auto& keyName : keyNames)
		{
			m_KeybindingsToKeys[keyBinding].push_back(keyName);
			m_KeysToKeybindings.insert(std::pair<EKeyboardKeys, std::string>(keyName, keyBinding));
		}
	}

	void RInputManager::activate(const std::string & keyBinding)
	{
		m_KeybindingsToKeys[keyBinding][0] = EKeyboardKeys::__ACTIVATED;
	}

	void RInputManager::deactivate(const std::string & keyBinding)
	{
		m_KeybindingsToKeys[keyBinding][0] = EKeyboardKeys::__DEACTIVATED;
	}

	bool RInputManager::isKeyBindingPressed(const std::string & keyBinding)
	{
		if ((m_IsEnabled == true) && (m_KeybindingsToKeys[keyBinding][0] == EKeyboardKeys::__ACTIVATED))
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

	bool RInputManager::isKeyPressed(const EKeyboardKeys & keyName)
	{
		if (m_IsEnabled == true)
		{
			return KeyMap[(int)keyName];
		}

		return false;
	}

	bool RInputManager::isMouseButtonPressed(const EMouseButtons & buttonName)
	{
		if (m_IsEnabled == true)
		{
			return MouseButtonMap[(int)buttonName];
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
		MouseButtonMap.insert(std::pair<int, bool>((int)EMouseButtons::__MOUSE_BUTTON_1, false));
		MouseButtonMap.insert(std::pair<int, bool>((int)EMouseButtons::__MOUSE_BUTTON_2, false));
		MouseButtonMap.insert(std::pair<int, bool>((int)EMouseButtons::__MOUSE_BUTTON_3, false));
		MouseButtonMap.insert(std::pair<int, bool>((int)EMouseButtons::__MOUSE_BUTTON_4, false));
		MouseButtonMap.insert(std::pair<int, bool>((int)EMouseButtons::__MOUSE_BUTTON_5, false));
		MouseButtonMap.insert(std::pair<int, bool>((int)EMouseButtons::__MOUSE_BUTTON_6, false));
		MouseButtonMap.insert(std::pair<int, bool>((int)EMouseButtons::__MOUSE_BUTTON_7, false));
		MouseButtonMap.insert(std::pair<int, bool>((int)EMouseButtons::__MOUSE_BUTTON_8, false));

		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__UNKNOWN, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__SPACE, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__APOSTROPHE, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__COMMA, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__MINUS, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__PERIOD, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__SLASH, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__0, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__1, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__2, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__3, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__4, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__5, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__6, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__7, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__8, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__9, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__SEMICOLON, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__EQUAL, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__A, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__B, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__C, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__D, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__E, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__F, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__G, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__H, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__I, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__J, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__K, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__L, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__M, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__N, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__O, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__P, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__Q, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__R, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__S, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__T, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__U, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__V, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__W, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__X, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__Y, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__Z, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__LEFT_BRACKET, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__BACKSLASH, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__RIGHT_BRACKET, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__GRAVE_ACCENT, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__WORLD_1, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__WORLD_2, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__ESCAPE, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__ENTER, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__TAB, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__BACKSPACE, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__INSERT, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__DELETE, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__RIGHT, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__LEFT, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__DOWN, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__UP, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__PAGE_UP, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__PAGE_DOWN, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__HOME, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__END, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__CAPS_LOCK, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__SCROLL_LOCK, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__NUM_LOCK, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__PRINT_SCREEN, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__PAUSE, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__F1, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__F2, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__F3, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__F4, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__F5, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__F6, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__F7, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__F8, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__F9, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__F10, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__F11, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__F12, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__F13, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__F14, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__F15, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__F16, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__F17, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__F18, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__F19, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__F20, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__F21, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__F22, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__F23, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__F24, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__F25, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__KP_0, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__KP_1, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__KP_2, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__KP_3, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__KP_4, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__KP_5, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__KP_6, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__KP_7, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__KP_8, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__KP_9, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__KP_DECIMAL, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__KP_DIVIDE, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__KP_MULTIPLY, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__KP_SUBTRACT, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__KP_ADD, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__KP_ENTER, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__KP_EQUAL, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__LEFT_SHIFT, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__LEFT_CONTROL, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__LEFT_ALT, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__LEFT_SUPER, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__RIGHT_SHIFT, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__RIGHT_CONTROL, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__RIGHT_ALT, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__RIGHT_SUPER, false));
		KeyMap.insert(std::pair<int, bool>((int)EKeyboardKeys::__MENU, false));
	}
}

