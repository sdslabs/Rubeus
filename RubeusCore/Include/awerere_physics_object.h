#pragma once

#include <vector>

#include <rubeus_maths_library.h>
#include <awerere_collider_object.h>

namespace Rubeus
{
	namespace Awerere
	{
		struct APhysicsObject
		{
			float m_Mass;
			ACollider * m_Collider;
			bool m_EnablePhysics = false;

			APhysicsObject();
			APhysicsObject(float & mass, RML::Vector3D & position, RML::Vector2D & velocity, Awerere::ACollider * collider);
			~APhysicsObject();
		};
	}
}
