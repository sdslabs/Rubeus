#pragma once

#include <shader_component.h>

#include <ui_layer_object.h>
#include <scene_layer_object.h>
#include <shader_component.h>

namespace Rubeus
{
	namespace GraphicComponents
	{
		class RLayerComposition
		{
		private:
			RShaderComponent * m_UIShader = NULL;
			RShaderComponent * m_SceneShader = NULL;
			RUILayer * m_UILayer = NULL;
			RSceneLayer * m_SceneLayer = NULL;
			RGroup * m_UIGroup = NULL;
			RGroup * m_SceneGroup = NULL;
			GLint m_TextureIDs[32];

			friend class REngine;

		public:
			RLayerComposition(const char * pathToUIVertexShader, const char * pathToUIFragmentShader,
							  const char * pathToSceneVertexShader, const char * pathToSceneFragmentShader);
			~RLayerComposition();

			void add(RGameObject * gameObject, bool UIElement = false);

			void draw();
		};
	}
}
