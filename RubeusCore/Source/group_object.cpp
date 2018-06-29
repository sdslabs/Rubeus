/**
 * @file		Source\group_object.cpp.
 *
 * @brief	Implements the group object structure
 */

#include <group_object.h>

namespace Rubeus
{
	namespace GraphicComponents
	{
		RGroup::RGroup(RRenderableObject renderable)
			: RRenderableObject(renderable)
		{
		}

		RGroup::~RGroup()
		{
		}

		void RGroup::submit(RGuerrillaRendererComponent & renderer)
		{
			renderer.push()
		}

		RGroup & RGroup::addRenderable(RRenderableObject * renderable)
		{
			renderables.push_back(*renderable);

			return *this;
		}
	}
}
