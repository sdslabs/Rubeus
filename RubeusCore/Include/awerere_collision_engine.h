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
			std::vector<RGameObject *> * m_GameObjects = NULL;
			std::vector<RGameObject *> * m_FirstPassers = NULL;

			friend class APhysicsEngine;

		public:
			ACollisionEngine(std::vector<RGameObject *> * gameObjects = NULL);
			~ACollisionEngine();

			void executePhaseOne(std::vector<RGameObject *> * gameObjects);
			void executePhaseTwo();

			void eraseCache();

			inline void setGameObjectArray(std::vector<RGameObject *> * gameObjects) { m_GameObjects = gameObjects; }

		protected:

		};
	}
}
