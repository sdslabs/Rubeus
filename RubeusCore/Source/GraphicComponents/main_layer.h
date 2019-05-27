/**
 * @file		Include/main_layer.h.
 *
 * @brief	Declares the main layer class
 */

#pragma once

#include <vector>

#include <layer_object.h>
#include <sprite_object.h>
#include <shader_component.h>
#include <logger_component.h>
#include <rubeus_maths_library.h>

namespace Rubeus
{
	namespace GraphicComponents
	{
		/**
		 * @class	RMainLayer
		 *
		 * @brief	Rendering Layer used for drawing UI elements to the screen.
		 */
		class RMainLayer : public RLayer
		{
		private:
			/** @brief	The renderer alloted to this layer */
			RGuerrillaRendererComponent * m_Renderer;

			std::vector<RGameObject *> m_GameObjects;

			/** @brief	The shader for this layer to use */
			RShaderComponent & m_Shader;

		public:
			/**
			 * @fn		RMainLayer(RShaderComponent& shader)
			 *
			 * @brief	Constructor. Initialises the layer's shader.
			 * @warning	Do not pass in dereferenced pointers
			 *
			 * @param	shader	The shader to be alloted to this layer.
			 */
			RMainLayer(RShaderComponent& shader);

			/**
			 * @fn		virtual ~RMainLayer()
			 *
			 * @brief	Destructor
			 */
			virtual ~RMainLayer();

			RLayer & addGameObject(RGameObject * gameObject) override;

			/**
			 * @fn		void draw() override
			 *
			 * @brief	Draws the layer
			 * @warning	Call only once per frame
			 */
			void draw() override;

		protected:
		};
	}
}
