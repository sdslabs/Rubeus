#include <awerere_collision_engine.h>

namespace Rubeus
{
	namespace Awerere
	{
		ACollisionEngine::ACollisionEngine(GraphicComponents::RWindowComponent & windowComponent, std::vector<RGameObject *> * gameObjects, const float & gridHeight, const float & gridWidth, const float & cellHeight, const float & cellWidth)
			:
			m_WindowComponent(windowComponent),
			m_CollisionGrid(gridHeight, gridWidth, cellHeight, cellWidth),
			m_GameObjects(gameObjects)
		{
		}

		ACollisionEngine::~ACollisionEngine()
		{
			delete m_FirstPassers;
		}

		void ACollisionEngine::executePhaseOne(std::vector<RGameObject *> * gameObjects)
		{
			size_t gameObjectsCount = m_GameObjects->size();

			for (int i = 0; i < gameObjectsCount; i++)
			{

				// https://gamedev.stackexchange.com/questions/72030/using-uniform-grids-for-collision-detection-efficient-way-to-keep-track-of-wha
			}
		}

		void ACollisionEngine::executePhaseTwo()
		{
		}

		void ACollisionEngine::eraseCache()
		{
			m_FirstPassers->clear();
		}
	}
}
