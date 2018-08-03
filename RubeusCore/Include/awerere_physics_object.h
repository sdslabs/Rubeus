#pragma once

#include <vector>

#include <rubeus_maths_library.h>
#include <awerere_collider_object.h>

namespace Rubeus
{
	namespace Awerere
	{
		class APhysicsObject
		{
		private:
			float m_Mass;
			ACollider * m_Collider;

		public:
			APhysicsObject(float & mass,
						   RML::Vector3D & position,
						   RML::Vector2D & velocity,
						   Awerere::ACollider * collider
			);
			~APhysicsObject();
		};
	}
}
