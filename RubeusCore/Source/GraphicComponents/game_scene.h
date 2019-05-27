/**
 * @file		Include/game_scene.h.
 *
 * @brief	Declares the Game Scene class
 */

#pragma once

#include <shader_component.h>

#include <main_layer.h>
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

			/** @brief	The game's current shader */
			RShaderComponent * m_ProgramShader = NULL;

			/** @brief	The scene graph of the game */
			RMainLayer * m_RenderableScene = NULL;

			/** @brief	Texture IDs to be used by both UI and Scene shaders */
			GLint m_TextureIDs[32];

			friend class REngine;

		public:

			/**
			 * @fn		RGameScene(const char * vShaderPath, const char * fShaderPath)
			 *
			 * @brief	Constructor
			 *
			 * @param	vshaderPath		Path to vertex shader.
			 * @param	fshaderPath		Path to fragment shader.
			 */
			RGameScene(const char * vShaderPath, const char * fShaderPath);

			/**
			 * @fn		~RGameScene()
			 *
			 * @brief	Destructor
			 */
			~RGameScene();

			/**
			 * @fn		void add(RGameObject * gameObject)
			 *
			 * @brief	Add a gameobject to the layers
			 * @warning	Select a layer with the second parameter
			 *
			 * @param	gameObject	Pointer to the game object.
			 */
			void add(RGameObject * gameObject);

			/**
			 * @fn		void draw()
			 *
			 * @brief	Draw all layers to screen
			 */
			void draw();
		};
	}
}
