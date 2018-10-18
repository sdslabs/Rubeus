#pragma once

#include <vector>

#include <game_object.h>
#include <awerere_collision_engine.h>
#include <awerere_collision_grid.h>

namespace Rubeus
{
	namespace Awerere
	{
		class APhysicsEngine
		{
		private:
			ACollisionEngine m_CollisionEngine;
			std::vector<RGameObject *> m_GameObjects;
			std::vector<std::string> m_XFlags;
			std::vector<std::string> m_YFlags;

			void calculateCollisions();
			void decodeCollisionResponse();

		public:
			APhysicsEngine(GraphicComponents::RWindowComponent & windowComponent, std::vector<RGameObject *> & gameObjects, const float & cellHeight, const float & cellWidth);
			~APhysicsEngine();

			void update(const float deltaTime);
			void setGameObjectArray(std::vector<RGameObject *> & gameObjects);

		protected:

		};
	}
}
