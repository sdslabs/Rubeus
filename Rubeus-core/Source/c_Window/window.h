/**
 * @file	Source\c_Window\window.h.
 *
 * @brief	Declares the window class and error callbacks for glfw
 */

#pragma once

#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include "../c_logger/logger.h"

void getErrorLog(int error, const char *description);

/**
 * @class	RWindowComponent
 *
 * @brief	A window component that bridges GLFW function calls to handle Rubeus game window.
 *
 * @author	Twarit
 * @date	26-05-2018
 */

class RWindowComponent
{
private:
public:
	RWindowComponent();
	~RWindowComponent();
	bool initWindow();

protected:
};
