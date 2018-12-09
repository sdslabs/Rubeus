// RubeusCore.cpp : Defines the entry point for the application.
//
#include "RubeusCore.h"

#include <nvidia_enable.h>

int main()
{
	using namespace Rubeus;
	using namespace GraphicComponents;
	using namespace AudioComponents;
	using namespace UtilityComponents;
	using namespace RML;
	using namespace Awerere;

	// Contains the entire Rubeus code base
	LOG(sizeof(*Engine));

#include "user_init.cpp"

	// Level selection loop
	while (true)
	{
		for (auto & item : RLevel::InstantiatedLevels)
		{
			if (item.first == Engine->m_StartupLevelName)
			{
				Engine->load(*item.second);
				Engine->run();
			}
		}

		/*
		 * Any running level should call Engine.load("") at the end of the game which
		 * changes Engine->m_StartupLevelName to "" and in turn also ends the
		 * level selection loop as seen below. Setting Engine->m_StartupLevelName to "" will also work
		 */
		if (Engine->m_StartupLevelName == "")
		{
			break;
		}
	}
	LOG("Rubeus is exiting");

	// End generated lines

	//for (auto& item : world.getActiveObjects())
	//{
	//	item->begin();
	//}

	// DONE_______________________________________

	// See if maps are slowing things down. Also have a performance check
	while (0/*!GameWindow->closed()*/)
	{
		// TODO: Message bus needs references to all systems here
		// Clear Window buffer
		//GameWindow->clearWindow();

		// World tick
		//world.tick();

		// Physics engine update
		//awerere.update(1.0f / 60.0f);

		// Render objects
		//layer0->draw();

		// Window buffer replacement
		//GameWindow->updateWindow();

		// Frame counter update
		//timer->evaluateFrames();
	}

	return 0;
}

