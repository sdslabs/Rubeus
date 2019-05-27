/**
 * @file		Source/main_layer.cpp.
 *
 * @brief	Implements the main layer class
 */

#include <main_layer.h>

#include <game_object.h>

namespace Rubeus
{
	namespace GraphicComponents
	{
		RMainLayer::RMainLayer(RShaderComponent& shader)
			: m_Renderer(new RGuerrillaRendererComponent()), m_Shader(shader)
		{
			m_Shader.enableShader();
			m_Shader.setUniformMat4("proj_matrix", (const RML::Matrix4) RML::Matrix4::orthographic(0.0f, 16.0f, 0.0f, 9.0f, -1.0f, 1.0f));
			m_Shader.disableShader();
		}

		RMainLayer::~RMainLayer()
		{
			delete m_Renderer;
		}

		RLayer & RMainLayer::addGameObject(RGameObject * gameObject)
		{
			m_GameObjects.push_back(gameObject);

			return *this;
		}

		void RMainLayer::draw()
		{
			m_Shader.enableShader();

			m_Renderer->begin();

			for (size_t i = 0; i < m_GameObjects.size(); i++)
			{
				if (m_GameObjects[i] != NULL)
				{
					m_GameObjects[i]->submit(*m_Renderer);
				}
			}

			m_Renderer->end();
			m_Renderer->flush();

			m_Shader.disableShader();
		}
	}
}
