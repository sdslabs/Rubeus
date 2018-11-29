/**
 * @fn	Source/awerere_box_collider_object.cpp
 *
 * @brief	Defines the Box Collider class
 */

#include <awerere_box_collider_object.h>

#include <awerere_plane_collider_object.h>
#include <awerere_sphere_collider_object.h>
#include <awerere_collide_data_object.h>

namespace Rubeus
{
	namespace Awerere
	{
		RML::Vector3D ABoxCollider::calculateCenter(const RML::Vector3D & ll, const RML::Vector3D & ur)
		{
			return RML::Vector3D(ll + ur) * 0.5f;
		}

		ABoxCollider::ABoxCollider(const RML::Vector3D & minExtent, const RML::Vector3D & maxExtent)
			: ACollider(*const_cast<RML::Vector3D *>(&minExtent), RML::Vector2D()), m_MinExtent(minExtent), m_MaxExtent(maxExtent)
		{
			m_Type = EColliderType::BOX;
		}

		ABoxCollider::~ABoxCollider()
		{
		}

		void ABoxCollider::selfUpdate(float deltaX, float deltaY)
		{
			m_MinExtent.x += deltaX;
			m_MinExtent.y += deltaY;

			m_MaxExtent.x += deltaX;
			m_MaxExtent.y += deltaY;
		}

		ACollideData ABoxCollider::tryIntersect(ABoxCollider & box)
		{
			// Don't touch this. Proceed to ignore this warning if you know what you are doing

			RML::Vector3D gap1 = box.getLowerLeftBound() - m_MaxExtent;
			RML::Vector3D gap2 = m_MinExtent - box.getUpperRightBound();

			RML::Vector3D maxGap = gap1.maxVector(gap2);
			float maxDistance = maxGap.maxXYComponent();
			float absDistance = 2;

			RML::Vector2D normal(0.0f, 0.0f);
			RML::Vector3D boxSize(RML::Vector3D(box.m_MinExtent - box.m_MaxExtent).abs());

			if (abs(box.getPosition().x - boxSize.x / 2.0f - m_MaxExtent.x) <= absDistance)
			{
				normal.x = 1.0f;
			}
			else if (abs(box.getPosition().y + boxSize.y / 2.0f - m_MinExtent.y) <= absDistance)
			{
				normal.y = -1.0f;
			}
			else if (abs(box.getPosition().y - boxSize.y / 2.0f - m_MaxExtent.y) <= absDistance)
			{
				normal.y = 1.0f;
			}
			else if (abs(box.getPosition().x + boxSize.x / 2.0f - m_MinExtent.x) <= absDistance)
			{
				normal.x = -1.0f;
			}

			return ACollideData(maxDistance < 0.0f, maxDistance, normal);
		}

		ACollideData ABoxCollider::tryIntersect(APlaneCollider & plane)
		{
			return plane.tryIntersect(*this);
		}

		ACollideData ABoxCollider::tryIntersect(ASphereCollider & sphere)
		{
			RML::Vector3D closestPoint;
			const RML::Vector3D & center = sphere.getCenter();

			// Find the closest x offset
			if (center.x <= m_MinExtent.x)
			{
				closestPoint.x = m_MinExtent.x;
			}
			else if (center.x >= m_MaxExtent.x)
			{
				closestPoint.x = m_MaxExtent.x;
			}
			else
			{
				closestPoint.x = center.x;
			}

			// Find closest y offset
			if (center.y <= m_MinExtent.y)
			{
				closestPoint.y = m_MinExtent.y;
			}
			else if (center.y >= m_MaxExtent.y)
			{
				closestPoint.y = m_MaxExtent.y;
			}
			else
			{
				closestPoint.y = center.y;
			}

			// Set the z axis
			closestPoint.z = center.z;

			// Find distance of original sphere center from the closest point
			float penetrationDistance = RML::Vector3D(closestPoint - center).getLength();

			RML::Vector3D normal = RML::Vector3D(this->m_MinExtent + this->m_MaxExtent).multiplyCross(sphere.getCenter());

			normal = normal / (4.0f * normal.getLength());

			return ACollideData(
				penetrationDistance < sphere.getRadius(),
				penetrationDistance - sphere.getRadius(),
				normal.getVector2D()
			);
		}
	}
}
