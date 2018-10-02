#pragma once

#include <vector>

#include <game_object.h>

namespace Rubeus
{
	namespace Awerere
	{
		class ACollisionEngine
		{
		private:
			CollisionGrid m_CollisionGrid;
			std::vector<RGameObject *> * m_GameObjects = NULL;
			std::vector<RGameObject *> * m_FirstPassers = NULL;

			friend class APhysicsEngine;

		public:
			ACollisionEngine(std::vector<RGameObject *> * gameObjects, const int & gridHeight, const int & gridWidth, const int & cellHeight, const int & cellWidth);
			~ACollisionEngine();

			void executePhaseOne(std::vector<RGameObject *> * gameObjects);
			void executePhaseTwo();

			void eraseCache();

			inline void setGameObjectArray(std::vector<RGameObject *> * gameObjects) { m_GameObjects = gameObjects; }

		protected:

		};
	}
}
