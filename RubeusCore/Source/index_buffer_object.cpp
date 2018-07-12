/**
 * @file		Source\index_buffer_object.cpp.
 *
 * @brief	Implements the index buffer class
 */

#include <index_buffer_object.h>

namespace Rubeus
{
	namespace GraphicComponents
	{
		RIndexBuffer::RIndexBuffer(GLushort * data, GLsizei count)
		{
			m_IndicesCount = count;

			GLCall(glGenBuffers(1, &m_BufferID));
			GLCall(glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, m_BufferID));
			GLCall(glBufferData(GL_ELEMENT_ARRAY_BUFFER, count * sizeof(GLushort), data, GL_STATIC_DRAW));
			GLCall(glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0));
		}

		RIndexBuffer::~RIndexBuffer()
		{
			GLCall(glDeleteBuffers(1, &m_BufferID));
		}
								   
		void RIndexBuffer::bindIndexBuffer() const
		{						   
			GLCall(glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, m_BufferID));
		}						  
								  
		void RIndexBuffer::unbindIndexBuffer() const
		{						  
			GLCall(glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0));
		}
	}
}
