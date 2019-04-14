/**
 * @file		Source/awerere_sphere_collider_object.cpp.
 *
 * @brief	Defines the Sphere Collider class
 */

#include <awerere_sphere_collider_object.h>
#include <awerere_plane_collider_object.h>
#include <awerere_box_collider_object.h>

namespace Rubeus
{
	namespace Awerere
	{
		ASphereCollider::ASphereCollider(RML::Vector2D & center, const float radius)
			: ACollider(center, RML::Vector2D()), m_Center(center), m_Radius(radius)
		{
		}

		void ASphereCollider::selfUpdate(float deltaX, float deltaY)
		{
			m_Center.x += deltaX;
			m_Center.y += deltaY;
		}

		ACollideData ASphereCollider::tryIntersect(ASphereCollider & other)
		{
			float extTouchDistance = m_Radius + other.m_Radius;
			RML::Vector2D distanceVector = RML::Vector2D(other.getCenter() - m_Center);
			float centerDistance = distanceVector.getLength();

			return ACollideData(centerDistance < extTouchDistance,
								centerDistance - extTouchDistance,
								distanceVector
			);
		}

		ACollideData ASphereCollider::tryIntersect(APlaneCollider & plane)
		{
			return plane.tryIntersect(*this);
		}
		ACollideData ASphereCollider::tryIntersect(ABoxCollider & box)
		{
			return box.tryIntersect(*this);
		}
	}
}
