/**
 * @file	Include/world.h.
 *
 * @brief	Declares the world class
 */

#pragma once

#include <vector>

#include <game_object.h>

namespace Rubeus
{
	/**
	 * @class	RWorld
	 *
	 * @brief	The container for all gameobjects. Synonymous to Scene graph.
	 */
	class RWorld
	{
	private:
		/** @brief	Array of all active gameobjects */
		mutable std::vector<RGameObject *> m_ActiveGameObjects;

	public:
		/**
		 * @fn		RWorld()
		 *
		 * @brief	Constructor
		 */
		RWorld();

		/**
		 * @fn		RWorld(std::vector<RGameObject *> & gameObjects)
		 *
		 * @brief	Constructor
		 *
		 * @param	gameObjects	An array of gameObjects.
		 */
		RWorld(std::vector<RGameObject *> & gameObjects);

		/**
		 * @fn		~RWorld()
		 *
		 * @brief	Destructor
		 */
		~RWorld();

		/**
		 * @fn		void tick()
		 *
		 * @brief	Call tick functions of all objects in the world once.
		 */
		void tick();

		/**
		 * @fn		void add(RGameObject & gameObject)
		 *
		 * @brief	Add a gameobject to the world
		 *
		 * @param	gameObject	The gameobject to be added.
		 */
		void add(RGameObject & gameObject);

		/**
		 * @fn		void add(const std::vector<RGameObject *> & gameObject)
		 *
		 * @brief	Add an array of gameobjects to the world
		 *
		 * @param	gameObject	The gameobject to be added.
		 */
		void add(const std::vector<RGameObject *> & gameObjects);

		/**
		 * @fn		inline void setObjectArray(std::vector<RGameObject *> & gameObjects)
		 *
		 * @brief	Set the array of gameObjects in use
		 *
		 * @param	gameObjects	Array of gameObjects in use.
		 */
		inline void setObjectArray(std::vector<RGameObject *> & gameObjects);

		/**
		 * @fn		inline std::vector<RGameObject *> & getActiveObjects() const
		 *
		 * @brief	Returns the array of gameObjects in use
		 *
		 * @return	The gameObject array in use
		 */
		inline std::vector<RGameObject *> & getActiveObjects() const { return m_ActiveGameObjects; }

	protected:
	};
}
