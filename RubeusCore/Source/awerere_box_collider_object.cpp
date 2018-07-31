#include <awerere_box_collider_object.h>

namespace Rubeus
{
	namespace Awerere
	{
		ABoxCollider::ABoxCollider(const RML::Vector3D minExtent, const RML::Vector3D maxExtent)
			: m_MinExtent(minExtent), m_MaxExtent(maxExtent)
		{
		}

		ABoxCollider::~ABoxCollider()
		{
		}

		ACollideData ABoxCollider::tryIntersect(const ABoxCollider & other)
		{
			RML::Vector3D gap1 = other.getLowerLeftBound() - m_MaxExtent;
			RML::Vector3D gap2 = m_MinExtent - other.getUpperRightBound();

			RML::Vector3D maxGap = gap1.maxVector(gap2);

			float maxDistance = maxGap.maxXYComponent();

			return ACollideData(maxDistance < 0, maxDistance);
		}
	}
}
