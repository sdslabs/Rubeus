#include <awerere_plane_collider_object.h>

#include <awerere_sphere_collider_object.h>
<<<<<<< HEAD
#include <awerere_box_collider_object.h>
=======
>>>>>>> Add plane collider with sphere interactions

namespace Rubeus
{
	namespace Awerere
	{
<<<<<<< HEAD
		APlaneCollider::APlaneCollider(const RML::Vector3D & normal, const RML::Vector3D & emergencePoint)
			: ACollider(emergencePoint, RML::Vector2D()), m_Normal(normal), m_EmergencePoint(emergencePoint)
		{
			m_Type = EColliderType::PLANE;
=======
		APlaneCollider::APlaneCollider(const RML::Vector3D normal, const RML::Vector3D emergencePoint)
			: m_Normal(normal), m_EmergencePoint(emergencePoint)
		{
>>>>>>> Add plane collider with sphere interactions
		}

		APlaneCollider::~APlaneCollider()
		{
		}

<<<<<<< HEAD
		ACollideData APlaneCollider::tryIntersect(APlaneCollider & plane)
		{
			RML::Vector3D pdt = m_Normal.multiplyCross(plane.m_Normal);

			return ACollideData(
				pdt == 0,
				RML::Vector3D(m_EmergencePoint - plane.m_EmergencePoint).multiplyDot(plane.getNormal())
			);
		}

		ACollideData APlaneCollider::tryIntersect(ASphereCollider & sphere)
		{
			RML::Vector3D slantGap = sphere.getCenter() - m_EmergencePoint;
			float gap = slantGap.multiplyDot(m_Normal.toUnitVector());

			return ACollideData(gap < sphere.getRadius(), gap - sphere.getRadius());
		}

		ACollideData APlaneCollider::tryIntersect(ABoxCollider & box)
		{
			float ll = RML::Vector3D(box.getLowerLeftBound() - m_EmergencePoint).multiplyDot(m_Normal.toUnitVector());
			float lr = RML::Vector3D(box.getLowerRightBound() - m_EmergencePoint).multiplyDot(m_Normal.toUnitVector());
			float ul = RML::Vector3D(box.getUpperLeftBound() - m_EmergencePoint).multiplyDot(m_Normal.toUnitVector());
			float ur = RML::Vector3D(box.getUpperRightBound() - m_EmergencePoint).multiplyDot(m_Normal.toUnitVector());

			bool ans = (signbit(ll) * signbit(lr) * signbit(ul) * signbit(ur)) | ((1 - signbit(ll)) * (1 - signbit(lr)) * (1 - signbit(ul)) * (1 - signbit(ur)));
			return ACollideData(
				!ans,
				ans == false ? -1 : +1
			);
=======
		ACollideData APlaneCollider::tryIntersect(ASphereCollider & sphere)
		{
			RML::Vector3D slantGap = sphere.getCenter() - m_EmergencePoint;
			float gap = slantGap.multiplyDot(m_Normal.toUnitVector());

<<<<<<< HEAD
			return ACollideData(gap < 0, gap);
>>>>>>> Add plane collider with sphere interactions
=======
			return ACollideData(gap < sphere.getRadius(), gap - sphere.getRadius());
>>>>>>> Add sphere-plane collision detection
		}

		RML::Vector3D APlaneCollider::normalised(const RML::Vector3D & vector) const
		{
			float magnitude = vector.getLength();
			return vector / RML::Vector3D(magnitude, magnitude, magnitude);
		}
	}
}
