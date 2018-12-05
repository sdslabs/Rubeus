/**
 * @file		Include/awerere_collider_object.h.
 *
 * @brief	Declares the Collider class
 */

#pragma once

#include <rubeus_maths_library.h>
#include <awerere_physics_material.h>
#include <awerere_collide_data_object.h>
#include <sprite_object.h>

namespace Rubeus
{
	namespace Awerere
	{
		class ABoxCollider;
		class ASphereCollider;
		class APlaneCollider;

		/**
		 * @enum		EColliderType
		 *
		 * @brief	Specifiers for initialising different types of colliders
		 */
		enum class EColliderType
		{
			SPHERE = 0x1,           // 0x0001
			PLANE = 0x10,			// 0x0010
			BOX = 0x100,			// 0x0100
			NO_COLLIDER = 0x1000	// 0x1000
		};

		/**
		 * @class	ACollider
		 *
		 * @brief	A simple collider. Used to resolve collisions
		 */
		class ACollider
		{
		public:

			/** @brief	The central position of the collider */
			RML::Vector3D & m_Position;

			/** @brief	Momentum of the collider in 2D space */
			RML::Vector2D m_Momentum;

			/** @brief	The force being applied on this collider */
			RML::Vector2D m_Force;

			/** @brief	The physical constants describing the material of this collider */
			APhysicsMaterial m_PhysicsMaterial;

			/** @brief	Type of the collider */
			EColliderType m_Type;

			/** @brief	The sprite linked to this collider */
			GraphicComponents::RSprite * m_Sprite = NULL;

			/**
			 * @fn		ACollider()
			 *
			 * @brief	Contructor
			 */
			ACollider();

			/**
			 * @fn		ACollider(RML::Vector3D & position, const RML::Vector2D & velocity, const APhysicsMaterial & physicsMat = APhysicsMaterial::DefaultMaterial)
			 *
			 * @brief	Contructor
			 *
			 * @param	position		The position of the collider.
			 * @param	velocity		The velocity of the collider.
			 * @param	physicsMat	The physics material of this collider. Default is DefualtMaterial
			 */
			ACollider(RML::Vector3D & position, const RML::Vector2D & velocity, const APhysicsMaterial & physicsMat = APhysicsMaterial::DefaultMaterial);

			/**
			 * @fn		~ACollider()
			 *
			 * @brief	Destructor
			 */
			virtual ~ACollider();

			ACollideData tryIntersect(ACollider & collider);

			/**
			 * @fn		virtual ACollideData tryIntersect(ABoxCollider & box) = 0
			 *
			 * @brief	Query collision status with another box type collider
			 * @warning	Requires a 2D box collider
			 *
			 * @param	box	The box collider this collider is being queried with.
			 *
			 * @return	Collision data.
			 */
			virtual ACollideData tryIntersect(ABoxCollider & box) = 0;

			/**
			 * @fn		virtual ACollideData tryIntersect(ASphereCollider & sphere) = 0
			 *
			 * @brief	Query collision status with another sphere type collider
			 * @warning	Requires a 3D sphere collider (circle colliders will work too)
			 *
			 * @param	sphere	The sphere collider this collider is being queried with.
			 *
			 * @return	Collision data.
			 */
			virtual ACollideData tryIntersect(ASphereCollider & sphere) = 0;

			/**
			 * @fn		virtual ACollideData tryIntersect(APlaneCollider & plane) = 0
			 *
			 * @brief	Query collision status with another plane type collider
			 * @warning	Requires a 2D plane collider (straight line)
			 *
			 * @param	plane	The plane collider this collider is being queried with.
			 *
			 * @return	Collision data.
			 */
			virtual ACollideData tryIntersect(APlaneCollider & plane) = 0;

			/**
			 * @fn		void update(const float & deltaTime)
			 *
			 * @brief	Update the collider member positions
			 *
			 * @param	deltaTime	Time step taken.
			 */
			void update(const float & deltaTime);

			/**
			 * @fn		virtual void selfUpdate(float deltaX, float deltaY) = 0
			 *
			 * @brief	Update the collider position for members specific to a collider type
			 * @warning	Defined differently for each collider
			 *
			 * @param	deltaX	Change in X.
			 * @param	deltaY	Change in Y.
			 */
			virtual void selfUpdate(float deltaX, float deltaY) = 0;

			/**
			 * @fn		void addImpulse(RML::Vector2D & impulse)
			 *
			 * @brief	Add an impulse to this object
			 *
			 * @param	impulse	The impulse to be applied.
			 */
			void addImpulse(RML::Vector2D & impulse);

			/**
			 * @fn		inline RML::Vector3D getPosition() const
			 *
			 * @brief	Returns the position of this position
			 *
			 * @return	Position of this collider.
			 */
			inline RML::Vector3D getPosition() const { return m_Position; }

			/**
			 * @fn		inline RML::Vector2D getMomentum() const
			 *
			 * @brief	Returns the momentum of this position
			 *
			 * @return	Momentum of this collider.
			 */
			inline RML::Vector2D getMomentum() const { return m_Momentum; }

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
			 * @fn		inline void setMomentum(const RML::Vector2D & velocity)
			 *
			 * @brief	Set the momentum of this collider
			 *
			 * @param	momentum		The new momentum value.
			 */
			inline void setMomentum(const RML::Vector2D & momentum) { m_Momentum = momentum; }

			/**
			 * @fn		inline void setMaterial(const APhysicsMaterial & physicsMat)
			 *
			 * @brief	Set a custom physics material for this collider
			 *
			 * @param	physicsMat	The physics material to be used.
			 */
			inline void setMaterial(const APhysicsMaterial & physicsMat) { m_PhysicsMaterial = physicsMat; }

			/**
			 * @fn		inline void addForce(RML::Vector2D & force)
			 *
			 * @brief	Add a force on this collider
			 *
			 * @param	force	The force to be applied.
			 */
			inline void addForce(RML::Vector2D & force) { m_Force += force; }

			/**
			 * @fn		inline void addMomentum(RML::Vector2D & momentum)
			 *
			 * @brief	Add momentum to this collider
			 *
			 * @param	momentum	The momentum to be added.
			 */
			inline void addMomentum(RML::Vector2D & momentum) { m_Momentum += momentum; }
		};
	}
}
