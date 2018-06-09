/**
 * @file	Source\c_Window\window.h.
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
		 * @fn	void getGLFWErrorLog(int error, const char *description);
		 *
		 * @brief	Gets GLFW error logs
		 *
		 * @author	Twarit
		 * @date	27-05-2018
		 *
		 * @param	error	   	The error.
		 * @param	description	The description.
		 */
		void getGLFWErrorLog(int error, const char *description);

		/**
		* @class	RWindowComponent
		*
		* @brief	A window component that bridges GLFW function calls to handle Rubeus game window.
		*
		* @author	Twarit
		* @date	26-05-2018
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

			/**
			 * @fn	bool RWindowComponent::initWindow(const char *title, int width, int height, EWindowParameters windowMode = EWindowParameters::WINDOWED_MODE, EWindowParameters windowType = EWindowParameters::RESIZABLE_WINDOW);
			 *
			 * @brief	Initializes the Rubeus game window.
			 * 			Use enum EWindowParameters for windowMode and windowType
			 *
			 * @author	Twarit
			 * @date	26-05-2018
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
			 * @fn	RWindowComponent::RWindowComponent(const char *title, int width, int height, EWindowParameters windowMode = EWindowParameters::WINDOWED_MODE, EWindowParameters windowType = EWindowParameters::RESIZABLE_WINDOW);
			 *
			 * @brief	Constructor. Use enum EWindowParameters for windowMode and windowType
			 *
			 * @author	Twarit
			 * @date	26-05-2018
			 *
			 * @param	title	  	The title of the window to be formed.
			 * @param	width	  	The width of the window to be formed in pixels.
			 * @param	height	  	The height of the window to be formed in pixels.
			 * @param	windowMode	(Optional) The window mode. Default is windowed mode
			 * @param	windowType	(Optional) Type of the window. Default is resizable window
			 */
			RWindowComponent(const char *title, int width, int height, EWindowParameters windowMode = EWindowParameters::WINDOWED_MODE, EWindowParameters windowType = EWindowParameters::RESIZABLE_WINDOW);

			/**
			* @fn	RWindowComponent::~RWindowComponent();
			*
			* @brief	Destructor
			*
			* @author	Twarit
			* @date	26-05-2018
			*/
			~RWindowComponent();

			/**
			* @fn	void RWindowComponent::clearWindow();
			*
			* @brief	Clears the window with a color buffer
			*
			* @author	Twarit
			* @date	26-05-2018
			*/
			void clearWindow();

			/**
			* @fn	void RWindowComponent::update();
			*
			* @brief	Updates the window
			* 			Polls GLFW for any changes
			* 			Then swaps the buffers
			*
			* @author	Twarit
			* @date	26-05-2018
			*/
			void update();

			/**
			* @fn	bool RWindowComponent::closed();
			*
			* @brief	Queries if the window is closed
			*
			* @author	Twarit
			* @date	26-05-2018
			*
			* @return	m_Closed.
			*/
			bool closed();

			/**
			* @fn	void RWindowComponent::setWindowTitle(GLFWwindow * window, std::string title);
			*
			* @brief	Sets window title
			*
			* @author	Twarit
			* @date	26-05-2018
			*
			* @param [in,out]	window	Pointer to GLFWwindow being altered.
			* @param 		  	title 	The title.
			*/
			void setWindowTitle(RWindowComponent GameWindow, const char * title);

			void setWindowIcon(RWindowComponent GameWindow, std::string names[]);

			void setWindowIconToDefault();

			/**
			 * @fn	friend void RWindowComponent::windowCloseCallback(GLFWwindow * window);
			 *
			 * @brief	Callback, called when the window closes
			 *
			 * @author	Twarit
			 * @date	27-05-2018
			 *
			 * @param [in,out]	window	Pointer to GLFWwindow object being closed.
			 */
			friend void windowCloseCallback(GLFWwindow * window);

			/**
			 * @fn	friend void RWindowComponent::windowResizeCallback(GLFWwindow * window, int width, int height);
			 *
			 * @brief	Callback, called when the window resize
			 *
			 * @author	Twarit
			 * @date	27-05-2018
			 *
			 * @param [in,out]	window	Pointer to GLFWwindow object being resized.
			 * @param 		  	width 	The width of the resized window.
			 * @param 		  	height	The height of the resized window.
			 */
			friend void windowResizeCallback(GLFWwindow * window, int width, int height);

		protected:
		};
	}
}
