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

			/** @brief	Texture ID provided by OpenGL */
			GLuint m_TextureID;

			/**
			 * @fn		GLuint load(const char * filePath)
			 *
			 * @brief	Loads a texture object using OpenGL and return a texture ID
			 *
			 * @param	filePath	The path to the image file to be used as a texture
			 */
			GLuint load(const char * filePath);

		public:

			/**
			 * @fn		RTexture(const char * path)
			 *
			 * @brief	Constructor. Uses a path string to load an image from.
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
			 * @fn		inline const GLuint getID() const
			 *
			 * @brief	Returns the texture ID of this texture
			 *
			 * @return	Copy of this object's texture ID.
			 */
			inline const GLuint getID() const { return m_TextureID; }
		};
	}
}
