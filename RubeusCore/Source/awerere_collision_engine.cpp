#include <awerere_collision_engine.h>

namespace Rubeus
{
	namespace Awerere
	{
		ACollisionEngine::ACollisionEngine(std::vector<RGameObject *> & gameObjects, const float & gridHeight, const float & gridWidth, const float & cellHeight, const float & cellWidth)
			:
			m_CollisionGrid(9, 16, 1, 1),
			m_GameObjects(gameObjects)
		{
			size_t i = 0;
			while (i < m_GameObjects.size())
			{
				m_XFlags.push_back("");
				m_YFlags.push_back("");

				i++;
			}
		}

		ACollisionEngine::~ACollisionEngine()
		{
		}

		void ACollisionEngine::assignFlags()
		{
			size_t gameObjectsCount = m_GameObjects.size();

			for (int i = 0; i < gameObjectsCount; i++)
			{
				// X AXIS FLAGGING
				int leftFlag = m_GameObjects[i]->m_Sprite->getPosition().x / m_CollisionGrid.m_CellWidth;
				int rightFlag = (m_GameObjects[i]->m_Sprite->getPosition().x + m_GameObjects[i]->m_Sprite->getSize().x) / m_CollisionGrid.m_CellWidth;

				for (int p = 0; p < m_CollisionGrid.m_XCount; p++)
				{
					m_XFlags[i] += ((p >= leftFlag) && (p < rightFlag)) ? "1" : "0";
				}

				// Y AXIS FLAGGING
				leftFlag = m_GameObjects[i]->m_Sprite->getPosition().y / m_CollisionGrid.m_CellHeight;
				rightFlag = (m_GameObjects[i]->m_Sprite->getPosition().y + m_GameObjects[i]->m_Sprite->getSize().y) / m_CollisionGrid.m_CellHeight;

				for (int p = 0; p < m_CollisionGrid.m_YCount; p++)
				{
					m_YFlags[i] += ((p >= leftFlag) && (p < rightFlag)) ? "1" : "0";
				}

				// https://gamedev.stackexchange.com/questions/72030/using-uniform-grids-for-collision-detection-efficient-way-to-keep-track-of-wha
			}
		}

		AHitEventList ACollisionEngine::broadPhaseResolution()
		{
			for (auto XFlag : m_XFlags)
			{

			}

			return AHitEventList();
		}

		void ACollisionEngine::eraseCache()
		{
			m_FirstPassers.clear();
		}
	}
}
