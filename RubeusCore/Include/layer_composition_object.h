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
		 * @class	RLayerComposition
		 *
		 * @brief	A wrapper around UI and Scene layers of the screen.
		 */
		class RLayerComposition
		{
		private:

			/** @brief	The UI layer shader */
			RShaderComponent * m_UIShader = NULL;

			/** @brief	The Scene layer shader */
			RShaderComponent * m_SceneShader = NULL;

			/** @brief	The UI layer. Renders only UI elements */
			RUILayer * m_UILayer = NULL;

			/** @brief	The Scene layer. Renders only scene elements */
			RSceneLayer * m_SceneLayer = NULL;

			/** @brief	The singular group of all UI objects */
			RGroup * m_UIGroup = NULL;

			/** @brief	The singular group of all scene objects */
			RGroup * m_SceneGroup = NULL;

			/** @brief	Texture IDs to be used by both UI and Scene shaders */
			GLint m_TextureIDs[32];

			friend class REngine;

		public:

			/**
			 * @fn		RLayerComposition(const char * pathToUIVertexShader, const char * pathToUIFragmentShader, const char * pathToSceneVertexShader, const char * pathToSceneFragmentShader)
			 *
			 * @brief	Constructor
			 *
			 * @param	pathtoUIVertexShader		Path to vertex shader for the UI layer.
			 * @param	pathtoUIFragmentShader	Path to fragment shader for the UI layer.
			 * @param	pathtoSceneUIShader		Path to vertex shader for the Scene layer.
			 * @param	pathtoSceneFragmentShader	Path to fragment shader for the Scene layer.
			 */
			RLayerComposition(const char * pathToUIVertexShader, const char * pathToUIFragmentShader,
							  const char * pathToSceneVertexShader, const char * pathToSceneFragmentShader);

			/**
			 * @fn		~RLayerComposition()
			 *
			 * @brief	Destructor
			 */
			~RLayerComposition();

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
