#include <group_object.h>

namespace Rubeus
{
	namespace GraphicComponents
	{
		Group & Group::addRenderable(RRenderableObject * renderable)
		{
			renderables.push_back(renderable);

			return *this;
		}
	}
}
