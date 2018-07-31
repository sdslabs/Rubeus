#pragma once

#include <rubeus_maths_library.h>
#include <awerere_collide_data_object.h>

namespace Rubeus
{
	namespace Awerere
	{
		class ASphereCollider;
		class APlaneCollider
		{
		private:
			mutable RML::Vector3D m_Normal;
			const RML::Vector3D m_EmergencePoint;

		public:
			APlaneCollider(const RML::Vector3D normal, const RML::Vector3D emergencePoint);
			~APlaneCollider();

			ACollideData tryIntersect(ASphereCollider & sphere);

			RML::Vector3D normalised(const RML::Vector3D & vector) const;

			inline RML::Vector3D getNormal() const { return m_Normal; }
			inline RML::Vector3D getEmergencePoint() const { return m_EmergencePoint; }
		};
	}
}
