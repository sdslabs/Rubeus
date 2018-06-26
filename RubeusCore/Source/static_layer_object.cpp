#include <static_layer_object.h>

namespace Rubeus
{
	namespace GraphicComponents
	{
		RStaticLayer::RStaticLayer(RShaderComponent& shader)
			: m_ObjectCount(0), m_Renderer(new RGuerrillaRendererComponent()), m_Shader(shader)
		{
			m_Shader.enableShader();
			m_Shader.setUniformMat4("proj_matrix", (const RML::Matrix4) RML::Matrix4::orthographic(0.0f, 16.0f, 0.0f, 9.0f, -1.0f, 1.0f));
			m_Shader.disableShader();
		}
	
		RStaticLayer::~RStaticLayer()
		{
			delete m_Renderer;
		}

		RLayer & RStaticLayer::addGroup(std::string name, Group & group)
		{
			m_Groups[name] = &group;

			return *this;
		}

		void RStaticLayer::draw()
		{
			m_Shader.enableShader();
			m_Renderer->begin();

			for(auto item : m_Groups)
			{
				for(auto renderable : item.second->renderables)
				{
					m_Renderer->submit(renderable);
				}
			}

			m_Renderer->end();

			m_Renderer->flush();
			m_Shader.disableShader();
		}

		void RStaticLayer::removeGroup(std::string name)
		{
			m_Groups.erase(name);
		}
	}
}
