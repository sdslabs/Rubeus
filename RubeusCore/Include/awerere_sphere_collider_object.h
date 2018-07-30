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
		class ABoxCollider;

		class ASphereCollider : public ACollider
=======
		class ASphereCollider
>>>>>>> Add sphere collider
		{
		private:
			const RML::Vector3D m_Center;
			const float m_Radius;

		public:
			ASphereCollider(const RML::Vector3D & center, const float radius);

			ACollideData tryIntersect(ASphereCollider & other);
<<<<<<< HEAD
			ACollideData tryIntersect(APlaneCollider & plane);
			ACollideData tryIntersect(ABoxCollider & box);
=======
>>>>>>> Add sphere collider

			inline const RML::Vector3D & getCenter() { return m_Center; }
			inline const float & getRadius() { return m_Radius; }
		};
	}
}
