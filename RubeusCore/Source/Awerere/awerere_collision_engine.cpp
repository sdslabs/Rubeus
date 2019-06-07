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
		ACollisionEngine::ACollisionEngine(const std::vector<RGameObject *> & gameObjects, const float & gridHeight, const float & gridWidth, const float & cellHeight, const float & cellWidth)
			:
			m_CollisionGrid(9, 16, 1, 1),
			m_GameObjects(const_cast<std::vector<RGameObject *> *>(&gameObjects))
		{
			size_t i = 0;
			while (i < m_GameObjects->size())
			{
				m_XFlags.push_back(new AFlag((int)m_CollisionGrid.m_XCount));

				i++;
			}

			i = 0;
			while (i < m_GameObjects->size())
			{
				m_YFlags.push_back(new AFlag((int)m_CollisionGrid.m_YCount));

				i++;
			}
		}

		ACollisionEngine::~ACollisionEngine()
		{
			for (auto * item : m_XFlags)
			{
				delete item;
			}

			for (auto * item : m_YFlags)
			{
				delete item;
			}
		}

		void ACollisionEngine::updateAndAssignFlags(const float & deltaTime)
		{
			size_t gameObjectsCount = m_GameObjects->size();

			for (size_t i = 0; i < gameObjectsCount; i++)
			{
				if ((*m_GameObjects)[i]->m_PhysicsObject != NULL)
				{
					(*m_GameObjects)[i]->m_PhysicsObject->m_Collider->update(deltaTime);
				}

				checkCollisions(i);
			}
		}

		void ACollisionEngine::checkCollisions(const int & i)
		{
			int leftFlag;
			int rightFlag;

			// X AXIS FLAGGING
			if ((*m_GameObjects)[i]->m_HasPhysics == true)
			{
				leftFlag = (int)(*m_GameObjects)[i]->m_PhysicsObject->m_Collider->getPosition().x / m_CollisionGrid.m_CellWidth;
				rightFlag = (int)((*m_GameObjects)[i]->m_PhysicsObject->m_Collider->getPosition().x + (*m_GameObjects)[i]->m_Sprite->getSize().x) / m_CollisionGrid.m_CellWidth;
			}
			else
			{
				leftFlag = (int)(*m_GameObjects)[i]->m_Sprite->getPosition().x / m_CollisionGrid.m_CellWidth;
				rightFlag = (int)((*m_GameObjects)[i]->m_Sprite->getPosition().x + (*m_GameObjects)[i]->m_Sprite->getSize().x) / m_CollisionGrid.m_CellWidth;
			}

			for (int p = 0; p < m_CollisionGrid.m_XCount; p++)
			{
				m_XFlags[i]->m_Data[p] = ((p >= leftFlag) && (p <= rightFlag)) ? true : false;
			}

			// Y AXIS FLAGGING
			if ((*m_GameObjects)[i]->m_HasPhysics == false)
			{
				leftFlag = (int)(*m_GameObjects)[i]->m_Sprite->getPosition().y / m_CollisionGrid.m_CellHeight;
				rightFlag = (int)((*m_GameObjects)[i]->m_Sprite->getPosition().y + (*m_GameObjects)[i]->m_Sprite->getSize().y) / m_CollisionGrid.m_CellHeight;
			}
			else
			{
				leftFlag = (int)(*m_GameObjects)[i]->m_PhysicsObject->m_Collider->getPosition().y / m_CollisionGrid.m_CellHeight;
				rightFlag = (int)((*m_GameObjects)[i]->m_PhysicsObject->m_Collider->getPosition().y + (*m_GameObjects)[i]->m_Sprite->getSize().y) / m_CollisionGrid.m_CellHeight;
			}

			for (int p = 0; p < m_CollisionGrid.m_YCount; p++)
			{
				m_YFlags[i]->m_Data[p] = ((p >= leftFlag) && (p <= rightFlag)) ? true : false;
			}

			// https://gamedev.stackexchange.com/questions/72030/using-uniform-grids-for-collision-detection-efficient-way-to-keep-track-of-wha
		}

		void ACollisionEngine::collisionResolution()
		{
			for (size_t i = 0; i < (*m_GameObjects).size(); i++)
			{
				for (size_t j = i + 1; j < (*m_GameObjects).size(); j++)
				{
					if (((*m_XFlags[i]) * (*m_XFlags[j])) &&
						((*m_YFlags[i]) * (*m_YFlags[j])) &&
						((*m_GameObjects)[i]->m_PhysicsObject->m_Collider->m_ZIndex == (*m_GameObjects)[j]->m_PhysicsObject->m_Collider->m_ZIndex))
					{
						narrowPhaseResolution(*(*m_GameObjects)[i], *(*m_GameObjects)[j]);
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
				LOG("Hit");
				if (!left.m_HasPhysics && !right.m_HasPhysics)
				{
					// Code copied from the end of this function for maximum performance.
					// Hit events can only be created before assigning the appropriate velocities when the object physics is disabled
					if (left.m_GeneratesHit || right.m_GeneratesHit)
					{
						// Call user-defined hit response
						left.onHit(&left, &right, cache);
						right.onHit(&right, &left, cache);
					}

					return;
				}

				// Record the relative coefficient of restitution
#ifdef min
				float e = min(left.m_PhysicsObject->m_Collider->m_PhysicsMaterial.m_CoefficientOfRestitution, right.m_PhysicsObject->m_Collider->m_PhysicsMaterial.m_CoefficientOfRestitution);
				float mu = min(left.m_PhysicsObject->m_Collider->m_PhysicsMaterial.m_CoefficientOfFriction, right.m_PhysicsObject->m_Collider->m_PhysicsMaterial.m_CoefficientOfFriction);
#else
				float e = std::min(left.m_PhysicsObject->m_Collider->m_PhysicsMaterial.m_CoefficientOfRestitution, right.m_PhysicsObject->m_Collider->m_PhysicsMaterial.m_CoefficientOfRestitution);
				float mu = std::min(left.m_PhysicsObject->m_Collider->m_PhysicsMaterial.m_CoefficientOfFriction, right.m_PhysicsObject->m_Collider->m_PhysicsMaterial.m_CoefficientOfFriction);
#endif
				// Store temporary variables
				float m1 = left.m_PhysicsObject->m_Collider->m_PhysicsMaterial.m_Mass;
				float m2 = right.m_PhysicsObject->m_Collider->m_PhysicsMaterial.m_Mass;
				float invm1 = (m1 >= 1000000.0f) ? 0.0f : 1.0f / m1;
				float invm2 = (m2 >= 1000000.0f) ? 0.0f : 1.0f / m2;

				RML::Vector2D normal = cache.getCollisionNormal();
				normal.toUnitVector();

				RML::Vector2D v1 = left.m_PhysicsObject->m_Collider->m_Momentum * invm1;
				RML::Vector2D v2 = right.m_PhysicsObject->m_Collider->m_Momentum * invm2;

				RML::Vector2D v1_parallel = normal * v1.multiplyDot(normal);
				v1_parallel.roundTo(0.0f, 1.0e-5f, 0.0f, 1.0e-5f);

				RML::Vector2D v1_perp = v1 - v1_parallel;
				v1_perp.roundTo(0.0f, 1.0e-5f, 0.0f, 1.0e-5f);

				RML::Vector2D v2_parallel = normal * v2.multiplyDot(normal);
				v2_parallel.roundTo(0.0f, 1.0e-5f, 0.0f, 1.0e-5f);

				RML::Vector2D v2_perp = v2 - v2_parallel;
				v2_perp.roundTo(0.0f, 1.0e-5f, 0.0f, 1.0e-5f);

				RML::Vector2D rel_parallel = v1_parallel - v2_parallel;

				if (rel_parallel.multiplyDot(normal) < 0.0f)
				{
					LOG("Skipped");
					return;
				}

				RML::Vector2D v1_perpFinal;
				RML::Vector2D v2_perpFinal;

				if (v1_perp == v2_perp)
				{
					v1_perpFinal = v1_perp;
					v2_perpFinal = v2_perp;
				}
				else
				{
					static auto temp = v2_perp;
					if (left.m_HasPhysics)
					{
						v2_perpFinal = temp.subtract(v1_perp.multiplyFloat(m1 * mu * invm2));
					}
					else
					{
						v2_perpFinal.x = 1.0f * v2_perp.x;
						v2_perpFinal.y = 1.0f * v2_perp.y;
					}

					if (right.m_HasPhysics)
					{
						v1_perpFinal = v1_perp.subtract(v2_perp.multiplyFloat(m2 * mu * invm1));
					}
					else
					{
						v1_perpFinal.x = 1.0f * v1_perp.x;
						v1_perpFinal.y = 1.0f * v1_perp.y;
					}
				}

				RML::Vector2D v1_parallelFinal;
				RML::Vector2D v2_parallelFinal;

				if (left.m_HasPhysics)
				{
					v2_parallelFinal.x = v1_parallel.x * m1 + v2_parallel.x * m2 + (v1_parallel.x - v2_parallel.x) * m1 * e;
					v2_parallelFinal.y = v1_parallel.y * m1 + v2_parallel.y * m2 + (v1_parallel.y - v2_parallel.y) * m1 * e;

					v2_parallelFinal.x /= m1 + m2;
					v2_parallelFinal.y /= m1 + m2;

					v2_parallelFinal.roundTo(0.0f, 1.0e-5f, 0.0f, 1.0e-5f);
				}
				else
				{
					v2_parallelFinal.x = -1.0f * v2_parallel.x;
					v2_parallelFinal.y = -1.0f * v2_parallel.y;
				}

				if (right.m_HasPhysics)
				{
					v1_parallelFinal.x = (v1_parallel.x - v2_parallel.x) * e + v2_parallelFinal.x;
					v1_parallelFinal.y = (v1_parallel.y - v2_parallel.y) * e + v2_parallelFinal.y;

					v1_parallelFinal.x /= m1 + m2;
					v1_parallelFinal.y /= m1 + m2;

					v1_parallelFinal.roundTo(0.0f, 1.0e-5f, 0.0f, 1.0e-5f);
				}
				else
				{
					v1_parallelFinal.x = -1.0f * v1_parallel.x;
					v1_parallelFinal.y = -1.0f * v1_parallel.y;
				}

				// Set the final values in the objects
				if (left.m_HasPhysics)
				{
					if (invm1 != 0.0f)
					{
						left.m_PhysicsObject->m_Collider->m_Momentum = (v1_parallelFinal + v1_perpFinal) * m1;
					}
				}

				if (right.m_HasPhysics)
				{
					if (invm2 != 0.0f)
					{
						right.m_PhysicsObject->m_Collider->m_Momentum = (v2_parallelFinal + v2_perpFinal) * m2;
					}
				}

				if (left.m_GeneratesHit || right.m_GeneratesHit)
				{
					// Call user-defined hit response
					left.onHit(&left, &right, cache);
					right.onHit(&right, &left, cache);
				}
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
