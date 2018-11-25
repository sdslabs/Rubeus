/**
 * @file		Include/awerere_collision_engine.h.
 *
 * @brief	Declares the collision engine
 */

#pragma once

#include <awerere_collision_grid.h>
#include <window_component.h>
#include <awerere_flag.h>
#include <awerere_hit_event_list.h>
#include <awerere_collide_data_object.h>

namespace Rubeus
{
	constexpr float FLOAT_APPROXIMATION = 0.00001f;

	class RGameObject;

	namespace Awerere
	{
		/**
		 * @class	ACollisionEngine
		 *
		 * @brief	The collision engine responsible for resolution of collisions and generating hit events.
		 */
		class ACollisionEngine
		{
		private:

			/** @brief	Collision grid required for broadphase */
			CollisionGrid m_CollisionGrid;

			/** @brief	Array of game objects to be checked for collision events */
			std::vector<RGameObject *> m_GameObjects;

			/** @brief	Array of grid unit flags across X axis for each game object */
			std::vector<AFlag> m_XFlags;

			/** @brief	Array of grid unit flags across Y axis for each game object */
			std::vector<AFlag> m_YFlags;

			friend class APhysicsEngine;

		public:

			/**
			 * @fn		ACollisionEngine(std::vector<RGameObject *> & gameObjects, const float & gridHeight, const float & gridWidth, const float & cellHeight, const float & cellWidth);
			 *
			 * @brief	Constructor
			 *
			 * @param	gameobjects	Reference to array of active gameobjects.
			 * @param	gridHeight	Height of collision grid.
			 * @param	gridWidth	Width of collision grid.
			 * @param	cellWidth	Width of collision grid cell.
			 * @param	cellWidth	Width of collision grid cell.
			 */
			ACollisionEngine(std::vector<RGameObject *> & gameObjects, const float & gridHeight, const float & gridWidth, const float & cellHeight, const float & cellWidth);

			/**
			 * @fn		~ACollisionEngine()
			 *
			 * @brief	Destructor
			 */
			~ACollisionEngine();

			/**
			 * @fn		void updateAndAssignFlags(const float & deltaTime)
			 *
			 * @brief	Assign grid flags for each game object
			 * @warning	Uses a 2D grid
			 *
			 * @param	The timestep for the update
			 */
			void updateAndAssignFlags(const float & deltaTime);

			void checkCollisions(const int & i);

			/**
			 * @fn		void collisionResolution()
			 *
			 * @brief	Attempt a broadphase resolution
			 */
			void collisionResolution();

			/**
			 * @fn		void narrowPhaseResolution(RGameObject & left, RGameObject & right)
			 *
			 * @brief	Attempt narrowphase resolution on positive results of braodphase resolution
			 *
			 * @param	left		The left argument.
			 * @param	right	The right argument.
			 */
			void narrowPhaseResolution(RGameObject & left, RGameObject & right);

			/**
			 * @fn		ACollideData multiplexColliders(ACollider * left, const EColliderType & leftType, ACollider * right, const EColliderType & rightType)
			 *
			 * @brief	Invoke collider specific collision algorithms on arguemnts based on the multiplexed collider type
			 * @warning	Select lines are EColliderType values
			 *
			 * @param	left			Left collider.
			 * @param	leftType		Type of Left collider.
			 * @param	right		Right collider.
			 * @param	rightType	Type of right collider.
			 *
			 * @return	Collision data.
			 */
			ACollideData multiplexColliders(ACollider * left, const EColliderType & leftType, ACollider * right, const EColliderType & rightType);

			/**
			 * @fn		inline void setWorld(std::vector<RGameObject *> gameObjects)
			 *
			 * @brief	Set the game object array for use in collision deteciton (if not already sent through the collision engine contructor)
			 *
			 * @param	gameObjects	The container with all the game objects.
			 */
			inline void setGameObjectArray(std::vector<RGameObject *> gameObjects) { m_GameObjects = gameObjects; }

		protected:

		};
	}
}
