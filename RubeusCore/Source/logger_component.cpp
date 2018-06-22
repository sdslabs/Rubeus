/**
 * @file	Source\logger_component.cpp.
 *
 * @brief	Implements the logger component functions
 */

#pragma once

#include <logger_component.h>
#include <math.h>

/**
 * @fn	int toHex(int decimal)
 *
 * @brief	Converts a decimal to a hexadecimal
 *
 * @author	Nikita
 * @date	22-06-2018
 *
 * @param	decimal	The decimal.
 *
 * @return	Decimal as an int.
 */

int toHex(int decimal)
{
	int hex = 0;

	for(int i = 0; decimal != 0; i++)
	{
		hex = hex + (pow(10,i))*(decimal % 16);
		decimal /= 16;
	}

	return hex;
}

/**
 * @fn	void GLClearError()
 *
 * @brief	Gl clear error
 *
 * @author	Nikita
 * @date	22-06-2018
 */

void GLClearError()
{
	while(glGetError() != GL_NO_ERROR)
		;
}
