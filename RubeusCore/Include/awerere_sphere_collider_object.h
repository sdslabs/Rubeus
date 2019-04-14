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
		/**
		 * @class	ASphereCollider
		 *
		 * @brief	A Sphere Collider for handling spherical collisions.
		 */
		class ASphereCollider : public ACollider
		{
		private:
			/** @brief	Center of the sphere */
			RML::Vector2D & m_Center;

			/** @brief	Radius of the center */
			const float m_Radius;

		public:
			/**
			 * @fn		ASphereCollider(RML::Vector2D & center, const float radius)
			 *
			 * @brief	Contructor
			 *
			 * @param	center	Center of the sphere.
			 * @param	radius	Radius of the sphere.
			 *
			 */
			ASphereCollider(RML::Vector2D & center, const float radius);

			/**
			 * @fn		void selfUpdate(float deltaX, float deltaY) override
			 *
			 * @brief	Update the center with the parameters passed in
			 *
			 * @param	deltaX	The change in X position.
			 * @param	deltaY	The change in Y position.
			 */
			void selfUpdate(float deltaX, float deltaY) override;

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
			 * @fn		inline const RML::Vector2D & getCenter() const
			 *
			 * @brief	Returns the center of the sphere collider
			 *
			 * @return	Center of the sphere.
			 */
			inline const RML::Vector2D & getCenter() const { return m_Center; }

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
