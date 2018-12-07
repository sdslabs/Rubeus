#pragma once

#include <world.h>
#include <audio_manager_component.h>
#include <input_manager.h>

namespace Rubeus
{
	class REngine;

	class RLevel
	{
	private:
		RWorld * m_World;
		RInputManager * m_InputManager;
		AudioComponents::RSymphony * m_AudioManager;

		friend class REngine;
	public:
		RLevel();
		~RLevel();

		void begin();
		void run();
		void cleanUp();
		void end();
	};
}
