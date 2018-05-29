#pragma once

#include <GL\glew.h>

#include <logger_component.h>

namespace Rubeus
{
	namespace GraphicComponents
	{
		/**
		 * @class	RIndexBuffer
		 *
		 * @brief	A buffer class that handles generating and binding OpenGL index buffers.
		 *
		 * @author	Twarit
		 * @date	13-06-2018
		 */
		class RIndexBuffer
		{
		private:
			/** @brief	Identifier for the index buffer, provided by OpenGL */
			unsigned int m_BufferID;

			/** @brief	Number of indices */
			unsigned int m_IndicesCount;

		public:

			/**
			 * @fn	RIndexBuffer::RIndexBuffer(GLushort * data, GLsizei count);
			 *
			 * @brief	Constructor. Generates a buffer object and applies its layout.
			 *
			 * @author	Twarit
			 * @date	13-06-2018
			 *
			 * @param [in,out]	data 	If non-null, the data.
			 * @param 		  	count	Number of indices specified.
			 */
			RIndexBuffer(GLushort * data, GLsizei count);

			/**
			 * @fn	void RIndexBuffer::bindIndexBuffer() const;
			 *
			 * @brief	Binds this index buffer
			 *
			 * @author	Twarit
			 * @date	13-06-2018
			 */
			void bindIndexBuffer() const;

			/**
			 * @fn	void RIndexBuffer::unbindIndexBuffer() const;
			 *
			 * @brief	Unbinds this index buffer
			 *
			 * @author	Twarit
			 * @date	13-06-2018
			 */
			void unbindIndexBuffer() const;

			/**
			 * @fn	inline GLuint RIndexBuffer::getElementCount()
			 *
			 * @brief	Gets number of indices in this buffer
			 *
			 * @author	Twarit
			 * @date	13-06-2018
			 *
			 * @return	The index count.
			 */
			inline GLuint getIndexCount() { return m_IndicesCount; }

		protected:
		};
	}
}
