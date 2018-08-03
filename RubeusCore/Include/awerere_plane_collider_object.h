#pragma once

<<<<<<< HEAD
<<<<<<< HEAD
#include <algorithm>

#include <rubeus_maths_library.h>
#include <awerere_collide_data_object.h>
#include <awerere_collider_object.h>
<<<<<<< HEAD
=======
=======
#include <algorithm>

>>>>>>> Add plane-box interaction
#include <rubeus_maths_library.h>
#include <awerere_collide_data_object.h>
>>>>>>> Add plane collider with sphere interactions
=======
>>>>>>> Add support for generalised collider class

namespace Rubeus
{
	namespace Awerere
	{
		class ASphereCollider;
<<<<<<< HEAD
<<<<<<< HEAD
		class ABoxCollider;

		class APlaneCollider : public ACollider
		{
		private:
			mutable RML::Vector3D m_Normal;
			RML::Vector3D m_EmergencePoint;

		public:
			APlaneCollider(const RML::Vector3D & normal, const RML::Vector3D & emergencePoint);
			~APlaneCollider();

			ACollideData tryIntersect(APlaneCollider & plane);
			ACollideData tryIntersect(ASphereCollider & sphere);
			ACollideData tryIntersect(ABoxCollider & box);

			RML::Vector3D normalised(const RML::Vector3D & vector) const;

			inline RML::Vector3D getNormal() const { return m_Normal; }
			inline RML::Vector3D getEmergencePoint() const { return m_EmergencePoint; }
=======
=======
		class ABoxCollider;

<<<<<<< HEAD
>>>>>>> Add plane-box interaction
		class APlaneCollider
=======
		class APlaneCollider : public ACollider
>>>>>>> Add support for generalised collider class
		{
		private:
			mutable RML::Vector3D m_Normal;
			RML::Vector3D m_EmergencePoint;

		public:
			APlaneCollider(const RML::Vector3D & normal, const RML::Vector3D & emergencePoint);
			~APlaneCollider();

			ACollideData tryIntersect(APlaneCollider & plane);
			ACollideData tryIntersect(ASphereCollider & sphere);
			ACollideData tryIntersect(ABoxCollider & box);

			RML::Vector3D normalised(const RML::Vector3D & vector) const;

<<<<<<< HEAD
			inline const RML::Vector3D & getNormal() const { return m_Normal; }
			inline const RML::Vector3D & getEmergencePoint() const { return m_EmergencePoint; }
>>>>>>> Add plane collider with sphere interactions
=======
			inline RML::Vector3D getNormal() const { return m_Normal; }
			inline RML::Vector3D getEmergencePoint() const { return m_EmergencePoint; }
>>>>>>> Add sphere-plane collision detection
		};
	}
}
