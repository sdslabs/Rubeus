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
		ACollider::ACollider(RML::Vector2D position)
			: m_Position(position), m_Type(EColliderType::NO_COLLIDER), m_ZIndex(0)
		{
		}

		ACollider::ACollider(const RML::Vector2D & position, const RML::Vector2D & velocity, const APhysicsMaterial & physicsMat, const int & zIndex)
			:
			m_Position(position),
			m_Momentum(velocity),
			m_Force(RML::Vector2D(0.0f, 0.0f)),
			m_PhysicsMaterial(physicsMat),
			m_Type(EColliderType::NO_COLLIDER),
			m_ZIndex(zIndex)
		{
		}

		ACollider::~ACollider()
		{
		}

		ACollideData ACollider::tryIntersect(ACollider & collider)
		{
			auto left = this;
			auto right = &collider;
			auto leftType = m_Type;
			auto rightType = collider.m_Type;

			switch ((int)leftType | (int)rightType)
			{
				// Collider types are as follows:
				//
				// SPHERE      = 0x0001
				// PLANE       = 0x0010
				// BOX         = 0x0100
				// NO_COLLIDER = 0x1000

				case 0x0001:
					return left->tryIntersect(*(ASphereCollider *)right);
					break;

				case 0x0010:
					return left->tryIntersect(*(APlaneCollider *)right);
					break;

				case 0x0100:
					return left->tryIntersect(*(ABoxCollider *)right);

				case 0x0011:
					return left->tryIntersect(*(APlaneCollider *)right);

				case 0x0101:
					return left->tryIntersect(*(ABoxCollider *)right);

				case 0x0110:
					return left->tryIntersect(*(APlaneCollider *)right);

				case 0x1001:
					return ACollideData(false, 0, RML::Vector2D()); // No collider

				case 0x1000:
					return ACollideData(false, 0, RML::Vector2D()); // No collider

				case 0x1010:
					return ACollideData(false, 0, RML::Vector2D()); // No collider

				case 0x1100:
					return ACollideData(false, 0, RML::Vector2D()); // No collider

				default:
					ERRORLOG("Fatal error: Unknown collider type found");
					break;
			}

			return ACollideData(false, 0, RML::Vector2D());
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
			m_Sprite->m_Position->x += deltaX;
			m_Sprite->m_Position->y += deltaY;

			// Update collider shape specific properties
			selfUpdate(deltaX, deltaY);
		}

		void ACollider::addImpulse(RML::Vector2D & impulse)
		{
			m_Momentum += impulse;
		}
	}
}
