#pragma once

#include <map>

#include <renderable_object.h>
#include <group_object.h>
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

			virtual RLayer & addGroup(std::string name, Group & group) = 0;
			virtual void draw() = 0;
			virtual void removeGroup(std::string name) = 0;
		};
	}
}
