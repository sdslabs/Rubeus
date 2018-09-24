#pragma once

#include <game_object.h>

#include <vector>

namespace Rubeus
{
	namespace Awerere
	{
		class ::Rubeus::RGameObject;

		class ACollisionEngine
		{
		private:
			std::vector<RGameObject *> * m_GameObjects = NULL;
			std::vector<RGameObject *> * m_FirstPassers = NULL;

			friend class APhysicsEngine;

		public:
			ACollisionEngine();
			~ACollisionEngine();

			void executePhaseOne(std::vector<RGameObject *> * gameObjects);
			void executePhaseTwo();

			void eraseCache();

		protected:

		};
	}
}
