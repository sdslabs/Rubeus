/**
 * @file		Include\index_buffer_object.h
 *
 * @brief	Declares the Index buffer class
 */

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
			 * @fn		RIndexBuffer::RIndexBuffer(GLushort * data, GLsizei count);
			 *
			 * @brief	Constructor. Generates a buffer object and applies its layout.
			 *
			 * @param [in,out]	data 	If non-null, the data.
			 * @param 		  	count	Number of indices specified.
			 */
			RIndexBuffer(GLushort * data, GLsizei count);

			/**
			 * @fn		RIndexBuffer::~RIndexBuffer();
			 *
			 * @brief	Destructor
			 */
			~RIndexBuffer();

			/**
			 * @fn		void RIndexBuffer::bindIndexBuffer() const;
			 *
			 * @brief	Binds this index buffer
			 */
			void bindIndexBuffer() const;

			/**
			 * @fn		void RIndexBuffer::unbindIndexBuffer() const;
			 *
			 * @brief	Unbinds this index buffer
			 */
			void unbindIndexBuffer() const;

			/**
			 * @fn		inline GLuint RIndexBuffer::getElementCount()
			 *
			 * @brief	Gets number of indices in this buffer
			 *
			 * @return	The index count.
			 */
			inline GLuint getIndexCount() { return m_IndicesCount; }

		protected:
		};
	}
}
