#include <engine.h>

namespace Rubeus
{
	GraphicComponents::RWindowComponent * GameWindow = new Rubeus::GraphicComponents::RWindowComponent("Hello World",
																									   1280, 720,
																									   Rubeus::GraphicComponents::EWindowParameters::WINDOWED_MODE,
																									   Rubeus::GraphicComponents::EWindowParameters::NON_RESIZABLE_WINDOW,
																									   1);
	std::unordered_map<int, bool> RInputManager::KeyMap;
	std::unordered_map<int, bool> RInputManager::MouseButtonMap;
	RML::Vector2D RInputManager::MousePosition;
	RML::Vector2D RInputManager::MouseScroll;

	RInputManager inputManager(*GameWindow);


}
