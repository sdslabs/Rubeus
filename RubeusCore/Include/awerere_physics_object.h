#pragma once

#include <vector>

#include <rubeus_maths_library.h>
<<<<<<< HEAD
<<<<<<< HEAD
#include <awerere_physics_material.h>
=======
>>>>>>> Add support for generalised collider class
=======
#include <awerere_physics_material.h>
>>>>>>> Add simplified game-physics object creation
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
<<<<<<< HEAD
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
=======
>>>>>>> Add simplified game-physics object creation
			ACollider * m_Collider;
			bool m_EnablePhysics = false;

			APhysicsObject();
<<<<<<< HEAD
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
=======
			APhysicsObject(const APhysicsMaterial & material, const bool & enablePhysics = false, const EColliderType & type = EColliderType::NO_COLLIDER, ACollider * collider = NULL);
>>>>>>> Add simplified game-physics object creation
			~APhysicsObject();
		};
	}
}
