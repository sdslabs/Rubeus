#include <game.h>

#include <engine.h>

namespace Rubeus
{
	RGame * RGame::CurrentGame = NULL;

	RGame::RGame()
		: m_StartupLevel("")
	{
		Rubeus::UtilityComponents::RLogger::CreateLogFile();
		m_Engine = new Rubeus::REngine();
		CurrentGame = this;
	}

	RGame::~RGame()
	{
		delete m_Engine;
	}
}
