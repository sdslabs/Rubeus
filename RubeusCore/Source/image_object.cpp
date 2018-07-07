#include <image_object.h>

namespace Rubeus
{
	namespace GraphicComponents
	{
		Image::Image(ILubyte imageData[ ], unsigned int height, unsigned int width, unsigned int bpp)
			: m_Image(imageData), m_Height(height), m_Width(width), m_BPP(bpp)
		{
		}

		Image::~Image()
		{
		}
	}
}
