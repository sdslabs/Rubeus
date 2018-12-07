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
			RUILayer * m_UILayer;
			RSceneLayer * m_SceneLayer;
			RShaderComponent * m_UIShader;
			RShaderComponent * m_SceneShader;

		public:
			RLayerComposition(const char * pathToUIVertexShader, const char * pathToUIFragmentShader,
							  const char * pathToSceneVertexShader, const char * pathToSceneFragmentShader);
			~RLayerComposition();

			void draw();
		};
	}
}
