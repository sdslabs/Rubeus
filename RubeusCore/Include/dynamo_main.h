#pragma once

#include <sprite_object.h>
#include <entity_object.h>
#include <rubeus_maths_library.h>

namespace Rubeus
{
	namespace Dynamo
	{
		struct Hit
		{
			RML::Vector2D contactPoint;
			RML::Vector2D hitNormal;
			REntity & striker;
			REntity & taker;
		};

		struct Collider
		{
			void isColliding(GraphicComponents::RSprite & gameObject);
			void update();
		};
	}
}
