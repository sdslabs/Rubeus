#include <static_layer.h>

namespace Rubeus
{
	namespace GraphicComponents
	{
		RStaticLayer::RStaticLayer(RShaderComponent& shader)
			: m_ObjectCount(0), m_Shader(shader)
		{
			m_Shader.enableShader();
		}
	
		RStaticLayer::~RStaticLayer()
		{
			m_Shader.disableShader();
		}

		void RStaticLayer::addSprite(RRenderableObject * sprite)
		{
			RSprite * result = reinterpret_cast<RSprite *>(sprite);

			if(result)
			{
				result->m_ObjectID = m_ObjectCount++;
				m_ObjectMap[result->m_ObjectID] = *result;
			}
			else
			{
				// TODO: Add the name of the invalid object in error message 
				ERRORLOG("Invalid renderable object type used");
			}
		}

		void RStaticLayer::draw()
		{
			auto iter = m_ObjectMap.begin(), end = m_ObjectMap.end();

			m_Renderer.begin();

			while(iter != end)
			{
				m_Renderer.submit(&iter->second);

				++iter;
			}

			m_Renderer.end();
			m_Renderer.flush();
		}

		void RStaticLayer::removeSprite(RRenderableObject * sprite)
		{
			m_ObjectMap[sprite->m_ObjectID] = RSprite(0, 0, 0, 0, RML::Vector4D(0, 0, 0, 0));
		}
	}
}
