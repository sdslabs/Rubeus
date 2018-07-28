<<<<<<< HEAD
#include <awerere_sphere_collider_object.h>
#include <awerere_plane_collider_object.h>
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

#include <rubeus_maths_library.h>

namespace Rubues
{
	namespace Awerere
	{
		class ASphereCollider
		{
		private:
			const RML::Vector3D m_Center;
			const float m_Radius;

		public:
			ASphereCollider(const RML::Vector3D & center, const float radius);

			void IntersectBoundingSphere(const ASphereCollider & other);

			inline const RML::Vector3D & getCenter() { return m_Center; }
			inline const float & getRadius() { return m_Radius; }
		};
>>>>>>> Add intersect data structure
	}
}
