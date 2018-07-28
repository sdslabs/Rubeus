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
	}
}
