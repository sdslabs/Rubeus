#include <layer_composition_object.h>

namespace Rubeus
{
	namespace GraphicComponents
	{
		RLayerComposition::RLayerComposition(const char * pathToUIVertexShader,
											 const char * pathToUIFragmentShader,
											 const char * pathToSceneVertexShader,
											 const char * pathToSceneFragmentShader)
			:
			m_UILayer(new RUILayer(*m_UIShader)),
			m_SceneLayer(new RSceneLayer(*m_SceneShader)),
			m_UIShader(new RShaderComponent(pathToUIVertexShader, pathToUIFragmentShader)),
			m_SceneShader(new RShaderComponent(pathToSceneVertexShader, pathToSceneFragmentShader)),
			m_UIGroup(new RGroup(RML::Matrix4::translation(RML::Vector3D(0.0f, 0.0f, 0.0f)))),
			m_SceneGroup(new RGroup(RML::Matrix4::translation(RML::Vector3D(0.0f, 0.0f, 0.0f))))
		{
			m_UILayer->addGroup(*m_UIGroup);
			m_SceneLayer->addGroup(*m_SceneGroup);
		}

		RLayerComposition::~RLayerComposition()
		{
			delete m_UILayer;
			delete m_SceneLayer;

			delete m_UIShader;
			delete m_SceneShader;

			delete m_UIGroup;
			delete m_SceneGroup;
		}

		void RLayerComposition::add(RGameObject * gameObject, bool UIElement = false)
		{
			if (UIElement == true)
			{
				m_UIGroup->add(gameObject);
			}
			else
			{
				m_SceneGroup->add(gameObject);
			}
		}

		void RLayerComposition::draw()
		{
			m_SceneLayer->draw();
			m_UILayer->draw();
		}
	}
}
