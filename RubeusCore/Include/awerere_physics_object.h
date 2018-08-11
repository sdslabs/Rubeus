#pragma once

#include <vector>

#include <rubeus_maths_library.h>
<<<<<<< HEAD
#include <awerere_physics_material.h>
=======
>>>>>>> Add support for generalised collider class
#include <awerere_collider_object.h>

namespace Rubeus
{
	namespace Awerere
	{
<<<<<<< HEAD
<<<<<<< HEAD
		struct APhysicsObject
		{
			APhysicsMaterial m_PhysicsMaterial;
			ACollider * m_Collider;
			bool m_EnablePhysics = false;

			APhysicsObject();
			APhysicsObject(const APhysicsMaterial & material, const bool & enablePhysics = false, const EColliderType & type = EColliderType::NO_COLLIDER, ACollider * collider = NULL);
=======
		class APhysicsObject
=======
		struct APhysicsObject
>>>>>>> Add physics material
		{
			float m_Mass;
			ACollider * m_Collider;
			bool m_EnablePhysics = false;

			APhysicsObject();
<<<<<<< HEAD
			APhysicsObject(float & mass,
						   RML::Vector3D & position,
						   RML::Vector2D & velocity,
						   Awerere::ACollider * collider
			);
>>>>>>> Add support for generalised collider class
=======
			APhysicsObject(float & mass, RML::Vector3D & position, RML::Vector2D & velocity, Awerere::ACollider * collider);
>>>>>>> Add physics material
			~APhysicsObject();
		};
	}
}
