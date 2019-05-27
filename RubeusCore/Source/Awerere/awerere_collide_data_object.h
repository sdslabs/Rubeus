/**
 * @file		Include/awerere_collide_data_object.h.
 *
 * @brief	Declares the Collide data class
 */

#pragma once

#include <rubeus_maths_library.h>

namespace Rubeus
{
	namespace Awerere
	{
		/**
		 * @class	ACollideData
		 *
		 * @brief	A container holding information related to detected collisions.
		 */
		class ACollideData
		{
		private:

			/** @brief	Variable storing if the two colliders are intersecting */
			const bool m_IsIntersect;

			/** @brief	Variable storing the value of the gap between the two colliders.
						(is less than 0 if colliders are intersecting) */
			const float m_Gap;

			/** @brief	A Vector2D perpendicular to the colliding surfaces and lying in the collision plane */
			const RML::Vector2D m_CollisionNormal;

		public:

			/**
			 * @fn		ACollideData(const bool isIntersect, const float gap, const RML::Vector2D collisionNormal)
			 *
			 * @brief	Constructor
			 * @warning
			 *
			 * @param	isIntersect		Bool containing if the colliders are intersecting.
			 * @param	gap				The penetration distance of the collision.
			 * @param	collisionNormal	The normal vector of the collision
			 */
			ACollideData(const bool isIntersect, const float gap, const RML::Vector2D collisionNormal);

			/**
			 * @fn		~ACollideData()
			 *
			 * @brief	Destructor
			 */
			~ACollideData();

			/**
			 * @fn		inline const bool & getIsIntersect() const
			 *
			 * @brief	Returns if the colliders have intersected
			 *
			 * @return	The intersection boolean.
			 */
			inline const bool & getIsIntersect() const { return m_IsIntersect; }

			/**
			 * @fn		inline const float & getGap() const
			 *
			 * @brief	Returns the separation gap between the colliders
			 *
			 * @return	The gap in float.
			 */
			inline const float & getGap() const { return m_Gap; }

			/**
			 * @fn		inline const RML::Vector2D & getCollisionNormal() const
			 *
			 * @brief	Returns the collision normal
			 *
			 * @return	A Vector2D containing co-ordinates of the collision normal.
			 */
			inline const RML::Vector2D & getCollisionNormal() const { return m_CollisionNormal; }

		protected:
		};
	}
}
