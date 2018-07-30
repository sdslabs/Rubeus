#pragma once

#include <rubeus_maths_library.h>
#include <awerere_collide_data_object.h>
namespace Rubeus
{
	namespace Awerere
	{
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
		};
	}
}
