#include <texture_object.h>
#include <image_object.h>

namespace Rubeus
{
	namespace GraphicComponents
	{
		GLuint RTexture::load()
		{
			Image * image = &UtilityComponents::RLoaderComponent::loadImageFile(m_FilePath);

			UtilityComponents::RLoaderComponent::deleteImage();

			m_Height = image->m_Height;
			m_Width = image->m_Width;

			GLuint result;
			GLCall(glGenTextures(1, &result));
			GLCall(glBindTexture(GL_TEXTURE_2D, result));

			GLCall(glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST));
			GLCall(glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST));

			GLCall(glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, m_Width, m_Height, 0, GL_RGB, GL_UNSIGNED_BYTE, image->m_Image));

			GLCall(glBindTexture(GL_TEXTURE_2D, 0));

			return result;
		}

		RTexture::RTexture(const char * path)
			: m_FilePath(path)
		{
			m_TextureID = load();
		}

		RTexture::~RTexture()
		{
		}

		void RTexture::bindTexture() const
		{
			GLCall(glBindTexture(GL_TEXTURE_2D, m_TextureID));
		}

		void RTexture::unbindTexture() const
		{
			GLCall(glBindTexture(GL_TEXTURE_2D, 0));
		}
	}
}
