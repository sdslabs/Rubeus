/**
 * @file		Include/awerere_plane_collider_object.h.
 *
 * @brief	Declares the Plane collider class
 */

#pragma once

#include <algorithm>

#include <rubeus_maths_library.h>
#include <awerere_collide_data_object.h>
#include <awerere_collider_object.h>

namespace Rubeus
{
	namespace Awerere
	{
		/**
		 * @class	APlaneCollider
		 *
		 * @brief	A 2D plane collider, equivalent to a straight line on a 2D screen.
		 */
		class APlaneCollider : public ACollider
		{
		private:
			/** @brief	Normal vector used to define a plane in 3D */
			mutable RML::Vector2D m_Normal;

			/** @brief	A fixed point through which the 2D plane plasses through */
			RML::Vector2D m_EmergencePoint;

		public:

			/**
			 * @fn		APlaneCollider(const RML::Vector3D & normal, RML::Vector3D & emergencePoint)
			 *
			 * @brief	Contructor
			 *
			 * @param	normal			The normal vector of the 2D plane.
			 * @param	emergencePoint	The fixed point through which the plane is defined.
			 */
			APlaneCollider(const RML::Vector2D & normal, RML::Vector2D & emergencePoint);

			/**
			 * @fn		~APlaneCollider()
			 *
			 * @brief	Destructor
			 */
			~APlaneCollider();

			/**
			 * @fn		void selfUpdate(float deltaX, float deltaY) override
			 *
			 * @brief	Update the emergencePoint with the parameters passed in
			 *
			 * @param	deltaX	The change in X position.
			 * @param	deltaY	The change in Y position.
			 */
			void selfUpdate(float deltaX, float deltaY) override;

			/**
			 * @fn		ACollideData tryIntersect(APlaneCollider & plane) override
			 *
			 * @brief	Generate collision data with a plane collider
			 *
			 * @param	plane	The plane collider to check collision with.
			 *
			 * @return	Collision data.
			 */
			ACollideData tryIntersect(APlaneCollider & plane) override;

			/**
			 * @fn		ACollideData tryIntersect(ASphereCollider & sphere) override
			 *
			 * @brief	Generate collision data with a sphere collider
			 *
			 * @param	sphere	The sphere collider to check collision with.
			 *
			 * @return	Collision data.
			 */
			ACollideData tryIntersect(ASphereCollider & sphere) override;

			/**
			 * @fn		ACollideData tryIntersect(ABoxCollider & box) override
			 *
			 * @brief	Generate collision data with a box collider
			 *
			 * @param	box	The box collider to check collision with.
			 *
			 * @return	Collision data.
			 */
			ACollideData tryIntersect(ABoxCollider & box) override;

			/**
			 * @fn		RML::Vector3D normalised(const RML::Vector3D & vector) const
			 *
			 * @brief	Normalise a vector by converting it into a unit vector
			 *
			 * @param	vector	The vector to normalise.
			 *
			 * @return	The normalised vector.
			 */
			RML::Vector3D normalised(const RML::Vector3D & vector) const;

			/**
			 * @fn		inline RML::Vector2D getNormal() const
			 *
			 * @brief	Returns the normal of this plane
			 *
			 * @return	The vector 2D normal.
			 */
			inline RML::Vector2D getNormal() const { return m_Normal; }

			/**
			 * @fn		inline RML::Vector2D getEmergencePoint() const
			 *
			 * @brief	Returns a fixed point on the plane
			 *
			 * @return	Position vector of the emergence point.
			 */
			inline RML::Vector2D getEmergencePoint() const { return m_EmergencePoint; }
		};
	}
}
