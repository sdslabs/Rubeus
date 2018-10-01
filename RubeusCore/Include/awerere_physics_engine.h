#pragma once

#include <vector>

#include <game_object.h>
#include <awerere_collision_engine.h>

namespace Rubeus
{
	namespace Awerere
	{
		class APhysicsEngine
		{
		private:
			ACollisionEngine m_CollisionEngine;
			std::vector<RGameObject *> * m_GameObjects = NULL;

			void calculateCollisions();
			void decodeCollisionResponse();

		public:
			APhysicsEngine(std::vector<RGameObject *> * gameObjects);
			~APhysicsEngine();

			void update(const float deltaTime);

			void setGameObjectArray(std::vector<RGameObject *> * gameObjects);

		protected:

		};
	}
}
