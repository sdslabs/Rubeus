/**
 * @file		Include\static_layer_object.h.
 *
 * @brief	Declares the static layer class
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
		 * @class	RStaticLayer
		 *
		 * @brief	Allows a static layer of groups of objects to be drawn on the screen.
		 */
		class RStaticLayer : public RLayer
		{
		private:
			/** @brief	Vector array of all the groups handles by this layer */
			std::vector<Group *> m_Groups;

			/** @brief	The renderer alloted to this layer */
			RGuerrillaRendererComponent * m_Renderer;

			/** @brief	The shader for this layer to use */
			RShaderComponent & m_Shader;

		public:
			/**
			 * @fn		RStaticLayer(RShaderComponent& shader)
			 *
			 * @brief	Constructor. Initialises the layer's shader.
			 * @warning	Do not pass in derenferences pointers
			 *
			 * @param	shader	The shader to allot to this layer.
			 */
			RStaticLayer(RShaderComponent& shader);

			/**
			 * @fn	virtual ~RStaticLayer()
			 *
			 * @brief	Destructor
			 */
			virtual ~RStaticLayer();

			/**
			 * @fn		RLayer & addGroup(Group & group) override
			 *
			 * @brief	Adds the group object to this layer.
			 * @warning
			 *
			 * @param	group	The group object to add.
			 *
			 * @return	Reference to this layer. Allows chaining multiple group additions. E.g. layer.addGoup(g1).addGroup(g2);
			 */
			RLayer & addGroup(Group & group) override;

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
