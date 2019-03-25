#include <game.h>

namespace Rubeus
{
	RGame * RGame::CurrentGame = NULL;

	RGame::RGame()
		: m_Engine(new Rubeus::REngine()), m_StartupLevel("")
	{
		CurrentGame = this;
	}

	RGame::~RGame()
	{
		delete m_Engine;
	}
}
