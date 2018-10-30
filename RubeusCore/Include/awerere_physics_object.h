/**
 * @file		Include/awerere_physics_object.cpp.
 *
 * @brief	Declares the Physics Object class
 */

#pragma once

#include <vector>

#include <rubeus_maths_library.h>
#include <awerere_physics_material.h>
#include <awerere_collider_object.h>

namespace Rubeus
{
	namespace Awerere
	{
		/**
		 * @class	APhysicsObject
		 *
		 * @brief	A Physics Object that is used for all collision detection and responses
		 */
		class APhysicsObject
		{
		public:
			/** @brief	Physics Material defining a physics object */
			APhysicsMaterial m_PhysicsMaterial;

			/** @brief	A collider in charge of handling collision algorithms */
			ACollider * m_Collider;

			/** @brief	Whether physics should be enabled for a game object */
			bool m_EnablePhysics = false;

			/**
			 * @fn		APhysicsObject()
			 *
			 * @brief	Constructor. Applies default values.
			 */
			APhysicsObject();

			/**
			 * @fn		APhysicsObject(const APhysicsMaterial & material, const bool & enablePhysics = false, const EColliderType & type = EColliderType::NO_COLLIDER, ACollider * collider = NULL)
			 *
			 * @brief	Generates a physics object for linking within a game object
			 *
			 * @param	material		Material to be used by the physics object.
			 * @param	enablePhysics	Whether physics should be enabled for the game object. Default is false
			 * @param	type			Type of collider to be used. Default is NO_COLLIDER
			 * @param	collider		Collider object to be used. Default is NULL
			 */
			APhysicsObject(const APhysicsMaterial & material, const bool & enablePhysics = false, const EColliderType & type = EColliderType::NO_COLLIDER, ACollider * collider = NULL);

			/**
			 * @fn		~APhysicsObject()
			 *
			 * @brief	Destructor
			 */
			~APhysicsObject();
		};
	}
}
