/**
 * @file		Source/awerere_plane_collider_object.cpp.
 *
 * @brief	Defines the Plane Collider class
 */

#include <awerere_plane_collider_object.h>

#include <awerere_sphere_collider_object.h>
#include <awerere_box_collider_object.h>

namespace Rubeus
{
	namespace Awerere
	{
		APlaneCollider::APlaneCollider(const RML::Vector2D & normal, RML::Vector2D & emergencePoint)
			: ACollider(emergencePoint, RML::Vector2D()), m_Normal(normal), m_EmergencePoint(emergencePoint)
		{
			m_Type = EColliderType::PLANE;
		}

		APlaneCollider::~APlaneCollider()
		{
		}

		void APlaneCollider::selfUpdate(float deltaX, float deltaY)
		{
			m_EmergencePoint.x += deltaX;
			m_EmergencePoint.y += deltaY;
		}

		ACollideData APlaneCollider::tryIntersect(APlaneCollider & plane)
		{
			float pdt = m_Normal.multiplyCross(plane.m_Normal);

			return ACollideData(
				pdt == 0,
				RML::Vector2D(m_EmergencePoint - plane.m_EmergencePoint).multiplyDot(plane.getNormal()),
				m_Normal
			);
		}

		ACollideData APlaneCollider::tryIntersect(ASphereCollider & sphere)
		{
			RML::Vector2D slantGap = sphere.getCenter() - m_EmergencePoint;
			float gap = slantGap.multiplyDot(m_Normal.toUnitVector());

			return ACollideData(gap < sphere.getRadius(),
								gap - sphere.getRadius(),
								m_Normal);
		}

		ACollideData APlaneCollider::tryIntersect(ABoxCollider & box)
		{
			float ll = RML::Vector2D(box.getLowerLeftBound() - m_EmergencePoint).multiplyDot(m_Normal.toUnitVector());
			float lr = RML::Vector2D(box.getLowerRightBound() - m_EmergencePoint).multiplyDot(m_Normal.toUnitVector());
			float ul = RML::Vector2D(box.getUpperLeftBound() - m_EmergencePoint).multiplyDot(m_Normal.toUnitVector());
			float ur = RML::Vector2D(box.getUpperRightBound() - m_EmergencePoint).multiplyDot(m_Normal.toUnitVector());

			bool ans = (signbit(ll) * signbit(lr) * signbit(ul) * signbit(ur)) | ((1 - signbit(ll)) * (1 - signbit(lr)) * (1 - signbit(ul)) * (1 - signbit(ur)));

			return ACollideData(
				!ans,
				(float)(ans == false ? -1 : +1),
				m_Normal
			);
		}

		RML::Vector3D APlaneCollider::normalised(const RML::Vector3D & vector) const
		{
			float magnitude = vector.getLength();
			return vector / RML::Vector3D(magnitude, magnitude, magnitude);
		}
	}
}
