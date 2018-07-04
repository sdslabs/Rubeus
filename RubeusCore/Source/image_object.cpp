#include <image_object.h>

namespace Rubeus
{
	namespace GraphicComponents
	{
		RImage::RImage(std::string path)
		{
			// TODO: Complete this after Message bus is completed
			//m_Image = UtilityComponents::RLoaderComponent::loadImageFile(path);
		}

		RImage::~RImage()
		{
			delete m_Image;
		}
	}
}
