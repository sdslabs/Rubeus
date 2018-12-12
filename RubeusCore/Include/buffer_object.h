/**
 * @file		Include\buffer_object.h
 *
 * @brief	Declares the RBuffer class
 */

#pragma once

#include <GL/glew.h>

#include <logger_component.h>

namespace Rubeus
{
	/**
     * @namespace @Rubeus::GraphicComponents
	 *
     * @brief The Graphic Components of Rubeus Engine namespace.
	 */
	namespace GraphicComponents
	{
		/**
		 * @class	RBuffer
		 *
		 * @brief	A buffer class that handles generating and binding OpenGL buffers.
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
			 * @fn		RBuffer::RBuffer(GLfloat * data, GLsizei count, GLuint elementCount);
			 *
			 * @brief	Constructor. Generates a buffer object and applies its layout.
			 *
			 * @param [in,out]	data			If non-null, the data.
			 * @param 		  	count		Number of total units of data values.
			 * @param 		  	elementCount	Number of elements.
			 */
			RBuffer(GLfloat * data, GLsizei count, GLuint elementCount);

			/**
			 * @fn		RBuffer::~RBuffer();
			 *
			 * @brief	Destructor
			 */
			~RBuffer();

			/**
			 * @fn		void RBuffer::bindBuffer() const;
			 *
			 * @brief	Binds this buffer
			 */
			void bindBuffer() const;

			/**
			 * @fn		void RBuffer::unbindBuffer() const;
			 *
			 * @brief	Unbinds buffer
			 */
			void unbindBuffer() const;

			/**
			 * @fn		inline GLuint RBuffer::getElementCount()
			 *
			 * @brief	Gets number of elements in this buffer
			 *
			 * @return	The element count.
			 */
			inline GLuint getElementCount() { return m_ElementCount; }
		};
	}
}
