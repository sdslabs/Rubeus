/**
* @file     Include/scene_layer_object.h
*
* @brief    Declares the Scene Layer
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
		 * @class	RSceneLayer
		 *
		 * @brief	Rendering Layer used for drawing the game scene (non-UI) to the screen.
		 */
		class RSceneLayer : public RLayer
		{
		private:
			/** @brief	Vector array of all the groups handles by this layer */
			std::vector<RGroup *> m_Groups;

			/** @brief	The renderer alloted to this layer */
			RGuerrillaRendererComponent * m_Renderer;

			/** @brief	The shader for this layer to use */
			RShaderComponent & m_Shader;

		public:
			/**
			 * @fn		RSceneLayer(RShaderComponent& shader)
			 *
			 * @brief	Constructor. Initialises the layer's shader.
			 * @warning	Do not pass in dereferenced pointers
			 *
			 * @param	shader	The shader to be alloted to this layer.
			 */
			RSceneLayer(RShaderComponent& shader);

			/**
			 * @fn		virtual ~RUILayer()
			 *
			 * @brief	Destructor
			 */
			virtual ~RSceneLayer();

			/**
			 * @fn		RLayer & addGroup(RGroup & group) override
			 *
			 * @brief	Adds the group object to this layer.
			 *
			 * @param	group	The group object to add.
			 *
			 * @return	Reference to this layer. Allows chaining multiple group additions. E.g.: layer.addGoup(g1).addGroup(g2);
			 */
			RLayer & addGroup(RGroup & group) override;

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
