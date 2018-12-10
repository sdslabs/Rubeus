/**
 * @file		Include/level.h.
 *
 * @brief	Declares the Level class
 */

#pragma once

#include <world.h>
#include <audio_manager_component.h>
#include <input_manager.h>

namespace Rubeus
{
	class REngine;

	/**
	 * @class	RLevel
	 *
	 * @brief	A single container from all access to a level's contents.
	 */
	class RLevel
	{
	protected:
		/** @brief	The world of this level */
		RWorld * m_World;

		/** @brief	Input manager of this level. All keybindings are level specific */
		RInputManager * m_InputManager;

		/** @brief	Audio manager of this level. All tracks are level specific */
		AudioComponents::RSymphony * m_AudioManager;

		/** @brief	Name of this level. Used to identify game objects to their levels */
		std::string m_Name;

		friend class REngine;

	public:

		/** @brief	Pointers to all objects instantiated of this class */
		static std::unordered_map<std::string, RLevel *> InstantiatedLevels;

		/**
		 * @fn		RLevel(std::string name)
		 *
		 * @brief	Constructor
		 *
		 * @param	name		The name of this level.
		 */
		RLevel(std::string name);

		/**
		 * @fn		~RLevel()
		 *
		 * @brief	Destructor
		 */
		~RLevel();

		/**
		 * @fn		virtual void begin()
		 *
		 * @brief	User overridable on startup script for this level
		 */
		virtual void begin();

		/**
		 * @fn		virtual void onEnd()
		 *
		 * @brief	User overridable script called on end of this level
		 */
		virtual void onEnd();

		/**
		 * @fn		void killAliveObjects()
		 *
		 * @brief	Delete active objects
		 */
		void killAliveObjects();

		/**
		 * @fn		void addGameObject(RGameObject * gameObject)
		 *
		 * @brief	Add a gameobject to this level's world
		 * @warning	Do not explicitly delete passed in pointers
		 *
		 * @param	gameObject	The object pointer to be passed in.
		 */
		void addGameObject(RGameObject * gameObject);

		/**
		 * @fn		inline std::string getName() const
		 *
		 * @brief	Get the name of this level
		 *
		 * @return	String containing the level name.
		 */
		inline std::string getName() const { return m_Name; }

		/**
		 * @fn		inline RWorld * getWorld() const
		 *
		 * @brief	Get the world of this level
		 *
		 * @return	Pointer to the world of this level.
		 */
		inline RWorld * getWorld() const { return m_World; }

		/**
		 * @fn		inline RInputManager * getInputManager() const
		 *
		 * @brief	Get the input manager of this level
		 *
		 * @return	Pointer to the input manager of this level.
		 */
		inline RInputManager * getInputManager() const { return m_InputManager; }

		/**
		 * @fn		inline AudioComponents::RSymphony * getSoundManager() const
		 *
		 * @brief	Get the audio manager of this level
		 *
		 * @return	Pointer to the audio manager of this level.
		 */
		inline AudioComponents::RSymphony * getSoundManager() const { return m_AudioManager; }
	};
}
