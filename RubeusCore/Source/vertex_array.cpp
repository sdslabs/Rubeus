/**
 * @file	Source\vertex_array.cpp.
 *
 * @brief	Implements the vertex array class
 */

#include <vertex_array.h>

#include <vector>

namespace Rubeus
{
	namespace GraphicComponents
	{
		RVertexArray::RVertexArray()
		{
			GLCall(glGenVertexArrays(1, &m_ArrayID));
		}

		RVertexArray::~RVertexArray()
		{
			for(int i = 0; i < m_Buffers.size(); i++)
			{
				delete m_Buffers[i];
			}
		}

		void RVertexArray::addBuffer(RBuffer * buffer, GLuint index)
		{
			bindVertexArray();
			buffer->bindBuffer();

			GLCall(glEnableVertexAttribArray(index));
			GLCall(glVertexAttribPointer(index, buffer->getElementCount(), GL_FLOAT, GL_FALSE, 0, 0));

			buffer->unbindBuffer();
			unbindVertexArray();
		}

		void RVertexArray::bindVertexArray() const
		{
			GLCall(glBindVertexArray(m_ArrayID));
		}

		void RVertexArray::unbindVertexArray() const
		{
			GLCall(glBindVertexArray(0));
		}
	}
}
