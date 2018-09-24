#include <awerere_physics_engine.h>

namespace Rubeus
{
	namespace Awerere
	{
		void APhysicsEngine::calculateCollisions()
		{
		}

		void APhysicsEngine::decodeCollisionResponse()
		{
		}

		APhysicsEngine::APhysicsEngine(std::vector<RGameObject *> * gameObjects)
		{
			m_CollisionEngine.m_Candidates = gameObjects;
		}

		APhysicsEngine::~APhysicsEngine()
		{
		}

		void APhysicsEngine::update(std::vector<RGameObject*>* gameObjects)
		{
		}
	}
}
