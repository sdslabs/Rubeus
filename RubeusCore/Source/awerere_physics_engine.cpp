#include <awerere_physics_engine.h>

namespace Rubeus
{
	namespace Awerere
	{
		void APhysicsEngine::calculateCollisions()
		{
			m_CollisionEngine.assignFlags();
			m_CollisionEngine.executePhaseTwo();
		}

		void APhysicsEngine::decodeCollisionResponse()
		{
		}

		APhysicsEngine::APhysicsEngine(GraphicComponents::RWindowComponent * windowComponent, std::vector<RGameObject *> * gameObjects, const float & cellHeight, const float & cellWidth)
			:
			m_CollisionEngine(*windowComponent, gameObjects, windowComponent->getHeight(), windowComponent->getWidth(), cellHeight, cellWidth)
		{
			m_CollisionEngine.m_GameObjects = gameObjects;
			m_GameObjects = gameObjects;

			m_XFlags.reserve(m_GameObjects->size());
			m_YFlags.reserve(m_GameObjects->size());
		}

		APhysicsEngine::~APhysicsEngine()
		{
		}

		void APhysicsEngine::setGameObjectArray(std::vector<RGameObject *> * gameObjects)
		{
			m_GameObjects = gameObjects;
		}

		void APhysicsEngine::update(const float deltaTime)
		{

		}
	}
}
