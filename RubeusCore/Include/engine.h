/**
 * @file		Include/engine.h.
 *
 * @brief	Declares the Rubeus Engine containing class
 */

#pragma once

#include <unordered_map>

#include <window_component.h>
#include <input_manager.h>
#include <audio_manager_component.h>
#include <awerere_physics_engine.h>
#include <layer_composition_object.h>
#include <world.h>
#include <timer_component.h>
#include <window_component.h>
#include <level.h>
#include <logger_component.h>

namespace Rubeus
{
	/**
	 * @class	REngine
	 *
	 * @brief	A class the contains all components that make up Rubeus.
	 */
	class REngine : public RMasterComponent
	{
	private:

		/** @brief	The ref to physics engine in current use */
		Awerere::APhysicsEngine * m_PhysicsEngine = NULL;

		/** @brief	The ref to Window in current use */
		GraphicComponents::RWindowComponent * m_Window = NULL;

		/** @brief	The ref to layers in use (for renderering) */
		GraphicComponents::RLayerComposition * m_LayerComposition = NULL;

		/** @brief	The ref to the timer in use */
		UtilityComponents::RTimer * m_Timer = NULL;

		/** @brief	The ref to the resource loader  */
		UtilityComponents::RLoaderComponent * m_Loader = NULL;

		/** @brief	The level currently in play */
		RLevel * m_CurrentLevel = NULL;

		/** @brief	The ref to the logger  */
		UtilityComponents::RLogger * m_Logger = NULL;

		friend class RLevel;

	public:

		/** @brief	The startup level of the entire game. Rubeus ends if this is found to be "" at the end of the frame */
		std::string m_StartupLevelName = "";

		/**
		 * @fn		REngine()
		 *
		 * @brief	The engine constructor
		 *
		 * @warning	Do not make multiple copies of the engine
		 */
		REngine();

		/**
		 * @fn		~REngine()
		 *
		 * @brief	The engine destructor
		 *
		 * @warning	Do not make multiple copies of the engine
		 */
		~REngine();

		/**
		 * @fn		void load(RLevel & level)
		 *
		 * @brief	Load a level into memory and run it.
		 *
		 * @param	level	The level object to be loaded in.
		 */
		void load(RLevel & level);

		/**
		 * @fn		void run()
		 *
		 * @brief	Run the main game loop.
		 */
		void run();

		/**
		 * @fn		void killAliveLevel()
		 *
		 * @brief	Kill all current level associated objects.
		 */
		void killAliveLevel();

		/**
		 * @fn		void end()
		 *
		 * @brief	End the current Rubeus game session.
		 */
		void end();

		/**
		 * @fn		inline UtilityComponents::RLoaderComponent * getResourceLoader() const
		 *
		 * @brief	Get the resource loader
		 * @warning	Allows loading files, images etc.
		 *
		 * @return	Pointer to the resource loader.
		 */
		inline UtilityComponents::RLoaderComponent * getResourceLoader() const { return m_Loader; }

		/**
		 * @fn		inline RLevel * getCurrentLevel() const
		 *
		 * @brief	Get the current level
		 *
		 * @return	Pointer to the current level.
		 */
		inline RLevel * getCurrentLevel() const { return m_CurrentLevel; }

		/**
		 * @fn		inline RLevel * getCurrentLevel() const
		 *
		 * @brief	Get the logger
		 *
		 * @return	Pointer to the logger object.
		 */
		inline UtilityComponents::RLogger * getLogger() const { return m_Logger; }

		/**
		 * @fn		inline GraphicComponents::RWindowComponent * getCurrentWindow() const
		 *
		 * @brief	Get the window of current level
		 *
		 * @return	Pointer to the window object.
		 */
		inline GraphicComponents::RWindowComponent * getCurrentWindow() const { return m_Window; }

		/**
		 * @fn		inline AudioComponents::RSymphony * getCurrentLevelAudioManager() const
		 *
		 * @brief	Get the audio manager of the current level
		 *
		 * @return	Pointer to the current level audio manager.
		 */
		inline AudioComponents::RSymphony * getCurrentLevelAudioManager() const { return m_CurrentLevel->m_AudioManager; }

		/**
		 * @fn		inline RInputManager * getCurrentLevelInputManager() const
		 *
		 * @brief	Get the input manager of the current level
		 * @warning	All keybindings are level specific
		 *
		 * @return	Pointer to the input manager object.
		 */
		inline RInputManager * getCurrentLevelInputManager() const { return m_CurrentLevel->m_InputManager; }

		/**
		 * @fn		inline RWorld * getWorld() const
		 *
		 * @brief	Get the world of the current level
		 * @warning	All levels have a separate world in which they live
		 *
		 * @return	Pointer to the world object.
		 */
		inline RWorld * getWorld() const { return m_CurrentLevel->m_World; }

		/**
		 * @fn		void onMessage(Message * msg) override
		 *
		 * @brief	Message handler of the engine
		 * @warning	Handles engine's asynchronous calls
		 *
		 * @param	msg	The message object sent across.
		 */
		void onMessage(Message * msg) override;
	};
}
