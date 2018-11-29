/**
 * @file		Source/awerere_collider_object.cpp.
 *
 * @brief	Defines the collider super class
 */

#include <awerere_collider_object.h>
#include <awerere_sphere_collider_object.h>
#include <awerere_plane_collider_object.h>
#include <awerere_physics_engine.h>
#include <awerere_box_collider_object.h>

namespace Rubeus
{
	namespace Awerere
	{
		static RML::Vector3D TEMP_VECTOR3D(0.0f, 0.0f, 0.0f);

		ACollider::ACollider()
			: m_Position(TEMP_VECTOR3D), m_Type(EColliderType::NO_COLLIDER)
		{
		}

		ACollider::ACollider(RML::Vector3D & position, const RML::Vector2D & velocity, const APhysicsMaterial & physicsMat)
			:
			m_Position(position),
			m_Momentum(velocity),
			m_Force(RML::Vector2D(0.0f, 0.0f)),
			m_PhysicsMaterial(physicsMat),
			m_Type(EColliderType::NO_COLLIDER)
		{
		}

		ACollider::~ACollider()
		{
		}

		void ACollider::update(const float & deltaTime)
		{
			m_Momentum.x += (m_Force.x * deltaTime) + (m_PhysicsMaterial.m_Gravity.x * deltaTime);
			m_Momentum.y += (m_Force.y * deltaTime) + (m_PhysicsMaterial.m_Gravity.y * deltaTime);

			float deltaX = m_Momentum.x * deltaTime;
			float deltaY = m_Momentum.y * deltaTime;

			// Update the collider position
			m_Position.x += deltaX;
			m_Position.y += deltaY;

			// Update sprite with the same change in position to allow sprites having
			// different dimensions than its collider.
			m_Sprite->m_Position.x += deltaX;
			m_Sprite->m_Position.y += deltaY;

			// Update collider shape specific properties
			selfUpdate(deltaX, deltaY);
		}

		void ACollider::addImpulse(RML::Vector2D & impulse)
		{
			m_Momentum += impulse;
		}
	}
}
