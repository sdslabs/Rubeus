#include <awerere_box_collider_object.h>
<<<<<<< HEAD
#include <awerere_plane_collider_object.h>
#include <awerere_sphere_collider_object.h>
#include <awerere_collide_data_object.h>
=======
>>>>>>> Add sphere collider

namespace Rubeus
{
	namespace Awerere
	{
<<<<<<< HEAD
		RML::Vector3D ABoxCollider::calculateCenter(RML::Vector3D & ll, RML::Vector3D & ur)
		{
			RML::Vector3D result((ll + ur) / 2.0f);

			return result;
		}

		ABoxCollider::ABoxCollider(RML::Vector3D & minExtent, RML::Vector3D & maxExtent)
			: ACollider(calculateCenter(minExtent, maxExtent), RML::Vector2D()), m_MinExtent(minExtent), m_MaxExtent(maxExtent)
		{
			m_Type = EColliderType::BOX;
=======
		ABoxCollider::ABoxCollider(const RML::Vector3D minExtent, const RML::Vector3D maxExtent)
			: m_MinExtent(minExtent), m_MaxExtent(maxExtent)
		{
>>>>>>> Add sphere collider
		}

		ABoxCollider::~ABoxCollider()
		{
		}

<<<<<<< HEAD
		ACollideData ABoxCollider::tryIntersect(ABoxCollider & box)
		{
			RML::Vector3D gap1 = box.getLowerLeftBound() - m_MaxExtent;
			RML::Vector3D gap2 = m_MinExtent - box.getUpperRightBound();

			RML::Vector3D maxGap = gap1.maxVector(gap2);
=======
		ACollideData ABoxCollider::tryIntersect(const ABoxCollider & other)
		{
			RML::Vector3D gap1 = other.getMinExtent() - m_MaxExtent;
			RML::Vector3D gap2 = m_MinExtent - other.getMaxExtent();

			RML::Vector3D maxGap = gap1.maxVector(gap2);

>>>>>>> Add sphere collider
			float maxDistance = maxGap.maxXYComponent();

			return ACollideData(maxDistance < 0, maxDistance);
		}
<<<<<<< HEAD

		ACollideData ABoxCollider::tryIntersect(APlaneCollider & plane)
		{
			return plane.tryIntersect(*this);
		}

		ACollideData ABoxCollider::tryIntersect(ASphereCollider & sphere)
		{
			RML::Vector3D closestPoint;
			const RML::Vector3D & center = sphere.getCenter();

			// Find the closest x offset
			if(center.x <= m_MinExtent.x)
			{
				closestPoint.x = m_MinExtent.x;
			}
			else if(center.x >= m_MaxExtent.x)
			{
				closestPoint.x = m_MaxExtent.x;
			}
			else
			{
				closestPoint.x = center.x;
			}

			// Find closest y offset
			if(center.y <= m_MinExtent.y)
			{
				closestPoint.y = m_MinExtent.y;
			}
			else if(center.y >= m_MaxExtent.y)
			{
				closestPoint.y = m_MaxExtent.y;
			}
			else
			{
				closestPoint.y = center.y;
			}

			// Set the z axis
			closestPoint.z = center.z;

			float penetrationDistance = RML::Vector3D(closestPoint - center).getLength();
			// Find distance of original sphere center from the closest point
			return ACollideData(
				penetrationDistance < sphere.getRadius(),
				penetrationDistance - sphere.getRadius()
			);
		}
=======
>>>>>>> Add sphere collider
	}
}
