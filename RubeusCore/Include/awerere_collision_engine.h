#pragma once

#include <awerere_collision_grid.h>
#include <window_component.h>
#include <awerere_flag.h>
#include <awerere_hit_event_list.h>
#include <awerere_collide_data_object.h>

namespace Rubeus
{
	class RGameObject;

	namespace Awerere
	{
		class ACollisionEngine
		{
		private:

			CollisionGrid m_CollisionGrid;
			std::vector<RGameObject *> m_GameObjects;
			std::vector<RGameObject *> m_FirstPassers;
			std::vector<AFlag> m_XFlags;
			std::vector<AFlag> m_YFlags;
			AHitEventList m_CollisionEvents;

			friend class APhysicsEngine;

		public:

			ACollisionEngine(std::vector<RGameObject *> & gameObjects, const float & gridHeight, const float & gridWidth, const float & cellHeight, const float & cellWidth);
			~ACollisionEngine();

			void assignFlags();
			void collisionResolution();
			void narrowPhaseResolution(RGameObject & left, RGameObject & right);
			ACollideData multiplexColliders(ACollider * left, const EColliderType & leftType, ACollider * right, const EColliderType & rightType);
			void eraseCache();

			inline void setGameObjectArray(std::vector<RGameObject *> gameObjects) { m_GameObjects = gameObjects; }

		protected:

		};
	}
}
