<<<<<<< HEAD
<<<<<<< HEAD
#include <awerere_sphere_collider_object.h>
#include <awerere_plane_collider_object.h>
<<<<<<< HEAD
<<<<<<< HEAD
#include <awerere_box_collider_object.h>

namespace Rubeus
{
	namespace Awerere
	{
		ASphereCollider::ASphereCollider(const RML::Vector3D & center, const float radius)
			: ACollider(center, RML::Vector2D()), m_Center(center), m_Radius(radius)
		{
		}

		ACollideData ASphereCollider::tryIntersect(ASphereCollider & other)
		{
			float extTouchDistance = m_Radius + other.m_Radius;
			float centerDistance = (other.getCenter() - m_Center).getLength();

			return ACollideData(centerDistance < extTouchDistance, centerDistance - extTouchDistance);
		}

		ACollideData ASphereCollider::tryIntersect(APlaneCollider & plane)
		{
			return plane.tryIntersect(*this);
		}
		ACollideData ASphereCollider::tryIntersect(ABoxCollider & box)
		{
			return box.tryIntersect(*this);
		}
=======
#pragma once
=======
#include <awerere_sphere_collider_object.h>
>>>>>>> Add sphere collider
=======
>>>>>>> Add plane-plane interaction
=======
#include <awerere_box_collider_object.h>
>>>>>>> Add box and sphere interaction

namespace Rubeus
{
	namespace Awerere
	{
		ASphereCollider::ASphereCollider(const RML::Vector3D & center, const float radius)
			: m_Center(center), m_Radius(radius)
		{
		}

		ACollideData ASphereCollider::tryIntersect(ASphereCollider & other)
		{
			float extTouchDistance = m_Radius + other.m_Radius;
			float centerDistance = (other.getCenter() - m_Center).getLength();

<<<<<<< HEAD
			inline const RML::Vector3D & getCenter() { return m_Center; }
			inline const float & getRadius() { return m_Radius; }
		};
>>>>>>> Add intersect data structure
=======
			return ACollideData(centerDistance < extTouchDistance, centerDistance - extTouchDistance);
		}
<<<<<<< HEAD
>>>>>>> Add sphere collider
=======

		ACollideData ASphereCollider::tryIntersect(APlaneCollider & plane)
		{
			return plane.tryIntersect(*this);
		}
<<<<<<< HEAD
>>>>>>> Add plane-plane interaction
=======
		ACollideData ASphereCollider::tryIntersect(ABoxCollider & box)
		{
			return box.tryIntersect(*this);
		}
>>>>>>> Add box and sphere interaction
	}
}
