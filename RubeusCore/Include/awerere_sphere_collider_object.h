#pragma once

#include <rubeus_maths_library.h>
#include <awerere_collide_data_object.h>
<<<<<<< HEAD
<<<<<<< HEAD
#include <awerere_collider_object.h>
=======
>>>>>>> Add sphere collider
=======
#include <awerere_collider_object.h>
>>>>>>> Add support for generalised collider class

namespace Rubeus
{
	namespace Awerere
	{
<<<<<<< HEAD
<<<<<<< HEAD
		class APlaneCollider;
		class ABoxCollider;

		class ASphereCollider : public ACollider
<<<<<<< HEAD
=======
=======
		class APlaneCollider;

>>>>>>> Add plane-plane interaction
		class ASphereCollider
>>>>>>> Add sphere collider
=======
>>>>>>> Add support for generalised collider class
		{
		private:
			const RML::Vector3D m_Center;
			const float m_Radius;

		public:
			ASphereCollider(const RML::Vector3D & center, const float radius);

			ACollideData tryIntersect(ASphereCollider & other);
<<<<<<< HEAD
<<<<<<< HEAD
			ACollideData tryIntersect(APlaneCollider & plane);
			ACollideData tryIntersect(ABoxCollider & box);
=======
>>>>>>> Add sphere collider
=======
			ACollideData tryIntersect(APlaneCollider & plane);
<<<<<<< HEAD
>>>>>>> Add plane-plane interaction
=======
			ACollideData tryIntersect(ABoxCollider & box);
>>>>>>> Add box and sphere interaction

			inline const RML::Vector3D & getCenter() { return m_Center; }
			inline const float & getRadius() { return m_Radius; }
		};
	}
}
