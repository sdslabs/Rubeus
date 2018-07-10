/**
 * @file		Include\group_object.h
 *
 * @brief	Declares the group structure.
 */

#pragma once

#include <vector>
#include <renderable_object.h>
#include <guerrilla_renderer_component.h>
#include <rubeus_maths_library.h>

namespace Rubeus
{
	namespace GraphicComponents
	{
		/**
		 * @class	Group
		 *
		 * @brief	A group of objects in a family based hierarchy.
		 */
		class RGroup : public RRenderableObject
		{
		private:
			/** @brief	The transform used to place this group's contents */
			RML::Matrix4 m_TransformationMatrix;

		public:
			/** @brief	Vector array of renderables. */
			std::vector<const RRenderableObject *> m_Renderables;

			/**
			 * @fn		RGroup(const RML::Matrix4 & transform)
			 *
			 * @brief	Constructor
			 *
			 * @param	tranform	The tranform that places the contents of this group.
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
			 * @fn		Group & add(RRenderableObject * renderable)
			 *
			 * @brief	Adds the renderable object as the children of this object
			 * @warning	Do not manually delete passed in pointers. This object intends to take ownership of the passed in renderable object.
			 *
			 * @param	renderable	The renderable object.
			 *
			 * @return	Reference to this group object. Allows chaining add() calls. E.g. group.add(r1).add(r2);
			 */
			RGroup & add(RRenderableObject * renderable);
		};
	}
}
