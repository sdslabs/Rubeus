#pragma once

#include <world.h>
#include <audio_manager_component.h>
#include <input_manager.h>

namespace Rubeus
{
	class REngine;

	class RLevel
	{
	protected:
		RWorld * m_World;
		RInputManager * m_InputManager;
		AudioComponents::RSymphony * m_AudioManager;
		std::string m_Name;


		friend class REngine;

	public:
		static void DeleteAll();
		static std::unordered_map<std::string, RLevel *> InstantiatedLevels;

		RLevel(std::string name);
		~RLevel();

		virtual void begin();
		virtual void run();
		virtual void onEnd();
		void killAliveObjects();

		void addGameObject(RGameObject * gameObject);

		inline std::string getName() const { return m_Name; }
		inline RWorld * getWorld() const { return m_World; }
		inline RInputManager * getInputManager() const { return m_InputManager; }
		inline AudioComponents::RSymphony * getSoundManager() const { return m_AudioManager; }
	};
}
