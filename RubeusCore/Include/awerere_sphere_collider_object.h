#pragma once

#include <rubeus_maths_library.h>
#include <awerere_collide_data_object.h>

namespace Rubeus
{
	namespace Awerere
	{
		class APlaneCollider;

		class ASphereCollider
		{
		private:
			const RML::Vector3D m_Center;
			const float m_Radius;

		public:
			ASphereCollider(const RML::Vector3D & center, const float radius);

			ACollideData tryIntersect(ASphereCollider & other);
			ACollideData tryIntersect(APlaneCollider & plane);

			inline const RML::Vector3D & getCenter() { return m_Center; }
			inline const float & getRadius() { return m_Radius; }
		};
	}
}
