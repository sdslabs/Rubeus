/**
 * @file	Source\lib_Math\functions.h.
 *
 * @brief	Implements custom math functions
 */

#pragma once

#define _USE_MATH_DEFINES
#include <math.h>

namespace Rubeus
{
	namespace MathsLibrary
	{
		/**
		 * @fn	inline float degreeToRadians(float degree)
		 *
		 * @brief	Converts degree to radians
		 *
		 * @author	Twarit
		 * @date	28-05-2018
		 *
		 * @param	degree	The degree.
		 *
		 * @return	Radians in float.
		 */
		inline float degreeToRadians(float degree)
		{
			return degree * (M_PI / 180.0f);
		}
	}
}