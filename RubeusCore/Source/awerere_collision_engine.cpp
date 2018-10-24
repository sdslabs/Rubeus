#include <awerere_collision_engine.h>
#include <awerere_box_collider_object.h>
#include <awerere_sphere_collider_object.h>
#include <awerere_plane_collider_object.h>

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
				m_XFlags.push_back(AFlag(""));
				m_YFlags.push_back(AFlag(""));

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

		void ACollisionEngine::broadPhaseResolution()
		{
			for (int i = 0; i < m_GameObjects.size(); i++)
			{
				for (int j = i; j < m_GameObjects.size(); j++)
				{
					if ((m_XFlags[i] * m_XFlags[j]) && (m_YFlags[i] * m_YFlags[j]))
					{
						narrowPhaseResolution(m_GameObjects[i], m_GameObjects[i]->m_PhysicsObject->m_Collider->getType(),
											  m_GameObjects[j], m_GameObjects[j]->m_PhysicsObject->m_Collider->getType());
					}
				}
			}
		}

		void ACollisionEngine::narrowPhaseResolution(RGameObject * p1, EColliderType type1, RGameObject * p2, EColliderType type2)
		{
			switch (type1)
			{
			case EColliderType::BOX:
			{
				//reinterpret_cast<ABoxCollider *>(p2)
			}
			break;
			case EColliderType::PLANE:
				break;
			case EColliderType::SPHERE:
				break;
			case EColliderType::NO_COLLIDER:
			}
		}

		void ACollisionEngine::eraseCache()
		{
			m_FirstPassers.clear();
		}
	}
}
