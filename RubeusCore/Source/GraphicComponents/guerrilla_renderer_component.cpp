/**
 * @file		Source/guerrilla_renderer_component.cpp.
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
			GLCall(glGenVertexArrays(1, &m_VAO));
			GLCall(glBindVertexArray(m_VAO));

			GLCall(glGenBuffers(1, &m_VBO));
			GLCall(glBindBuffer(GL_ARRAY_BUFFER, m_VBO));

			GLCall(glBufferData(GL_ARRAY_BUFFER, BUFFER_SIZE, NULL, GL_STATIC_DRAW));

			GLCall(glVertexAttribPointer(SHADER_VERTEX_LOCATION, 3, GL_FLOAT, GL_FALSE, VERTEX_SIZE, (const GLvoid *) (offsetof(VertexData, VertexData::vertex))));
			GLCall(glVertexAttribPointer(SHADER_UV_LOCATION, 2, GL_FLOAT, GL_FALSE, VERTEX_SIZE, (const GLvoid *) (offsetof(VertexData, VertexData::uv))));
			GLCall(glVertexAttribPointer(SHADER_TEXTURE_ID_LOCATION, 1, GL_FLOAT, GL_FALSE, VERTEX_SIZE, (const GLvoid *) (offsetof(VertexData, VertexData::texID))));
			GLCall(glVertexAttribPointer(SHADER_COLOR_LOCATION, 4, GL_FLOAT, GL_FALSE, VERTEX_SIZE, (const GLvoid *) (offsetof(VertexData, VertexData::color))));

			GLCall(glEnableVertexAttribArray(SHADER_VERTEX_LOCATION));
			GLCall(glEnableVertexAttribArray(SHADER_UV_LOCATION));
			GLCall(glEnableVertexAttribArray(SHADER_TEXTURE_ID_LOCATION));
			GLCall(glEnableVertexAttribArray(SHADER_COLOR_LOCATION));

			GLCall(glBindBuffer(GL_ARRAY_BUFFER, 0));

			GLushort indices[INDICES_SIZE];

			int offset = 0;
			for(int i = 0; i < INDICES_SIZE; i += 6)
			{
				// Indices for the first triangle
				indices[i] = offset + 0;
				indices[i + 1] = offset + 1;
				indices[i + 2] = offset + 2;

				// Indices for the second triangle
				indices[i + 3] = offset + 2;
				indices[i + 4] = offset + 3;
				indices[i + 5] = offset + 0;

				offset += 4;
			}

			m_IBO = new RIndexBuffer(indices, INDICES_SIZE);

			GLCall(glBindVertexArray(0));
		}

		RGuerrillaRendererComponent::RGuerrillaRendererComponent()
		{
			m_TransformationStack.push_back(RML::Matrix4::identity());
			m_TransformationBack = &m_TransformationStack.back();

			m_IndexCount = 0;
			init();
		}

		RGuerrillaRendererComponent::~RGuerrillaRendererComponent()
		{
			delete m_IBO;

			GLCall(glDeleteBuffers(1, &m_VBO));
		}

		void RGuerrillaRendererComponent::begin()
		{
			glBindBuffer(GL_ARRAY_BUFFER, m_VBO);

			if(!(m_Buffer = (VertexData *) glMapBuffer(GL_ARRAY_BUFFER, GL_WRITE_ONLY)))
			{
				ERRORLOG("glMapBuffer() returned NULL");
			}

			m_IndexCount = 0;
		}

		void RGuerrillaRendererComponent::submit(const RRenderableObject * renderable)
		{
			const RML::Vector3D position = renderable->getPosition();
			const RML::Vector2D size = renderable->getSize();
			const RML::Vector4D color = renderable->getColor();
			const std::vector<RML::Vector2D> uv = renderable->getUV();
			const GLuint textureID = renderable->getTextureID();

			float tempTID = 0.0f;

			if(textureID > 0.0f)
			{
				if(m_TextureSlots.empty()) // Checking if texture slots are not initialised
				{
					// Add the first texture ID
					m_TextureSlots.push_back(textureID);

					// Initialise the tempTID to be used while populating the buffers
					tempTID = (float) m_TextureSlots.size();
				}
				else // if the texture slots have been initialised before
				{
					size_t i = 0;
					int texNotFound = 1;

					// Look in the texture slot values for the current texture ID required
					for(; i < m_TextureSlots.size(); i++)
					{
						if(m_TextureSlots[i] == textureID) // If the texture slot matches the texture ID required
						{
							// Use it!
							tempTID = (float) (i + 1);
							texNotFound = 0;
							break;
						}
					}

					if(texNotFound == 1) // If the texture ID required was not found in the texture slots
					{
						if(m_TextureSlots.size() == MAX_ALLOWED_TEXTURES) // Also if the maximum slots have been reached, restart the sprite submission process
						{
							end();
							flush();
							begin();
						}
						// else no need to restart submission

						// Insert the newer texture ID acquired
						m_TextureSlots.push_back(textureID);

						// Retain the value for buffer population
						tempTID = (float) m_TextureSlots.size();
					}
				}
			}

			m_Buffer->vertex = *m_TransformationBack * position;
			m_Buffer->uv = uv[0];
			m_Buffer->texID = tempTID;
			m_Buffer->color = color;
			m_Buffer++;

			m_Buffer->vertex = *m_TransformationBack * RML::Vector3D(position.x, position.y + size.y, position.z);
			m_Buffer->uv = uv[1];
			m_Buffer->texID = tempTID;
			m_Buffer->color = color;
			m_Buffer++;

			m_Buffer->vertex = *m_TransformationBack * RML::Vector3D(position.x + size.x, position.y + size.y, position.z);
			m_Buffer->uv = uv[2];
			m_Buffer->texID = tempTID;
			m_Buffer->color = color;
			m_Buffer++;

			m_Buffer->vertex = *m_TransformationBack * RML::Vector3D(position.x + size.x, position.y, position.z);
			m_Buffer->uv = uv[3];
			m_Buffer->texID = tempTID;
			m_Buffer->color = color;
			m_Buffer++;

			m_IndexCount += 6;
		}

		void RGuerrillaRendererComponent::end()
		{
			glUnmapBuffer(GL_ARRAY_BUFFER);
			glBindBuffer(GL_ARRAY_BUFFER, m_VBO);
		}

		void RGuerrillaRendererComponent::flush()
		{
			for(size_t i = 0; i < m_TextureSlots.size(); ++i)
			{
				glActiveTexture(GL_TEXTURE0 + i);
				glBindTexture(GL_TEXTURE_2D, m_TextureSlots[i]);
			}

			glBindVertexArray(m_VAO);
			m_IBO->bindIndexBuffer();

			glDrawElements(GL_TRIANGLES, m_IndexCount, GL_UNSIGNED_SHORT, NULL);

			m_IBO->unbindIndexBuffer();
			glBindVertexArray(0);

			m_IndexCount = 0;
		}

		void RGuerrillaRendererComponent::push(const RML::Matrix4 & matrix)
		{
			m_TransformationStack.push_back(m_TransformationStack.back() * matrix);
			m_TransformationBack = &m_TransformationStack.back();
		}

		void RGuerrillaRendererComponent::pushOverride(RML::Matrix4 & matrix)
		{
			m_TransformationStack.push_back(matrix);
			m_TransformationBack = &m_TransformationStack.back();
		}

		void RGuerrillaRendererComponent::pop()
		{
			if(m_TransformationStack.size() > 1)
			{
				m_TransformationStack.pop_back();
				m_TransformationBack = &m_TransformationStack.back();
			}
			else
			{
				ERRORLOG("Tried to pop identity matrix from transformation stack");
			}
		}
	}
}
