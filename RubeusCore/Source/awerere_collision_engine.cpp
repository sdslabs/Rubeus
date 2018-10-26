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
						narrowPhaseResolution(*m_GameObjects[i], *m_GameObjects[j]);

					}
				}
			}
		}

		void ACollisionEngine::narrowPhaseResolution(RGameObject & left, RGameObject & right)
		{
			left.m_PhysicsObject->m_Collider->getType
		}

		void ACollisionEngine::multiplexColliders(ACollider * left, EColliderType & leftType, ACollider * right, EColliderType & rightType)
		{
			switch ((int)leftType + (int)rightType)
			{
				// Collider types are as follows:
				//
				// SPHERE = 0x0001,       
				// PLANE = 0x0010,		
				// BOX = 0x0100,		
				// NO_COLLIDER = 0x1000

				case 0x0001:
					left->tryIntersect(*(ASphereCollider *)right);
					break;

				case 0x0010:
					left->tryIntersect(*(APlaneCollider *)right);
					break;

				case 0x0100:
					left->tryIntersect(*(ABoxCollider *)right);
					break;

				case 0x0011:
					left->tryIntersect(*(APlaneCollider *)right);
					break;

				case 0x0101:
					left->tryIntersect(*(ABoxCollider *)right);
					break;

				case 0x0110:
					left->tryIntersect(*(APlaneCollider *)right);
					break;

				case 0x1001:
					; // No collider
					break;

				case 0x1000:
					; // No collider
					break;

				case 0x1010:
					; // No collider
					break;

				case 0x1100:
					; // No collider
					break;

				default:
					ERRORLOG("Fatal error: Unknown collider type found");
					break;
			}
		}

		void ACollisionEngine::eraseCache()
		{
			m_FirstPassers.clear();
		}
	}
}
