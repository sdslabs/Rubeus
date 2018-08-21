/**
 * @file		Include/awerere_physics_material.h.
 *
 * @brief	Declares the Physics Material structure
 */

#pragma once

namespace Rubeus
{
	namespace Awerere
	{
#define DEFAULT_MASS       10.0f // kg
#define DEFAULT_GRAVITY     9.8f // m/s^2
#define DEFAULT_FRICTION    0.2f // [no units]
#define DEFAULT_RESTITUTION 0.8f // [no units]

		/**
		 * @struct	APhysicsMaterial
		 *
		 * @brief	A physics material used to characterise physics objects
		 */
		struct APhysicsMaterial
		{
			/** @brief	Whether enables collision for this type of material or not */
			bool m_EnableCollision;

			/** @brief	Value of mass of this physics object */
			float m_Mass;

			/** @brief	Value of gravity acting on a physics object */
			float m_Gravity;

			/** @brief	Coefficient of friction of this physics material */
			float m_CoefficientOfFriction;

			/** @brief	Coefficient of restitution of this physics material */
			float m_CoefficientOfRestitution;

			/**
			 * @fn		APhysicsMaterial()
			 *
			 * @brief	Constructor
			 */
			APhysicsMaterial();

			/**
			 * @fn		~APhysicsMaterial()
			 *
			 * @brief	Destructor
			 */
			~APhysicsMaterial();

			/**
			 * @fn		void makeMaterial(float mass, float gravity, float friction, float restitution)
			 *
			 * @brief	Make a material with by specifying physics constants
			 *
			 * @param	mass			Mass of the material.
			 * @param	gravity		Gravity acting on the physics object.
			 * @param	friction		Friction coefficient of the surfaces.
			 * @param	restitution	Restitution coefficient for resolving collisions.
			 */
			void makeMaterial(float mass, float gravity, float friction, float restitution);

			/**
			 * @fn		inline bool getCollision() const
			 *
			 * @brief	Returns if the material has collision enabled
			 *
			 * @return	Whether collision has been enabled.
			 */
			inline bool getCollision() const { return m_EnableCollision; }

			/**
			 * @fn		inline void setCollision(bool override = false)
			 *
			 * @brief	Sets the collision parameter
			 *
			 * @param	override New collision value.
			 *
			 */
			inline void setCollision(bool override = false) { m_EnableCollision = override; }
		};
	}
}
