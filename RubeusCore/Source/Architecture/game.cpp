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
		m_Engine = new Rubeus::REngine();
		CurrentGame = this;
	}

	RGame::~RGame()
	{
		delete m_Engine;
	}
}