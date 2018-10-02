#include <awerere_collision_engine.h>

namespace Rubeus
{
	namespace Awerere
	{
		ACollisionEngine::ACollisionEngine(std::vector<RGameObject *> * gameObjects, const int & gridHeight, const int & gridWidth, const int & cellHeight, const int & cellWidth)
			:
			m_GameObjects(gameObjects),
			m_GridHeight(gridHeight),
			m_GridWidth(gridWidth),
			m_CellHeight(cellHeight),
			m_CellWidth(cellWidth)
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
