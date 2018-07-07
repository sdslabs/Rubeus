#pragma once

#include <string>

#include <IL/il.h>

namespace Rubeus
{
	namespace GraphicComponents
	{
		struct Image
		{
			ILubyte * m_Image;
			const unsigned int m_Height;
			const unsigned int m_Width;
			const unsigned int m_BPP;

			Image(ILubyte imageData[ ], unsigned int height, unsigned int width, unsigned int bpp);
			~Image();
		};
	}
}
