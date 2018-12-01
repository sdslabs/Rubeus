#pragma once

#include <string>
#include <unordered_map>
#include <vector>

#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <logger_component.h>
#include <loader_component.h>
#include <master_component.h>
#include <keys.h>

namespace Rubeus
{
	class GraphicComponents::RWindowComponent;

	namespace GraphicComponents
	{
		void cursorPositionCallback(GLFWwindow *window, double xpos, double ypos);
		void mouseButtonCallback(GLFWwindow *window, int button, int action, int mods);
		void scrollCallback(GLFWwindow *window, double xoffset, double yoffset);
		void keyCallback(GLFWwindow *window, int key, int scancode, int action, int mods);

	}

	class RInputManager : public RMasterComponent
	{
	private:
		bool m_IsEnabled;
		GraphicComponents::RWindowComponent & m_Window;
		Keys m_Keys;
		std::unordered_map<std::string, std::vector<int>> m_Keybindings;
		std::unordered_map<unsigned int, bool> m_KeyMap;


		void addKeyBinding(const std::string & keyBinding);

	public:
		RInputManager(GraphicComponents::RWindowComponent & window);
		~RInputManager();

		void addKeyToKeyBinding(const std::string & keyBinding, const int & keyName);
		void addKeysToKeyBinding(const std::string & keyBinding, const std::vector<int> & keyNames);

		void activate(const std::string & keyBinding);
		void deactivate(const std::string & keyBinding);

		bool isKeyBindingActivated(const std::string & keyBinding) const;
		bool isKeyPressed(const int & keyName) const;

		inline void enable() { m_IsEnabled == true; }
		inline void disable() { m_IsEnabled == false; }

		void onMessage(Message * msg) override;

	protected:
	};
}


