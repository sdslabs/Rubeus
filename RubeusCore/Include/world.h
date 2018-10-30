#pragma once

#include <vector>

#include <game_object.h>

namespace Rubeus
{


	class RWorld
	{
	private:
		std::vector<RGameObject *> m_ActiveGameObjects;

	public:
		RWorld();
		RWorld(std::vector<RGameObject *> & gameObjects);
		~RWorld();

		void add(RGameObject & gameObject);
		void add(const std::vector<RGameObject *> & gameObjects);

		inline void setObjectArray(std::vector<RGameObject *> & gameObjects);
		inline const std::vector<RGameObject *> & getActiveObjects() const { return m_ActiveGameObjects; }

	protected:
	};
}
