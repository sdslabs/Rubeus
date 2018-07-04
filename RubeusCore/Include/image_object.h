#pragma once

#include <string>

#include <IL/il.h>

#include <loader_component.h>

namespace Rubeus
{
	namespace GraphicComponents
	{
		class RImage
		{
		private:
			ILubyte * m_Image;

		public:
			RImage(std::string path);
			~RImage();

		protected:
		};
	}
}
