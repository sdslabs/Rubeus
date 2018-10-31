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
			: m_Position(position), m_Momentum(velocity), m_Force(RML::Vector2D(0.0f, 0.0f)), m_PhysicsMaterial(physicsMat), m_Type(EColliderType::NO_COLLIDER)
		{
		}

		ACollider::~ACollider()
		{
		}

		void ACollider::update(const float & deltaTime)
		{
			m_Momentum.x += (m_Force.x * deltaTime) + (m_PhysicsMaterial.m_Gravity.x * deltaTime);
			m_Momentum.y += (m_Force.y * deltaTime) + (m_PhysicsMaterial.m_Gravity.y * deltaTime);

			m_Position.x += m_Momentum.x * deltaTime;
			m_Position.y += m_Momentum.y * deltaTime;
		}
	}
}
