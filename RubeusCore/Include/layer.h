#pragma once

#include <map>

#include <renderable_object.h>
#include <guerrilla_renderer_component.h>

namespace Rubeus
{
	namespace GraphicComponents
	{
		class RLayer
		{
		public:
			RLayer() = default;
			virtual ~RLayer() = default;

			virtual void addSprite(RRenderableObject * renderable) = 0;
			virtual void draw() = 0;
			virtual void removeSprite(RRenderableObject * renderable) = 0;
		};
	}
}
