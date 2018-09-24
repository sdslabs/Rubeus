#include <awerere_physics_engine.h>

namespace Rubeus
{
	namespace Awerere
	{
		void APhysicsEngine::calculateCollisions()
		{
			m_CollisionEngine.executePhaseOne(m_GameObjects);
			m_CollisionEngine.executePhaseTwo();
		}

		void APhysicsEngine::decodeCollisionResponse()
		{
		}

		APhysicsEngine::APhysicsEngine(std::vector<RGameObject *> * gameObjects)
		{
			m_CollisionEngine.m_GameObjects = gameObjects;
			m_GameObjects = gameObjects;
		}

		APhysicsEngine::~APhysicsEngine()
		{
		}

		void APhysicsEngine::update(std::vector<RGameObject*> * gameObjects)
		{
		}
	}
}
