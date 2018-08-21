/**
 * @file		Source/awerere_collider_object.cpp.
 *
 * @brief	Defines the collider super class
 */

#include <awerere_collider_object.h>

namespace Rubeus
{
	namespace Awerere
	{
		ACollider::ACollider()
		{
		}

		ACollider::ACollider(RML::Vector3D position, RML::Vector2D velocity)
			: m_Position(position), m_Velocity(velocity)
		{
		}

		ACollider::~ACollider()
		{
		}
	}
}
