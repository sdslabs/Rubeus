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
				m_XFlags[i].m_Data[p] = ((p >= leftFlag) && (p < rightFlag)) ? true : false;
			}

			// Y AXIS FLAGGING
			leftFlag = m_GameObjects[i]->m_PhysicsObject->m_Collider->getPosition().y / m_CollisionGrid.m_CellHeight;
			rightFlag = (m_GameObjects[i]->m_PhysicsObject->m_Collider->getPosition().y + m_GameObjects[i]->m_Sprite->getSize().y) / m_CollisionGrid.m_CellHeight;

			for (int p = 0; p < m_CollisionGrid.m_YCount; p++)
			{
				m_YFlags[i].m_Data[p] = ((p >= leftFlag) && (p < rightFlag)) ? true : false;
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

				// Store temporary variables
				float m1 = left.m_PhysicsObject->m_PhysicsMaterial.m_Mass;
				float m2 = right.m_PhysicsObject->m_PhysicsMaterial.m_Mass;

				float v1x = left.m_PhysicsObject->m_Collider->m_Momentum.x / m1;
				float v2x = right.m_PhysicsObject->m_Collider->m_Momentum.x / m2;

				float v1y = left.m_PhysicsObject->m_Collider->m_Momentum.y / m1;
				float v2y = right.m_PhysicsObject->m_Collider->m_Momentum.y / m2;

				// Calculate the final velocities
				float v1xFinal = 1.0f;
				float v2xFinal = 1.0f;

				float v1yFinal = v1y;
				float v2yFinal = v2y;

				if (m1 != m2)
				{
					v1xFinal = (m1 * v1x - m2 * v2x - e * m2 * (v1x - v2x)) / (m2 - m1);
					v2xFinal = ((m1 * v1x - m2 * v2x - e * m1 * (v1x - v2x))) / (m2 - m1);
				}
				else
				{
					v1xFinal = v2x;
					v2xFinal = v1x;
				}

				// Set the final values in the objects
				left.m_PhysicsObject->m_Collider->m_Momentum.x = m1 * v1xFinal;
				left.m_PhysicsObject->m_Collider->m_Momentum.y = m1 * v1yFinal;

				right.m_PhysicsObject->m_Collider->m_Momentum.x = m2 * v2xFinal;
				right.m_PhysicsObject->m_Collider->m_Momentum.y = m2 * v2yFinal;

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

		void ACollisionEngine::respondToCollidedObjects(RGameObject * left, RGameObject * right)
		{
			float e = min(left->m_PhysicsObject->m_PhysicsMaterial.m_CoefficientOfRestitution, right->m_PhysicsObject->m_PhysicsMaterial.m_CoefficientOfRestitution);

			if (e == 0.0f + FLOAT_APPROXIMATION)
			{
				left->m_PhysicsObject->m_Collider->setMomentum(RML::Vector2D(0.0f, 0.0f));
				right->m_PhysicsObject->m_Collider->setMomentum(RML::Vector2D(0.0f, 0.0f));

				return;
			}

			if (e == 1.0f + FLOAT_APPROXIMATION)
			{
				// Add things here
			}

			// Add collision response rules for non-elastic collisions

		}
	}
}
