#pragma once

#include <vector>

#include <rubeus_maths_library.h>
#include <awerere_physics_material.h>
#include <awerere_collider_object.h>

namespace Rubeus
{
	namespace Awerere
	{
		struct APhysicsObject
		{
			APhysicsMaterial m_PhysicsMaterial;
			ACollider * m_Collider;
			bool m_EnablePhysics = false;

			APhysicsObject();
			APhysicsObject(const APhysicsMaterial & material, const bool & enablePhysics = false, const EColliderType & type = EColliderType::NO_COLLIDER, ACollider * collider = NULL);
			~APhysicsObject();
		};
	}
}
