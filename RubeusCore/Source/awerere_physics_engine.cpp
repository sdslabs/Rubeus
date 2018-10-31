/**
 * @file		Include/awerere_physics_engine.cpp.
 *
 * @brief	Defines the Awerere Physics Engine
 */

#include <awerere_physics_engine.h>
#include <game_object.h>

namespace Rubeus
{
	namespace Awerere
	{
		void APhysicsEngine::updateState(const float & deltaTime)
		{
			m_CollisionEngine.updateAndAssignFlags(deltaTime);
			m_CollisionEngine.collisionResolution();
		}

		void APhysicsEngine::decodeCollisionResponse()
		{
		}

		APhysicsEngine::APhysicsEngine(GraphicComponents::RWindowComponent & windowComponent, RWorld & world, const float & cellHeight, const float & cellWidth)
			:
			m_CollisionEngine(world.getActiveObjects(), windowComponent.getHeight(), windowComponent.getWidth(), cellHeight, cellWidth),
			m_World(world)
		{
			m_CollisionEngine.m_GameObjects = world.getActiveObjects();

			m_XFlags.reserve(world.getActiveObjects().size());
			m_YFlags.reserve(world.getActiveObjects().size());
		}

		APhysicsEngine::~APhysicsEngine()
		{
		}

		void APhysicsEngine::setWorld(RWorld & world)
		{
			m_World = world;
		}

		void APhysicsEngine::update(const float deltaTime)
		{
			updateState(deltaTime);
		}
	}
}
