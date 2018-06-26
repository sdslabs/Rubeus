/**
 * @file	Include\buffer.h.
 *
 * @brief	Declares the RBuffer class
 */

#pragma once

#include <GL/glew.h>

#include <logger_component.h>

namespace Rubeus
{
	namespace GraphicComponents
	{
		/**
		 * @class	RBuffer
		 *
		 * @brief	A buffer class that handles generating and binding OpenGL buffers.
		 *
		 * @author	Twarit
		 * @date	13-06-2018
		 */
		class RBuffer
		{
		private:
			/** @brief	Identifier for the buffer, provided by OpenGL */
			unsigned int m_BufferID;

			/** @brief	Number of elements in this buffer. */
			unsigned int m_ElementCount;

		public:

			/**
			 * @fn	RBuffer::RBuffer(GLfloat * data, GLsizei count, GLuint elementCount);
			 *
			 * @brief	Constructor. Generates a buffer object and applies its layout.
			 *
			 * @author	Twarit
			 * @date	13-06-2018
			 *
			 * @param [in,out]	data			If non-null, the data.
			 * @param 		  	count			Number of total units of data values.
			 * @param 		  	elementCount	Number of elements.
			 */
			RBuffer(GLfloat * data, GLsizei count, GLuint elementCount);

			/**
			 * @fn	RBuffer::~RBuffer();
			 *
			 * @brief	Destructor
			 *
			 * @author	Twarit
			 * @date	20-06-2018
			 */
			~RBuffer();

			/**
			 * @fn	void RBuffer::bindBuffer() const;
			 *
			 * @brief	Binds this buffer
			 *
			 * @author	Twarit
			 * @date	13-06-2018
			 */
			void bindBuffer() const;

			/**
			 * @fn	void RBuffer::unbindBuffer() const;
			 *
			 * @brief	Unbinds buffer
			 *
			 * @author	Twarit
			 * @date	13-06-2018
			 */
			void unbindBuffer() const;

			/**
			 * @fn	inline GLuint RBuffer::getElementCount()
			 *
			 * @brief	Gets number of elements in this buffer
			 *
			 * @author	Twarit
			 * @date	13-06-2018
			 *
			 * @return	The element count.
			 */
			inline GLuint getElementCount() { return m_ElementCount; }
		};
	}
}
