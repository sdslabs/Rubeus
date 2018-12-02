#pragma once

#include <string>
#include <unordered_map>
#include <vector>

#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <logger_component.h>
#include <loader_component.h>
#include <rubeus_maths_library.h>
#include <master_component.h>
#include <keys.h>

namespace Rubeus
{
	namespace GraphicComponents
	{
		class RWindowComponent;
	}

	void mouseButtonCallback(GLFWwindow *window, int button, int action, int mods);
	void scrollCallback(GLFWwindow *window, double xoffset, double yoffset);
	void keyCallback(GLFWwindow *window, int key, int scancode, int action, int mods);
	void cursorPositionCallback(GLFWwindow *window, double xpos, double ypos);

	class RInputManager : public RMasterComponent
	{
	private:
		bool m_IsEnabled;
		const GraphicComponents::RWindowComponent & m_Window;
		std::unordered_map<std::string, std::vector<EKeyboardKeys>> m_KeybindingsToKeys;
		std::unordered_map<EKeyboardKeys, std::string> m_KeysToKeybindings;

		void addKeyBinding(const std::string & keyBinding);
		void addKeysToKeyMap();

	public:
		static std::unordered_map<int, bool> KeyMap;
		static std::unordered_map<int, bool> MouseButtonMap;
		static RML::Vector2D MousePosition;
		static RML::Vector2D MouseScroll;

		RInputManager(const GraphicComponents::RWindowComponent & window);
		~RInputManager();

		void addKeyToKeyBinding(const std::string & keyBinding, const EKeyboardKeys & keyName);
		void addKeysToKeyBinding(const std::string & keyBinding, const std::vector<EKeyboardKeys> & keyNames);

		void activate(const std::string & keyBinding);
		void deactivate(const std::string & keyBinding);

		bool isKeyBindingPressed(const std::string & keyBinding);
		bool isKeyPressed(const EKeyboardKeys & keyName);
		bool isMouseButtonPressed(const EMouseButtons & buttonName);

		inline const RML::Vector2D & getMousePosition() const { return MousePosition; }
		inline const RML::Vector2D & getMouseScroll() const { return MouseScroll; }

		inline void enable() { m_IsEnabled = true; }
		inline void disable() { m_IsEnabled = false; }

		void onMessage(Message * msg) override;

	protected:
	};
}


