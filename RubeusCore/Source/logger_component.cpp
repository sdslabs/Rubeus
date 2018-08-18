/**
 * @file		Source\logger_component.cpp.
 *
 * @brief	Implements the logger component functions
 */

#include <logger_component.h>
#include <math.h>

int toHex(int decimal)
{
	int hex = 0;

	for(int i = 0; decimal != 0; i++)
	{
		hex = hex + (int) ((pow(10,i))*(decimal % 16));
		decimal /= 16;
	}

	return hex;
}

void GLClearError()
{
	while(glGetError() != GL_NO_ERROR)
		;
}

void DevILClearError()
{
	while(ilGetError() != IL_NO_ERROR)
		;
}
