/**
 * @file		Include/awerere_collider_object.h.
 *
 * @brief	Declares the Collider class
 */

#pragma once

#include <rubeus_maths_library.h>
#include <awerere_collider_object.h>

namespace Rubeus
{
	namespace Awerere
	{
		/**
		 * @enum		EColliderType
		 *
		 * @brief	Specifiers for initialising different types of colliders
		 */
		enum class EColliderType
		{
			SPHERE,
			PLANE,
			BOX,
			NO_COLLIDER
		};

		/**
		 * @class	ACollider
		 *
		 * @brief	A simple collider. Used to resolve collisions
		 */
		class ACollider
		{
		protected:

			/** @brief	The central position of the collider */
			RML::Vector3D m_Position;

			/** @brief	Velocity of the collider in 2D space */
			RML::Vector2D m_Velocity;

			/** @brief	Type of the collider */
			EColliderType m_Type;

		public:

			/**
			 * @fn		ACollider()
			 *
			 * @brief	Contructor
			 */
			ACollider();

			/**
			 * @fn		ACollider(RML::Vector3D position, RML::Vector2D velocity)
			 *
			 * @brief	Contructor
			 * @warning
			 *
			 * @param	position		The position of the collider.
			 * @param	velocity		The velocity of the collider.
			 */
			ACollider(RML::Vector3D position, RML::Vector2D velocity);

			/**
			 * @fn		~ACollider()
			 *
			 * @brief	Destructor
			 */
			virtual ~ACollider();

			/**
			 * @fn		inline RML::Vector3D getPosition() const
			 *
			 * @brief	Returns the position of this position
			 *
			 * @return	Position of this collider.
			 */
			inline RML::Vector3D getPosition() const { return m_Position; }

			/**
			 * @fn		inline RML::Vector2D getVelocity() const
			 *
			 * @brief	Returns the position of this position
			 *
			 * @return	Position of this collider.
			 */
			inline RML::Vector2D getVelocity() const { return m_Velocity; }

			/**
			 * @fn		inline EColliderType getType() const
			 *
			 * @brief	Returns the type of this collider
			 *
			 * @return	Type of this collider.
			 */
			inline EColliderType getType() const { return m_Type; }

			/**
			 * @fn		inline void setPosition(const RML::Vector3D & position)
			 *
			 * @brief	Set the position of this collider
			 *
			 * @param	position		The newer position value.
			 */
			inline void setPosition(const RML::Vector3D & position) { m_Position = position; }

			/**
			 * @fn		inline void setVelocity(const RML::Vector2D & velocity)
			 *
			 * @brief	Set the velocity of this collider
			 *
			 * @param	velocity		The new velocity value.
			 */
			inline void setVelocity(const RML::Vector2D & velocity) { m_Velocity = velocity; }
		};
	}
}