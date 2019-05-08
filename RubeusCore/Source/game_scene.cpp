/**
 * @file		Source/game_scene.cpp.
 *
 * @brief	Defines the Game Scene class
 */

#include <game_scene.h>

namespace Rubeus
{
	namespace GraphicComponents
	{
		RGameScene::RGameScene(const char * vShaderPath,
							   const char * fShaderPath)
			:
			m_ProgramShader(new RShaderComponent(vShaderPath, fShaderPath)),
			m_RenderableScene(new RMainLayer(*m_ProgramShader))
		{
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
		}

		void RGameScene::add(RGameObject * gameObject)
		{
			m_RenderableScene->addGameObject(gameObject);
		}

		void RGameScene::draw()
		{
			m_RenderableScene->draw();
		}
	}
}
