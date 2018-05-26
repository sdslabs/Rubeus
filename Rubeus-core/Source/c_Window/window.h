/**
 * @file	Source\c_Window\window.h.
 *
 * @brief	Declares the window class and error callbacks for GLFW
 */

#pragma once

#include <string.h>
#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include "../c_logger/logger.h"
#include "../u_FileIO/loader.h"
#include "../c_Master_Component/master.h"

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
	 * @fn	bool RWindowComponent::initWindow(const char *title, int width, int height);
	 *
	 * @brief	Initializes the Rubeus game window
	 *
	 * @author	Twarit
	 * @date	26-05-2018
	 *
	 * @param	title 	The title of the window to be formed.
	 * @param	width 	The width of the window to be formed.
	 * @param	height	The height of the window to be formed.
	 *
	 * @return	True if it succeeds, false if it fails.
	 */
	bool initWindow(const char *title, int width, int height);

public:

	/**
	 * @fn	RWindowComponent::RWindowComponent(const char *title, int width, int height);
	 *
	 * @brief	Constructor
	 *
	 * @author	Twarit
	 * @date	26-05-2018
	 *
	 * @param	title 	The title of the window to be formed.
	 * @param	width 	The width of the window to be formed.
	 * @param	height	The height of the window to be formed.
	 */
	RWindowComponent(const char *title, int width, int height);

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
	 * @brief	Callback function, called when the game window closes. Create a class deriving from
	 * 			RWindowComponent that overrides this function
	 *
	 * @author	Twarit
	 * @date	26-05-2018
	 *
	 * @param	window	The pointer to the window that just got closed.
	 */
	friend void windowCloseCallback(GLFWwindow * window);

protected:
};
