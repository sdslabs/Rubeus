#pragma once

#include <GL/glew.h>

#include <loader_component.h>

namespace Rubeus
{
	namespace GraphicComponents
	{
		class RTexture
		{
		private:
			const char * m_FilePath;
			GLuint m_TextureID;
			GLsizei m_Width;
			GLsizei m_Height;

			GLuint load();

		public:
			RTexture(const char * path);
			~RTexture();

			void bindTexture() const;
			void unbindTexture() const;

			inline const unsigned int getWidth() const { return m_Width; }
			inline const unsigned int getHeight() const { return m_Height; }
		};
	}
}
