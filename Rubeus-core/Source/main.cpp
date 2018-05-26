/**
 * @file	Source\main.cpp.
 *
 * @brief	Implements the main class
 */

#pragma once

#include <iostream>
#include "c_Logger\logger.h"
#include "c_Window\window.h"

int main()
{
	RWindowComponent GameWindow("My game", 1280, 720);

	while(!GameWindow.closed())
	{
		GameWindow.update();
	}

	return 0;
}
