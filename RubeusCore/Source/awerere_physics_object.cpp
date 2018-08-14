#include <awerere_physics_object.h>

<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> Add simplified game-physics object creation
#include <logger_component.h>
#include <awerere_sphere_collider_object.h>
#include <awerere_box_collider_object.h>
#include <awerere_collider_object.h>
<<<<<<< HEAD
=======
#include <awerere_sphere_collider_object.h>
#include <awerere_box_collider_object.h>
>>>>>>> Add support for generalised collider class
=======
>>>>>>> Add simplified game-physics object creation
#include <awerere_plane_collider_object.h>

namespace Rubeus
{
	namespace Awerere
	{
<<<<<<< HEAD
<<<<<<< HEAD
		APhysicsObject::APhysicsObject()
			: m_PhysicsMaterial(APhysicsMaterial()), m_Collider(NULL), m_EnablePhysics(false)
		{
		}

		APhysicsObject::APhysicsObject(const APhysicsMaterial & material, const bool & enablePhysics, const EColliderType & type, ACollider * collider)
			: m_PhysicsMaterial(material), m_Collider(collider)
		{
			if(type == EColliderType::BOX
			   || type == EColliderType::PLANE
			   || type == EColliderType::SPHERE
			   || type == EColliderType::NO_COLLIDER)
			{
				m_Collider = collider;
				m_EnablePhysics = enablePhysics;
			}
			else
			{
				m_Collider = new ACollider();
				LOG("Invalid Collider type. Use members of enumeration EColliderType");
			}
		}

=======
=======
		APhysicsObject::APhysicsObject()
			: m_PhysicsMaterial(APhysicsMaterial()), m_Collider(NULL), m_EnablePhysics(false)
		{
		}
<<<<<<< HEAD
>>>>>>> Add better game object API
		APhysicsObject::APhysicsObject(float & mass, RML::Vector3D & position, RML::Vector2D & velocity, Awerere::ACollider * collider)
			: m_Mass(mass), m_Collider(collider)
=======

		APhysicsObject::APhysicsObject(const APhysicsMaterial & material, const bool & enablePhysics, const EColliderType & type, ACollider * collider)
			: m_PhysicsMaterial(material), m_Collider(collider)
>>>>>>> Add simplified game-physics object creation
		{
			if(type == EColliderType::BOX
			   || type == EColliderType::PLANE
			   || type == EColliderType::SPHERE
			   || type == EColliderType::NO_COLLIDER)
			{
				m_Collider = collider;
				m_EnablePhysics = enablePhysics;
			}
			else
			{
				m_Collider = new ACollider();
				LOG("Invalid Collider type. Use members of enumeration EColliderType");
			}
		}

>>>>>>> Add support for generalised collider class
		APhysicsObject::~APhysicsObject()
		{
			delete m_Collider;
		}
	}
}
