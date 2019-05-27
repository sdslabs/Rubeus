#include <game.h>

#include <engine.h>
#include <logger_component.h>

namespace Rubeus
{
	RGame * RGame::CurrentGame = NULL;
	RLevel * RGame::CurrentLevel = NULL;

	RGame::RGame()
		: m_StartupLevel("")
	{
<<<<<<< HEAD
=======
		UtilityComponents::RLogger::Init();
>>>>>>> Fix breaking logger due to uninitialised color maps
		m_Engine = new Rubeus::REngine();
		CurrentGame = this;
	}

	RGame::~RGame()
	{
		delete m_Engine;
	}
}
