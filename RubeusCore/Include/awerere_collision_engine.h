#pragma once

#include <vector>

#include <game_object.h>
#include <awerere_collision_grid.h>
#include <window_component.h>
#include <awerere_collide_data_object.h>

namespace Rubeus
{
	namespace Awerere
	{
		class ACollisionEngine
		{
		private:
			GraphicComponents::RWindowComponent & m_WindowComponent;
			CollisionGrid m_CollisionGrid;
			std::vector<RGameObject *> m_GameObjects;
			std::vector<RGameObject *> m_FirstPassers;
			std::vector<std::vector<int>> m_XFlags;
			std::vector<std::vector<int>> m_YFlags;
			std::vector<ACollideData> m_CollisionEvents;


			friend class APhysicsEngine;

		public:
			ACollisionEngine(GraphicComponents::RWindowComponent & windowComponent, std::vector<RGameObject *> & gameObjects, const float & gridHeight, const float & gridWidth, const float & cellHeight, const float & cellWidth);
			~ACollisionEngine();

			void assignFlags();
			void executePhaseTwo();

			void eraseCache();

			inline void setGameObjectArray(std::vector<RGameObject *> gameObjects) { m_GameObjects = gameObjects; }

		protected:

		};
	}
}
