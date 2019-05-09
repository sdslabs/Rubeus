/**
 * @file		Include/input_manager.h.
 *
 * @brief	Declares the Input Manager class
 */

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

	/**
	 * @fn		void mouseButtonCallback(GLFWwindow *window, int button, int action, int mods)
	 *
	 * @brief	Callback function which sets the flag corresponding to a mouse button
	 * @warning	Called only by GLFW when state of a key changes.
	 *
	 * @param	window	GLFW specified window object.
	 * @param	button	GLFW specified mouse button pressed or released.
	 * @param	action	GLFW specified key action.(Release, Press or Repeat)
	 * @param	mods		Modifier key pressed along with.
	 */
	void mouseButtonCallback(GLFWwindow *window, int button, int action, int mods);

	/**
	 * @fn		void scrollCallback(GLFWwindow *window, double xoffset, double yoffset)
	 *
	 * @brief	Callback function which sets mouse scroll value
	 * @warning	Called only by GLFW when state of a key changes.
	 *
	 * @param	window	GLFW specified window object.
	 * @param	xoffset	X value of scroll
	 * @param	yoffset	Y value of scroll
	 */
	void scrollCallback(GLFWwindow *window, double xoffset, double yoffset);

	/**
	 * @fn		void keyCallback(GLFWwindow *window, int key, int scancode, int action, int mods)
	 *
	 * @brief	Callback function which sets the flag corresponding to a key
	 * @warning	Called only by GLFW when state of a key changes.
	 *
	 * @param	window	GLFW specified window object.
	 * @param	key		GLFW specified key which was pressed or released.
	 * @param	action	GLFW specified key action.(Release, Press or Repeat)
	 * @param	mods		Modifier key pressed along with.
	 */
	void keyCallback(GLFWwindow *window, int key, int scancode, int action, int mods);

	/**
	 * @fn		void cursorPositionCallback(GLFWwindow *window, double xpos, double ypos)
	 *
	 * @brief	Callback function which sets mouse position value
	 * @warning	Called only by GLFW when state of a key changes.
	 *
	 * @param	window	GLFW specified window object.
	 * @param	xpos		X value of position
	 * @param	ypos		Y value of position
	 */
	void cursorPositionCallback(GLFWwindow *window, double xpos, double ypos);

	/**
	 * @class	RInputManager
	 *
	 * @brief	The Input manager. Manages key strokes, mouse buttons, and cursor/scroll inputs.
	 */
	class RInputManager : public RMasterComponent
	{
	private:
		/** @brief	The main switch of the component */
		bool m_IsEnabled;

		/** @brief	A ref. to a Rubeus Window object which is currently in use */
		const GraphicComponents::RWindowComponent & m_Window;

		/** @brief	Mapping between Keybinding names to Key names */
		std::unordered_map<std::string, std::vector<EKeyboardKeys>> m_KeybindingsToKeys;

		/** @brief	Mapping between Key names and Keybinding names */
		std::unordered_map<EKeyboardKeys, std::string> m_KeysToKeybindings;

		/**
		 * @fn		void addKeyBinding(const std::string & keyBinding)
		 *
		 * @brief	Add a keybinding to track
		 * @warning	Beware of case-sensitivity and name collisions.
		 *
		 * @param	keyBinding	The name of the keybinding.
		 */
		void addKeyBinding(const std::string & keyBinding);

		/**
		 * @fn		void addKeysToKeyMap()
		 *
		 * @brief	Add an entry to track all available keys
		 * @warning	Internal class helper use only
		 */
		void addKeysToKeyMap();

	public:

		/** @brief	Mapping of all keys and the bool value of whether they are being pressed */
		static std::unordered_map<int, bool> KeyMap;

		/** @brief	Mapping of all mouse buttons and the bool value of whether they are being pressed */
		static std::unordered_map<int, bool> MouseButtonMap;

		/** @brief	Mouse position of the current active cursor */
		static RML::Vector2D MousePosition;

		/** @brief	Scroll value being inputted to input manager */
		static RML::Vector2D MouseScroll;

		/**
		 * @fn		RInputManager(const GraphicComponents::RWindowComponent * window)
		 *
		 * @brief	Constructor
		 *
		 * @param	window	The window object in current use.
		 */
		RInputManager(const GraphicComponents::RWindowComponent * window);

		/**
		 * @fn		~RInputManager()
		 *
		 * @brief	Destructor
		 */
		~RInputManager();

		/**
		 * @fn		void addKeyToKeyBinding(const std::string & keyBinding, const EKeyboardKeys & keyName)
		 *
		 * @brief	Add a key to a keybinding
		 * @warning	Beware of case-sensitivity
		 *
		 * @param	keyBinding	Name of the keybinding.
		 * @param	keyName	Name of the key.
		 */
		void addKeyToKeyBinding(const std::string & keyBinding, const EKeyboardKeys & keyName);

		/**
		 * @fn		void addKeysToKeyBinding(const std::string & keyBinding, const std::vector<EKeyboardKeys> & keyNames)
		 *
		 * @brief	Add an array of keys to a keybinding
		 * @warning	Beware of case-sensitivity
		 *
		 * @param	keyBinding	Name of the keybinding.
		 * @param	keyNames		Array of names of the keys.
		 */
		void addKeysToKeyBinding(const std::string & keyBinding, const std::vector<EKeyboardKeys> & keyNames);

		/**
		 * @fn		void activate(const std::string & keyBinding)
		 *
		 * @brief	Activate a keybinding
		 * @warning	All keybindings are activated by default on startup
		 *
		 * @param	keyBinding	The keybinding to be activated.
		 */
		void activate(const std::string & keyBinding);

		/**
		 * @fn		void deactivate(const std::string & keyBinding)
		 *
		 * @brief	Deactivate a keybinding
		 * @warning	All keybindings are activated by default on startup
		 *
		 * @param	keyBinding	The keybinding to be deactivated.
		 */
		void deactivate(const std::string & keyBinding);

		/**
		 * @fn		bool isKeyBindingPressed(const std::string & keyBinding)
		 *
		 * @brief	Check if a key corresponding to a keybinding is being used
		 *
		 * @param	keyBinding	The keybinding to be checked for use.
		 *
		 * @return	Whether any of the keys linked with the keybinding are being pressed.
		 */
		bool isKeyBindingPressed(const std::string & keyBinding);

		/**
		 * @fn		bool isKeyPressed(const EKeyboardKeys & keyName)
		 *
		 * @brief	Check whether a key is being pressed
		 *
		 * @param	keyName	The key to be checked for presses.
		 *
		 * @return	Whether the key is being pressed.
		 */
		bool isKeyPressed(const EKeyboardKeys & keyName);

		/**
		 * @fn		bool isMouseButtonPressed(const EMouseButtons & buttonName)
		 *
		 * @brief	Check whether a mouse button is being pressed
		 *
		 * @param	buttonName	The button to be checked for presses.
		 *
		 * @return	Whether the mouse button is being pressed.
		 */
		bool isMouseButtonPressed(const EMouseButtons & buttonName);

		/**
		 * @fn		inline const RML::Vector2D & getMousePosition() const
		 *
		 * @brief	Get the current mouse position
		 *
		 * @return	Vector2D of the mouse position.
		 */
		inline const RML::Vector2D & getMousePosition() const { return MousePosition; }

		/**
		 * @fn		inline const RML::Vector2D & getMouseScroll() const
		 *
		 * @brief	Get the current mouse scroll values
		 *
		 * @return	Vector2D of the mouse scroll values.
		 */
		inline const RML::Vector2D & getMouseScroll() const { return MouseScroll; }

		/**
		 * @fn		inline void enable()
		 *
		 * @brief	Enable the Input Manager. All input queries will function normally.
		 * @warning	Enabled by default on startup
		 */
		inline void enable() { m_IsEnabled = true; }

		/**
		 * @fn		inline void disable()
		 *
		 * @brief	Disable the Input Manager. All input queries will return false.
		 * @warning	Input Manager is enabled by default on startup
		 */
		inline void disable() { m_IsEnabled = false; }

		/**
		 * @fn		void onMessage(Message * msg) override
		 *
		 * @brief	Handles messages sent by Message system asynchronously
		 * @warning	Do not call manually
		 *
		 * @param	msg	The message sent across.
		 */
		void onMessage(Message * msg) override;

	protected:
	};
}
