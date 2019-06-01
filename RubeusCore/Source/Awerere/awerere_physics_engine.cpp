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
		std::unordered_map<ACollider *, RML::Vector2D> APhysicsEngine::ImpulsesGeneratedPerImpulseCalculationFrame;
		int APhysicsEngine::ImpulseCalculationFrames = 1;
		int APhysicsEngine::ImpulseFrames = 0;

		void APhysicsEngine::updateState(const float & deltaTime)
		{
			m_CollisionEngine.updateAndAssignFlags(deltaTime);
			m_CollisionEngine.collisionResolution();
		}

		void APhysicsEngine::decodeCollisionResponse()
		{
		}

		APhysicsEngine::APhysicsEngine(const GraphicComponents::RWindowComponent & windowComponent, const RWorld & world, const float & cellHeight, const float & cellWidth)
			:
			m_CollisionEngine(world.getActiveObjects(), (float)windowComponent.getHeight(), (float)windowComponent.getWidth(), cellHeight, cellWidth)
		{
			m_CollisionEngine.m_GameObjects = world.getActiveObjects();
		}

		APhysicsEngine::~APhysicsEngine()
		{
		}

		void APhysicsEngine::update(const float deltaTime)
		{
			if (ImpulseFrames > ImpulseCalculationFrames)
			{
				stopImpulses();
			}

			updateState(deltaTime);
		}

		void APhysicsEngine::stopImpulses()
		{
			for (auto & item : ImpulsesGeneratedPerImpulseCalculationFrame)
			{
				item.first->m_Momentum -= item.second;

				ImpulsesGeneratedPerImpulseCalculationFrame.erase(item.first);
			}
		}
	}
}
