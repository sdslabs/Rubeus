/**
 * @file		Source/awerere_collider_object.cpp.
 *
 * @brief	Defines the collider super class
 */

#include <awerere_collider_object.h>
#include <awerere_sphere_collider_object.h>
#include <awerere_plane_collider_object.h>
#include <awerere_box_collider_object.h>

namespace Rubeus
{
	namespace Awerere
	{
		ACollider::ACollider()
		{
		}

		ACollider::ACollider(const RML::Vector3D & position, const RML::Vector2D & velocity, const APhysicsMaterial & physicsMat)
			: m_Position(position), m_Velocity(velocity), m_Force(RML::Vector2D(0.0f, 0.0f)), m_PhysicsMaterial(physicsMat), m_Type(EColliderType::NO_COLLIDER)
		{
		}

		ACollider::~ACollider()
		{
		}
	}
}
