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
			m_SceneShader(new RShaderComponent(pathToSceneVertexShader, pathToSceneFragmentShader))
		{
		}

		RLayerComposition::~RLayerComposition()
		{
			delete m_UILayer;
			delete m_SceneLayer;

			delete m_UIShader;
			delete m_SceneShader;
		}

		void RLayerComposition::draw()
		{
		}
	}
}
