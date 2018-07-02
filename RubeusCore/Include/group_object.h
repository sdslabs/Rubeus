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
			RML::Matrix4 m_TransformationMatrix;

		public:
			RGroup(const RML::Matrix4 & transform);
			~RGroup();

			/** @brief	Vector array of renderables. */
			std::vector<const RRenderableObject *> m_Renderables;

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
