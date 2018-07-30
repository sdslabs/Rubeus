#pragma once

#include <rubeus_maths_library.h>
#include <awerere_collide_data_object.h>
<<<<<<< HEAD
#include <awerere_collider_object.h>

=======
>>>>>>> Add sphere collider
namespace Rubeus
{
	namespace Awerere
	{
<<<<<<< HEAD
		class APlaneCollider;
		class ASphereCollider;

		class ABoxCollider : public ACollider
		{
		private:
			RML::Vector3D m_MinExtent;
			RML::Vector3D m_MaxExtent;

			RML::Vector3D calculateCenter(RML::Vector3D & ll, RML::Vector3D & ur);

		public:
			ABoxCollider(RML::Vector3D & minExtent, RML::Vector3D & maxExtent);
			~ABoxCollider();

			ACollideData tryIntersect(ABoxCollider & box);
			ACollideData tryIntersect(APlaneCollider & plane);
			ACollideData tryIntersect(ASphereCollider & sphere);

			inline const RML::Vector3D getLowerLeftBound() const { return m_MinExtent; }
			inline const RML::Vector3D getUpperRightBound() const { return m_MaxExtent; }
			inline RML::Vector3D getUpperLeftBound() const { return m_MaxExtent + RML::Vector3D(0, m_MaxExtent.y - m_MinExtent.y, 0); }
			inline RML::Vector3D getLowerRightBound() const { return m_MaxExtent + RML::Vector3D(m_MaxExtent.x - m_MinExtent.x, 0, 0); }
=======
		class ABoxCollider
		{
		private:
			const RML::Vector3D m_MinExtent;
			const RML::Vector3D m_MaxExtent;

		public:
			ABoxCollider(const RML::Vector3D minExtent, const RML::Vector3D maxExtent);
			~ABoxCollider();

			ACollideData tryIntersect(const ABoxCollider & other);

			inline const RML::Vector3D & getMinExtent() const { return m_MinExtent; }
			inline const RML::Vector3D & getMaxExtent() const { return m_MaxExtent; }
>>>>>>> Add sphere collider
		};
	}
}
