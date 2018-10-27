/**
 * @file		Include/awerere_physics_engine.h.
 *
 * @brief	Declares the Physics Engine
 */

#pragma once

#include <vector>

#include <game_object.h>
#include <awerere_collision_engine.h>
#include <awerere_collision_grid.h>

namespace Rubeus
{
	namespace Awerere
	{
		/**
		 * @class	APhysicsEngine
		 *
		 * @brief	Apply physics behaviours to gameobjects.
		 */
		class APhysicsEngine
		{
		private:

			/** @brief	Associated collision engine */
			ACollisionEngine m_CollisionEngine;

			/** @brief	Array of active gameobjects */
			std::vector<RGameObject *> m_GameObjects;

			/** @brief	Array of collision Xflags assigned to each gameobject */
			std::vector<std::string> m_XFlags;

			/** @brief	Array of collision Yflags assigned to each gameobject */
			std::vector<std::string> m_YFlags;

			/**
			 * @fn		void calculateCollisions()
			 *
			 * @brief	Generate hit events
			 */
			void calculateCollisions();

			/**
			 * @fn		void decodeCollisionResponse()
			 *
			 * @brief	Respond to generated hit events
			 */
			void decodeCollisionResponse();

		public:

			/**
			 * @fn		APhysicsEngine(GraphicComponents::RWindowComponent & windowComponent, std::vector<RGameObject *> & gameObjects, const float & cellHeight, const float & cellWidth)
			 *
			 * @brief	Constructor
			 *
			 * @param	windowComponent	Window component currently in use.
			 * @param	gameObjects	Array of all active gameobjects pointers.
			 * @param	cellHeight	Cell height of collision grid.
			 * @param	cellWidth	Cell width of collision grid.
			 */
			APhysicsEngine(GraphicComponents::RWindowComponent & windowComponent, std::vector<RGameObject *> & gameObjects, const float & cellHeight, const float & cellWidth);

			/**
			 * @fn		~APhysicsEngine()
			 *
			 * @brief	Destructor
			 */
			~APhysicsEngine();

			/**
			 * @fn		void update(const float deltaTime)
			 *
			 * @brief	Carry-out frame wise physics update to world
			 *
			 * @param	deltaTime	Time passed since last update.
			 */
			void update(const float deltaTime);

			/**
			 * @fn		void setGameObjectArray(std::vector<RGameObject *> & gameObjects)
			 *
			 * @brief	Set the game objects array to be used in update
			 * @warning	Keep track of multiple gameObject arrays if active
			 *
			 * @param	gameObjects	Array of new gameObjects.
			 */
			void setGameObjectArray(std::vector<RGameObject *> & gameObjects);

		protected:

		};
	}
}
