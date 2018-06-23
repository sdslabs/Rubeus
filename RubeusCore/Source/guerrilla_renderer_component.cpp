/**
 * @file	Source\guerrilla_renderer_component.cpp.
 *
 * @brief	Implements the guerrilla renderer component class
 */

#include <guerrilla_renderer_component.h>

namespace Rubeus
{
	namespace GraphicComponents
	{
		void RGuerrillaRendererComponent::init()
		{
			// TODO: Add GLCall() to GL calls
			glGenVertexArrays(1, &m_VAO);
			glBindVertexArray(m_VAO);

			glGenBuffers(1, &m_VBO);
			glBindBuffer(GL_ARRAY_BUFFER, m_VBO);

			glBufferData(GL_ARRAY_BUFFER, BUFFER_SIZE, NULL, GL_STATIC_DRAW);

			glVertexAttribPointer(SHADER_VERTEX_LOCATION, 3, GL_FLOAT, GL_FALSE, VERTEX_SIZE, (const GLvoid *) (offsetof(VertexData, VertexData::vertex)));
			glVertexAttribPointer(SHADER_COLOR_LOCATION, 4, GL_UNSIGNED_INT, GL_FALSE, VERTEX_SIZE, (const GLvoid *) (offsetof(VertexData, VertexData::color)));

			glEnableVertexAttribArray(SHADER_VERTEX_LOCATION);
			glEnableVertexAttribArray(SHADER_COLOR_LOCATION);

			glBindBuffer(GL_ARRAY_BUFFER, 0);

			GLushort indices[INDICES_SIZE];

			int offset = 0;
			for(int i = 0; i < INDICES_SIZE; i += 6)
			{
				// Indices for the first triangle
				indices[  i  ] = offset + 0;
				indices[i + 1] = offset + 1;
				indices[i + 2] = offset + 2;

				// Indices for the second triangle
				indices[i + 3] = offset + 2;
				indices[i + 4] = offset + 3;
				indices[i + 5] = offset + 0;

				offset += 4;
			}

			m_IBO = new RIndexBuffer(indices, INDICES_SIZE);

			glBindVertexArray(0);
		}

		RGuerrillaRendererComponent::RGuerrillaRendererComponent()
		{
			init();
		}

		RGuerrillaRendererComponent::~RGuerrillaRendererComponent()
		{
			delete m_IBO;

			GLCall(glDeleteBuffers(1, &m_VBO));
		}

		void RGuerrillaRendererComponent::begin()
		{
			// TODO: Add GLCall() calls
			glBindBuffer(GL_ARRAY_BUFFER, m_VBO);
			m_Buffer = (VertexData *) glMapBuffer(GL_ARRAY_BUFFER, GL_WRITE_ONLY);

		}

		void RGuerrillaRendererComponent::submit(const RRenderableObject * renderable)
		{
			const RML::Vector3D & position = renderable->getPosition();
			const RML::Vector2D & size = renderable->getSize();
			const RML::Vector4D & color = renderable->getColor();

			m_Buffer->vertex = position;
			m_Buffer->color = color;
			m_Buffer++;

			m_Buffer->vertex = RML::Vector3D(position.x, position.y + size.y, position.z);
			m_Buffer->color = color;
			m_Buffer++;

			m_Buffer->vertex = RML::Vector3D(position.x + size.x, position.y + size.y, position.z);
			m_Buffer->color = color;
			m_Buffer++;

			m_Buffer->vertex = RML::Vector3D(position.x + size.x, position.y, position.z);
			m_Buffer->color = color;
			m_Buffer++;

			m_IndexCount += 6;
		}

		void RGuerrillaRendererComponent::end()
		{
			// TODO: Add GLCall() calls
 			glUnmapBuffer(GL_ARRAY_BUFFER);
			glBindBuffer(GL_ARRAY_BUFFER, m_VBO);
		}

		void RGuerrillaRendererComponent::flush()
		{
			glBindVertexArray(m_VAO);
			m_IBO->bindIndexBuffer();

			glDrawElements(GL_TRIANGLES, m_IndexCount, GL_UNSIGNED_SHORT, NULL);

			m_IBO->unbindIndexBuffer();
			glBindVertexArray(0);

			m_IndexCount = 0;
		}
	}
}
