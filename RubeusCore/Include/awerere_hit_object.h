#pragma once

#include <sprite_object.h>
#include <entity_object.h>
#include <game_object.h>
#include <rubeus_maths_library.h>

namespace Rubeus
{
	namespace Awerere
	{
		struct HitEvent
		{
			RML::Vector2D contactPoint;
			RML::Vector2D hitNormal;
			Rubeus::RGameObject *
		};
	}
}
