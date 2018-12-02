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
	namespace GraphicComponents
	{
		class RWindowComponent;

		void cursorPositionCallback(GLFWwindow *window, double xpos, double ypos);
		void mouseButtonCallback(GLFWwindow *window, int button, int action, int mods);
		void scrollCallback(GLFWwindow *window, double xoffset, double yoffset);

	}

	void keyCallback(GLFWwindow *window, int key, int scancode, int action, int mods);

	class RInputManager : public RMasterComponent
	{
	private:
		bool m_IsEnabled;
		const GraphicComponents::RWindowComponent & m_Window;
		std::unordered_map<std::string, std::vector<EKeys>> m_KeybindingsToKeys;
		std::unordered_map<EKeys, std::string> m_KeysToKeybindings;

		void addKeyBinding(const std::string & keyBinding);
		void clearFlags();
		void addKeysToKeyMap();

	public:
		static std::unordered_map<int, bool> KeyMap;

		RInputManager(const GraphicComponents::RWindowComponent & window);
		~RInputManager();

		void update();

		void addKeyToKeyBinding(const std::string & keyBinding, const EKeys & keyName);
		void addKeysToKeyBinding(const std::string & keyBinding, const std::vector<EKeys> & keyNames);

		void activate(const std::string & keyBinding);
		void deactivate(const std::string & keyBinding);

		bool isKeyBindingPressed(const std::string & keyBinding);
		bool isKeyPressed(const EKeys & keyName);


		inline void enable() { m_IsEnabled = true; }
		inline void disable() { m_IsEnabled = false; }

		void onMessage(Message * msg) override;

	protected:
	};
}


