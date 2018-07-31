#include <awerere_plane_collider_object.h>

#include <awerere_sphere_collider_object.h>

namespace Rubeus
{
	namespace Awerere
	{
		APlaneCollider::APlaneCollider(const RML::Vector3D normal, const RML::Vector3D emergencePoint)
			: m_Normal(normal), m_EmergencePoint(emergencePoint)
		{
		}

		APlaneCollider::~APlaneCollider()
		{
		}

		ACollideData APlaneCollider::tryIntersect(ASphereCollider & sphere)
		{
			RML::Vector3D slantGap = sphere.getCenter() - m_EmergencePoint;
			float gap = slantGap.multiplyDot(m_Normal.toUnitVector());

			return ACollideData(gap < sphere.getRadius(), gap - sphere.getRadius());
		}

		RML::Vector3D APlaneCollider::normalised(const RML::Vector3D & vector) const
		{
			float magnitude = vector.getLength();
			return vector / RML::Vector3D(magnitude, magnitude, magnitude);
		}
	}
}
