#include <awerere_physics_object.h>

#include <awerere_sphere_collider_object.h>
#include <awerere_box_collider_object.h>
#include <awerere_plane_collider_object.h>

namespace Rubeus
{
	namespace Awerere
	{
		APhysicsObject::APhysicsObject(float & mass, RML::Vector3D & position, RML::Vector2D & velocity, Awerere::ACollider * collider)
			: m_Mass(mass), m_Collider(collider)
		{
		}

		APhysicsObject::~APhysicsObject()
		{
			delete m_Collider;
		}
	}
}
