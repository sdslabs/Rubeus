/**
 * @file		Source/ui_layer_object.cpp.
 *
 * @brief	Implements the static UI layer class
 */

#include <ui_layer_object.h>

namespace Rubeus
{
	namespace GraphicComponents
	{
		RUILayer::RUILayer(RShaderComponent& shader)
			: m_Renderer(new RGuerrillaRendererComponent()), m_Shader(shader)
		{
			m_Shader.enableShader();
			m_Shader.setUniformMat4("proj_matrix", (const RML::Matrix4) RML::Matrix4::orthographic(0.0f, 16.0f, 0.0f, 9.0f, -1.0f, 1.0f));
			m_Shader.disableShader();
		}

		RUILayer::~RUILayer()
		{
			delete m_Renderer;
		}

		RLayer & RUILayer::addGroup(RGroup & group)
		{
			m_Groups.push_back(&group);

			return *this;
		}

		void RUILayer::draw()
		{
			m_Shader.enableShader();

			m_Renderer->begin();

			for (size_t i = 0; i < m_Groups.size(); i++)
			{
				if (m_Groups[i] != NULL)
				{
					m_Groups[i]->submit(*m_Renderer);
				}
			}

			m_Renderer->end();
			m_Renderer->flush();

			m_Shader.disableShader();
		}
	}
}
