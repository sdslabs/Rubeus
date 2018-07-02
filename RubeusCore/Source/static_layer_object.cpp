/**
 * @file		Source\static_layer_object.cpp.
 *
 * @brief	Implements the static layer object class
 */

#include <static_layer_object.h>

namespace Rubeus
{
	namespace GraphicComponents
	{
		RStaticLayer::RStaticLayer(RShaderComponent& shader)
			: m_Renderer(new RGuerrillaRendererComponent()), m_Shader(shader)
		{
			m_Shader.enableShader();
			m_Shader.setUniformMat4("proj_matrix", (const RML::Matrix4) RML::Matrix4::orthographic(0.0f, 16.0f, 0.0f, 9.0f, -1.0f, 1.0f));
			m_Shader.disableShader();
		}
	
		RStaticLayer::~RStaticLayer()
		{
			delete m_Renderer;
		}

		RLayer & RStaticLayer::addGroup(RGroup & group)
		{
			m_Groups.push_back(&group);

			return *this;
		}

		void RStaticLayer::draw()
		{
			m_Shader.enableShader();

			m_Renderer->begin();

			for(size_t i = 0; i < m_Groups.size(); i++)
			{
				m_Groups[i]->submit(*m_Renderer);
			}

			m_Renderer->end();
			m_Renderer->flush();

			m_Shader.disableShader();
		}
	}
}
