/**
 * @file		Include\window_component.h.
 *
 * @brief	Declares the window class and error callbacks for GLFW
 */

#pragma once

#include <string.h>

#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include <logger_component.h>
#include <loader_component.h>
#include <master_component.h>
#include <input_component.h>
#include <awerere_physics_object.h>

namespace Rubeus
{
	namespace GraphicComponents
	{
		/**
		 * @enum	EWindowParameters
		 *
		 * @brief	Values that represent window parameters.
		 * 			Use while constructing a RWindowComponent object
		 */
		enum class EWindowParameters
		{
			WINDOWED_MODE,
			FULLSCREEN_MODE,
			NON_RESIZABLE_WINDOW,
			RESIZABLE_WINDOW
		};

		/**
		 * @fn		void getGLFWErrorLog(int error, const char *description);
		 *
		 * @brief	Gets GLFW error logs
		 *
		 * @param	error	   	The error.
		 * @param	description	The description.
		 */
		void getGLFWErrorLog(int error, const char *description);

		/**
		* @class	RWindowComponent
		*
		* @brief	A window component that bridges GLFW function calls to handle Rubeus game window.
		*/
		class RWindowComponent : public RMasterComponent
		{
		private:
			/** @brief	GLFW Window object */
			GLFWwindow * m_Window;

			/** @brief	The width of the window */
			int m_Width;

			/** @brief	The height of the window */
			int m_Height;

			/** @brief	The title of the window */
			const char * m_Title;

		public:
			/** @brief	Mouse positions */
			static int m_X, m_Y;

			/**
			 * @fn		bool RWindowComponent::initWindow(const char *title, int width, int height, EWindowParameters windowMode = EWindowParameters::WINDOWED_MODE, EWindowParameters windowType = EWindowParameters::RESIZABLE_WINDOW);
			 *
			 * @brief	Initializes the Rubeus game window.
			 * 			Use enum EWindowParameters for windowMode and windowType
			 *
			 * @param	title	  	The title of the window to be formed.
			 * @param	width	  	The width of the window to be formed.
			 * @param	height	  	The height of the window to be formed.
			 * @param	windowMode	(Optional) The window mode. Default is windowed mode
			 * @param	windowType	(Optional) Type of the window. Default is resizable window
			 *
			 * @return	True if it succeeds, false if it fails.
			 */
			bool initWindow(const char *title, int width, int height, EWindowParameters windowMode = EWindowParameters::WINDOWED_MODE, EWindowParameters windowType = EWindowParameters::RESIZABLE_WINDOW);

		public:

			/**
			 * @fn		RWindowComponent::RWindowComponent(const char *title, int width, int height, EWindowParameters windowMode = EWindowParameters::WINDOWED_MODE, EWindowParameters windowType = EWindowParameters::RESIZABLE_WINDOW, int setFPS);
			 *
			 * @brief	Constructor. Use enum EWindowParameters for windowMode and windowType
			 *
			 * @param	title	  	The title of the window to be formed.
			 * @param	width	  	The width of the window to be formed in pixels.
			 * @param	height	  	The height of the window to be formed in pixels.
			 * @param	windowMode	(Optional) The window mode. Default is windowed mode.
			 * @param	windowType	(Optional) Type of the window. Default is resizable window.
			 * @param	setFPS	  	The FPS. Default is 60fps.
			 * 						Use 0 for unbound FPS, 1 for 60 FPS, 2 for 30 FPS, and likewise
			 */
			RWindowComponent(const char *title, int width, int height, EWindowParameters windowMode = EWindowParameters::WINDOWED_MODE, EWindowParameters windowType = EWindowParameters::RESIZABLE_WINDOW, int setFPS = 1);

			/**
			* @fn		RWindowComponent::~RWindowComponent();
			*
			* @brief		Destructor
			*/
			~RWindowComponent();

			/**
			* @fn		void RWindowComponent::clearWindow();
			*
			* @brief		Clears the window with a color buffer
			*/
			void clearWindow();

			/**
			* @fn		void RWindowComponent::updateWindow();
			*
			* @brief		Updates the window
			* 			Polls GLFW for any changes
			* 			Then swaps the buffers
			*/
			void updateWindow();

			/**
			* @fn	bool RWindowComponent::closed();
			*
			* @brief	Queries if the window is closed
			*
			* @return	m_Closed.
			*/
			bool closed();

			/**
			 * @fn		void RWindowComponent::setWindowTitle(const char * title);
			 *
			 * @brief	Sets window title
			 *
			 * @param 	title	The title.
			 */
			void setWindowTitle(const char * title);

			// TODO: Add docs
			void setWindowIcon(RWindowComponent GameWindow, std::string names[]);

			// TODO: Add docs
			void setWindowIconToDefault();

			/**
			 * @fn		friend void RWindowComponent::windowCloseCallback(GLFWwindow * window);
			 *
			 * @brief	Callback, called when the window closes
			 *
			 * @param [in,out]	window	Pointer to GLFWwindow object being closed.
			 */
			friend void windowCloseCallback(GLFWwindow * window);

			/**
			 * @fn		friend void RWindowComponent::windowResizeCallback(GLFWwindow * window, int width, int height);
			 *
			 * @brief	Callback, called when the window resize
			 *
			 * @param [in,out]	window	Pointer to GLFWwindow object being resized.
			 * @param 		  	width 	The width of the resized window.
			 * @param 		  	height	The height of the resized window.
			 */
			friend void windowResizeCallback(GLFWwindow * window, int width, int height);
		public:

			// TODO: Add docs
			// Temporary input handling until Input Components are finalised
			static void cursorPositionCallback(GLFWwindow *window, double xpos, double ypos);
			friend void mouseButtonCallback(GLFWwindow *window, int button, int action, int mods);
			friend void scrollCallback(GLFWwindow *window, double xoffset, double yoffset);
			friend void keyCallback(GLFWwindow *window, int key, int scancode, int action, int mods);

			/**
			 * @fn		inline const int & getWidth() const
			 *
			 * @brief	Gets the width of this window
			 *
			 * @return	Width of this window.
			 */
			inline const int & getWidth() const { return m_Width; }

			/**
			 * @fn		inline const int & getHeight() const
			 *
			 * @brief	Gets the height of this window
			 *
			 * @return	Height of this window.
			 */
			inline const int & getHeight() const { return m_Height; }

			/**
			 * @fn		void onMessage(Message * msg) override
			 *
			 * @brief	Handles the message received
			 * @warning	Only to be used by the message system
			 *
			 * @param	msg	The message object recieved.
			 */
			void onMessage(Message * msg) override;

		protected:
		};
	}
}
