/**
 * @file		Include/awerere_physics_engine.h.
 *
 * @brief	Declares the Physics Engine
 */

#pragma once

#include <vector>
#include <unordered_map>

#include <world.h>
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

			/** @brief	The container for all impulses added during a frame render */
			static std::unordered_map<ACollider *, RML::Vector2D> ImpulsesGeneratedPerImpulseCalculationFrame;

			/** @brief	The max amount of frames the impulse is added */
			static int ImpulseCalculationFrames;

			/** @brief	Number of frames the impulse have been added */
			static int ImpulseFrames;

			/**
			 * @fn		void updateState(const float & deltaTime)
			 *
			 * @brief	Generate hit events
			 *
			 * @param	The timestep for this update
			 */
			void updateState(const float & deltaTime);

			/**
			 * @fn		void decodeCollisionResponse()
			 *
			 * @brief	Respond to generated hit events
			 */
			void decodeCollisionResponse();

		public:

			/**
			 * @fn		APhysicsEngine(const GraphicComponents::RWindowComponent & windowComponent, const RWorld & world, const float & cellHeight, const float & cellWidth)
			 *
			 * @brief	Constructor
			 *
			 * @param	windowComponent	Window component currently in use.
			 * @param	world			The world instantiated in this run.
			 * @param	cellHeight		Cell height of collision grid.
			 * @param	cellWidth		Cell width of collision grid.
			 */
			APhysicsEngine(const GraphicComponents::RWindowComponent & windowComponent, const RWorld & world, const float & cellHeight, const float & cellWidth);

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
			 * @fn		void stopImpulses()
			 *
			 * @brief	Stops adding impulses and reverts those been added already to the scene
			 */
			void stopImpulses();

			/**
			 * @fn		void setWorld(RWorld & world)
			 *
			 * @brief	Set the world being used to be used in update
			 * @warning	Keep track of multiple gameObject arrays if active
			 *
			 * @param	world	World object in use.
			 */
			void setWorld(RWorld & world);

		protected:

		};
	}
}
