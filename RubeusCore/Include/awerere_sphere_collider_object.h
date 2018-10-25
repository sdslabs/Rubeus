/**
 * @file		Include/awerere_sphere_collider_object.h.
 *
 * @brief	Declares the Sphere Collider class
 */

#pragma once

#include <rubeus_maths_library.h>
#include <awerere_collide_data_object.h>
#include <awerere_collider_object.h>

namespace Rubeus
{
	namespace Awerere
	{
		class APlaneCollider;
		class ABoxCollider;

		/**
		 * @class	ASphereCollider
		 *
		 * @brief	A Sphere Collider for handling spherical collisions.
		 */
		class ASphereCollider : public ACollider
		{
		private:
			/** @brief	Center of the sphere */
			const RML::Vector3D m_Center;

			/** @brief	Radius of the center */
			const float m_Radius;

		public:
			/**
			 * @fn		ASphereCollider(const RML::Vector3D & center, const float radius)
			 *
			 * @brief	Contructor
			 *
			 * @param	center	Center of the sphere.
			 * @param	radius	Radius of the sphere.
			 *
			 */
			ASphereCollider(const RML::Vector3D & center, const float radius);

			/**
			 * @fn		ACollideData tryIntersect(ASphereCollider & other) override
			 *
			 * @brief	Generate collision data with a sphere collider
			 *
			 * @param	other	The other sphere collider.
			 *
			 * @return	Collision data.
			 */
			ACollideData tryIntersect(ASphereCollider & other) override;

			/**
			 * @fn		ACollideData tryIntersect(APLaneCollider & plane) override
			 *
			 * @brief	Generate collision data with a plane collider
			 *
			 * @param	plane	The plane collider.
			 *
			 * @return	Collision data.
			 */
			ACollideData tryIntersect(APlaneCollider & plane) override;

			/**
			 * @fn		ACollideData tryIntersect(ABoxCollider & box) override
			 *
			 * @brief	Generate collision data with a box collider
			 *
			 * @param	box	The box collider.
			 *
			 * @return	Collision data.
			 */
			ACollideData tryIntersect(ABoxCollider & box) override;

			/**
			 * @fn		inline const RML::Vector3D & getCenter() const
			 *
			 * @brief	Returns the center of the sphere collider
			 *
			 * @return	Center of the sphere.
			 */
			inline const RML::Vector3D & getCenter() const { return m_Center; }

			/**
			 * @fn		inline const float & getRadius() const
			 *
			 * @brief	Returns the radius of the sphere collider
			 *
			 * @return	Radius of the sphere.
			 */
			inline const float & getRadius() const { return m_Radius; }
		};
	}
}
