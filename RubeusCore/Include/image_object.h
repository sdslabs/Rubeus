/**
 * @file		Include/image_object.h.
 *
 * @brief	Declares the Rubeus compliant image object
 */

#pragma once

#include <string>

#include <IL/il.h>

namespace Rubeus
{
	namespace GraphicComponents
	{
		/**
		 * @struct	Image
		 *
		 * @brief	A collection of the image data and its features.
		 */
		struct Image
		{
			/** @brief	The image data array */
			ILubyte * m_Image;

			/** @brief	Height of the image in pixels */
			const unsigned int m_Height;

			/** @brief	Width of the image in pixels */
			const unsigned int m_Width;

			/** @brief	The bits per pixel of the image data. (= # of channels * sizeof(byte)) */
			const unsigned int m_BPP;

			/**
			 * @fn		Image(ILubyte imageData[ ], unsigned int height, unsigned int width, unsigned int bpp)
			 *
			 * @brief	Constructor
			 * @warning	
			 *
			 * @param	imageData	Array of byte values storing image data pixel-wise.
			 * @param	height		Height of the image in pixels.
			 * @param	width		Width of the image in pixels.
			 * @param	bpp			bpp of the image in bits per pixel.
			 */
			Image(ILubyte imageData[ ], unsigned int height, unsigned int width, unsigned int bpp);

			/**
			 * @fn		~Image()
			 *
			 * @brief	Destructor
			 */
			~Image();
		};
	}
}
