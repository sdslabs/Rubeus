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

	RGame * currentGame = RGame::getActiveGame();

	// startupLevel : std::string contains the startup level name. Defined in user_init.cpp
	currentGame->getEngine()->m_StartupLevelName = currentGame->m_StartupLevel;

	while (true)
	{
		if (currentGame->getEngine()->getCurrentWindow()->closed() == true)
		{
			break;
		}

		currentGame->init();

		/*
			* Any running level should call Engine->end() at the end of the game which
			* changes currentEngine->m_StartupLevelName to "" and in turn also ends the
			* level selection loop as seen below. Setting currentEngine->m_StartupLevelName to
			* "" directly will also work.
			*/
		if (currentGame->getEngine()->m_StartupLevelName == "")
		{
			LOG("Startup level name was erased");
			break;
		}

		for (auto & item : RLevel::InstantiatedLevels)
		{
			if (item.first == currentGame->getEngine()->m_StartupLevelName)
			{
				currentGame->getEngine()->load(*item.second);
				currentGame->getEngine()->run();
				currentGame->getEngine()->getCurrentLevel()->onEnd();
				currentGame->getEngine()->killAliveLevel();
				currentGame->end();
			}
			// The startup level should contain the logic for when to load the next level
		}
	}
	LOG("Rubeus is now exiting");

	delete currentGame;

	RLogger::CloseLogFile();
	return 0;
}
