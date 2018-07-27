/**
 * @file		Include\group_object.h
 *
 * @brief	Declares the group structure.
 */

#pragma once

#include <vector>

#include <rubeus_maths_library.h>

#include <renderable_object.h>
#include <game_object.h>
#include <guerrilla_renderer_component.h>

namespace Rubeus
{
	namespace GraphicComponents
	{
		/**
		 * @class	Group
		 *
		 * @brief	A group of objects in a family based hierarchy.
		 */
		class RGroup : public RRenderableObject, public RGameObject
		{
		private:
			/** @brief	The transform used to place this group's contents */
			RML::Matrix4 m_TransformationMatrix;

		public:
			/** @brief	Vector array of child objects. */
			std::vector<RGameObject *> m_Children;

			/**
			 * @fn		RGroup(const RML::Matrix4 & transform)
			 *
			 * @brief	Constructor
			 *
			 * @param	tranform	The tranformation matrix that displaces the childs of this group.
			 */
			RGroup(const RML::Matrix4 & transform);

			/**
			 * @fn		~RGroup()
			 *
			 * @brief	Destructor
			 */
			~RGroup();

			/**
			 * @fn		void submit(RRendererComponent & renderer) const override
			 *
			 * @brief	Submit the group to a renderer queue
			 *
			 * @param	renderer	The renderer to send the group contents to.
			 */
			void submit(RRendererComponent & renderer) const override;

			/**
			 * @fn		Group & add(RSprite * renderable)
			 *
			 * @brief	Adds a renderable object as the children of this object
			 * @warning	Do not manually delete passed in pointers. This object intends to take ownership of the passed in renderable object.
			 *
			 * @param	renderable	The renderable object.
			 *
			 * @return	Reference to this group object. Allows chaining add() calls. E.g. group.add(r1).add(r2);
			 */
			RGroup & add(RSprite * renderable);

			/**
			 * @fn		Group & add(RGameObject * gameObject)
			 *
			 * @brief	Adds a game object as the children of this object
			 * @warning	Do not manually delete passed in pointers. This object intends to take ownership of the passed in renderable object.
			 *
			 * @param	gameObject	The game object to be added to this group.
			 *
			 * @return	Reference to this group object. Allows chaining add() calls. E.g. group.add(r1).add(r2);
			 */
			RGroup & add(RGameObject * gameObject);
		};
	}
}
