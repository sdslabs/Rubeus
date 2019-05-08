/**
 * @file		Include/layer_composition_object.h.
 *
 * @brief	Declares the Layer composition class
 */

#pragma once

#include <shader_component.h>

#include <ui_layer_object.h>
#include <scene_layer_object.h>
#include <shader_component.h>

namespace Rubeus
{
	namespace GraphicComponents
	{

		/**
		 * @class	RGameScene
		 *
		 * @brief	Contains the entire scene on display.
		 */
		class RGameScene
		{
		private:

			/** @brief	The UI layer shader */
			RShaderComponent * m_ProgramShader = NULL;

			/** @brief	The UI layer. Renders only UI elements */
			RUILayer * m_RenderableScene = NULL;

			/** @brief	Texture IDs to be used by both UI and Scene shaders */
			GLint m_TextureIDs[32];

			friend class REngine;

		public:

			/**
			 * @fn		RGameScene(const char * pathToUIVertexShader, const char * pathToUIFragmentShader, const char * pathToSceneVertexShader, const char * pathToSceneFragmentShader)
			 *
			 * @brief	Constructor
			 *
			 * @param	pathToUIVertexShader		Path to vertex shader for the UI layer.
			 * @param	pathToUIFragmentShader	Path to fragment shader for the UI layer.
			 * @param	pathToSceneVertexShader		Path to vertex shader for the Scene layer.
			 * @param	pathToSceneFragmentShader	Path to fragment shader for the Scene layer.
			 */
			RGameScene(const char * pathToUIVertexShader, const char * pathToUIFragmentShader,
							  const char * pathToSceneVertexShader, const char * pathToSceneFragmentShader);

			/**
			 * @fn		~RGameScene()
			 *
			 * @brief	Destructor
			 */
			~RGameScene();

			/**
			 * @fn		void add(RGameObject * gameObject, bool UIElement = false)
			 *
			 * @brief	Add a gameobject to the layers
			 * @warning	Select a layer with the second parameter
			 *
			 * @param	gameObject	Pointer to the game object.
			 * @param	UIElement	Whether the game object is a part of the UI.
			 */
			void add(RGameObject * gameObject, bool UIElement = false);

			/**
			 * @fn		void draw()
			 *
			 * @brief	Draw all layers to screen
			 */
			void draw();
		};
	}
}
