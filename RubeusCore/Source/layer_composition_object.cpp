/**
 * @file		Source/layer_composition_object.cpp.
 *
 * @brief	Defines the Layer composition class
 */

#include <layer_composition_object.h>

namespace Rubeus
{
	namespace GraphicComponents
	{
		RGameScene::RGameScene(const char * pathToUIVertexShader,
							   const char * pathToUIFragmentShader)
			:
			m_ProgramShader(new RShaderComponent(pathToUIVertexShader, pathToUIFragmentShader))
			m_RenderableScene(new RUILayer(*m_ProgramShader))
			m_UIGroup(new RGroup(RML::Matrix4::translation(RML::Vector3D(0.0f, 0.0f, 0.0f))))
		{
			m_RenderableScene->addGroup(*m_UIGroup);

			for (int i = 0; i < 32; i++)
			{
				m_TextureIDs[i] = i;
			}

			m_ProgramShader->enableShader();
			m_ProgramShader->setUniform1iv("textures", m_TextureIDs, 32);
			m_ProgramShader->disableShader();
		}

		RGameScene::~RGameScene()
		{
			delete m_RenderableScene;
			delete m_ProgramShader;
			delete m_UIGroup;
		}

		void RGameScene::add(RGameObject * gameObject, bool UIElement)
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

		void RGameScene::draw()
		{
			m_RenderableScene->draw();
		}
	}
}
