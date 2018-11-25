/**
 * @file		Source/awerere_collision_engine.cpp.
 *
 * @brief	Defines the Collision Engine
 */

#include <game_object.h>
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
				m_XFlags.push_back(AFlag(m_CollisionGrid.m_XCount));

				i++;
			}

			i = 0;
			while (i < m_GameObjects.size())
			{
				m_YFlags.push_back(AFlag(m_CollisionGrid.m_YCount));

				i++;
			}
		}

		ACollisionEngine::~ACollisionEngine()
		{
		}

		void ACollisionEngine::updateAndAssignFlags(const float & deltaTime)
		{
			size_t gameObjectsCount = m_GameObjects.size();

			for (int i = 0; i < gameObjectsCount; i++)
			{
				if (m_GameObjects[i]->m_HasPhysics)
				{
					m_GameObjects[i]->m_PhysicsObject->m_Collider->update(deltaTime);
				}

				checkCollisions(i);
			}
		}

		void ACollisionEngine::checkCollisions(const int & i)
		{
			// X AXIS FLAGGING
			int leftFlag = m_GameObjects[i]->m_PhysicsObject->m_Collider->getPosition().x / m_CollisionGrid.m_CellWidth;
			int rightFlag = (m_GameObjects[i]->m_PhysicsObject->m_Collider->getPosition().x + m_GameObjects[i]->m_Sprite->getSize().x) / m_CollisionGrid.m_CellWidth;

			for (int p = 0; p < m_CollisionGrid.m_XCount; p++)
			{
				m_XFlags[i].m_Data[p] = ((p >= leftFlag) && (p <= rightFlag)) ? true : false;
			}

			// Y AXIS FLAGGING
			leftFlag = m_GameObjects[i]->m_PhysicsObject->m_Collider->getPosition().y / m_CollisionGrid.m_CellHeight;
			rightFlag = (m_GameObjects[i]->m_PhysicsObject->m_Collider->getPosition().y + m_GameObjects[i]->m_Sprite->getSize().y) / m_CollisionGrid.m_CellHeight;

			for (int p = 0; p < m_CollisionGrid.m_YCount; p++)
			{
				m_YFlags[i].m_Data[p] = ((p >= leftFlag) && (p <= rightFlag)) ? true : false;
			}

			// https://gamedev.stackexchange.com/questions/72030/using-uniform-grids-for-collision-detection-efficient-way-to-keep-track-of-wha
		}

		void ACollisionEngine::collisionResolution()
		{
			for (int i = 0; i < m_GameObjects.size(); i++)
			{
				for (int j = i + 1; j < m_GameObjects.size(); j++)
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
			auto cache = multiplexColliders(left.m_PhysicsObject->m_Collider,
											left.m_PhysicsObject->m_Collider->getType(),
											right.m_PhysicsObject->m_Collider,
											right.m_PhysicsObject->m_Collider->getType());

			if (cache.getIsIntersect() == true)
			{
				LOG("HIT");
				// Record the relative coefficient of restitution
				float e = min(left.m_PhysicsObject->m_Collider->m_PhysicsMaterial.m_CoefficientOfRestitution, right.m_PhysicsObject->m_Collider->m_PhysicsMaterial.m_CoefficientOfRestitution);
				float mu = min(left.m_PhysicsObject->m_Collider->m_PhysicsMaterial.m_CoefficientOfFriction, right.m_PhysicsObject->m_Collider->m_PhysicsMaterial.m_CoefficientOfFriction);

				// Store temporary variables
				float m1 = left.m_PhysicsObject->m_PhysicsMaterial.m_Mass;
				float m2 = right.m_PhysicsObject->m_PhysicsMaterial.m_Mass;

				RML::Vector2D normal = cache.getCollisionNormal();
				normal.toUnitVector();

				RML::Vector2D v1 = left.m_PhysicsObject->m_Collider->m_Momentum * (1.0f / m1);
				RML::Vector2D v2 = right.m_PhysicsObject->m_Collider->m_Momentum * (1.0f / m2);

				RML::Vector2D v1_perp = normal * v1.multiplyDot(normal);
				RML::Vector2D v1_parallel = v1 - v1_perp;

				RML::Vector2D v2_perp = normal * v2.multiplyDot(normal);
				RML::Vector2D v2_parallel = v2 - v2_perp;

				RML::Vector2D v1_perpFinal;
				RML::Vector2D v2_perpFinal;

				if (m1 != m2)
				{
					v1_perpFinal = (v1_perp * m1 - v2_perp * m2 - (v1_perp - v2_perp) * e * m2) * (1.0f / (m2 - m1));
					v2_perpFinal = (v1_perp * m1 - v2_perp * m2 - (v1_perp - v2_perp) * e * m1) * (1.0f / (m2 - m1));

				}
				else
				{
					v1_perpFinal = v2_perp * e;
					v2_perpFinal = v1_perp * e;
				}

				// Set the final values in the objects


				// Call user-defined hit response
				left.onHit(&left, &right, cache);
			}
		}

		ACollideData ACollisionEngine::multiplexColliders(ACollider * left, const EColliderType & leftType, ACollider * right, const EColliderType & rightType)
		{
			switch ((int)leftType | (int)rightType)
			{
				// Collider types are as follows:
				//
				// SPHERE      = 0x0001,       
				// PLANE       = 0x0010,		
				// BOX         = 0x0100,		
				// NO_COLLIDER = 0x1000

				case 0x0001:
					return left->tryIntersect(*(ASphereCollider *)right);
					break;

				case 0x0010:
					return left->tryIntersect(*(APlaneCollider *)right);
					break;

				case 0x0100:
					return left->tryIntersect(*(ABoxCollider *)right);

				case 0x0011:
					return left->tryIntersect(*(APlaneCollider *)right);

				case 0x0101:
					return left->tryIntersect(*(ABoxCollider *)right);

				case 0x0110:
					return left->tryIntersect(*(APlaneCollider *)right);

				case 0x1001:
					return ACollideData(false, 0, RML::Vector2D()); // No collider

				case 0x1000:
					return ACollideData(false, 0, RML::Vector2D()); // No collider

				case 0x1010:
					return ACollideData(false, 0, RML::Vector2D()); // No collider

				case 0x1100:
					return ACollideData(false, 0, RML::Vector2D()); // No collider

				default:
					ERRORLOG("Fatal error: Unknown collider type found");
					break;
			}

			return ACollideData(false, 0, RML::Vector2D());
		}
	}
}
