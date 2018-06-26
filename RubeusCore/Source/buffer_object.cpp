/**
 * @file	Source\buffer.cpp.
 *
 * @brief	Implements the buffer class
 */

#include <buffer_object.h>

namespace Rubeus
{
	namespace GraphicComponents
	{
		RBuffer::RBuffer(GLfloat * data, GLsizei count, GLuint elementCount)
		{
			m_ElementCount = elementCount;

			GLCall(glGenBuffers(1, &m_BufferID));
			GLCall(glBindBuffer(GL_ARRAY_BUFFER, m_BufferID));
			GLCall(glBufferData(GL_ARRAY_BUFFER, count * sizeof(GLfloat), data, GL_STATIC_DRAW));
			GLCall(glBindBuffer(GL_ARRAY_BUFFER, 0));
		}

		RBuffer::~RBuffer()
		{
			GLCall(glDeleteBuffers(1, &m_BufferID));
		}

		void RBuffer::bindBuffer() const
		{
			GLCall(glBindBuffer(GL_ARRAY_BUFFER, m_BufferID));
		}

		void RBuffer::unbindBuffer() const
		{
			GLCall(glBindBuffer(GL_ARRAY_BUFFER, 0));
		}
	}
}
