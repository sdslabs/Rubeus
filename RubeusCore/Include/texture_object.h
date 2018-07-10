/**
 * @file		Include/texture_object.h.
 *
 * @brief	Declares the RTexture class
 */

#pragma once

#include <GL/glew.h>

#include <loader_component.h>

namespace Rubeus
{
	namespace GraphicComponents
	{
		/**
		 * @class	RTexture
		 *
		 * @brief	A texture class containing all OpenGL abstractions for implementing textures.
		 */
		class RTexture
		{
		private:

			/** @brief	The texture image file path */
			const char * m_FilePath;

			/** @brief	Texture ID provided by OpenGL */
			GLuint m_TextureID;

			/** @brief	The width of the image */
			GLsizei m_Width;

			/** @brief	The height of the image */
			GLsizei m_Height;

			/**
			 * @fn		GLuint load()
			 *
			 * @brief	Loads a texture object using OpenGL and return a texture ID
			 */
			GLuint load();

		public:

			/**
			 * @fn		RTexture(const char * path)
			 *
			 * @brief	Constructor. Uses a path string to load an image from.
			 * @warning	
			 *
			 * @param	path	The file path for the image.
			 */
			RTexture(const char * path);

			/**
			 * @fn		~RTexture
			 *
			 * @brief	Destructor
			 */
			~RTexture();

			/**
			 * @fn		void bindTexture()
			 *
			 * @brief	Binds this texture object
			 * @warning	Decreases graphics performance if used repeatedly.
			 */
			void bindTexture() const;

			/**
			 * @fn		void unbindTexture()
			 *
			 * @brief	Unbinds this texture object
			 * @warning	Decreases graphics performance if used repeatedly.
			 */
			void unbindTexture() const;

			/**
			 * @fn		inline const unsigned int getWidth() const 
			 *
			 * @brief	Returns the width of the texture image
			 */
			inline const unsigned int getWidth() const { return m_Width; }

			/**
			 * @fn		inline const unsigned int getHeight() const 
			 *
			 * @brief	Returns the height of the texture image
			 */
			inline const unsigned int getHeight() const { return m_Height; }
		};
	}
}
