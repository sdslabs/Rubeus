// RubeusCore.cpp : Defines the entry point for the application.
//
#include <chrono>

#include "RubeusCore.h"

std::unordered_map<unsigned int, Rubeus::RMasterComponent *> Rubeus::RMasterComponent::m_ComponentMap;

int main()
{
	using namespace Rubeus;
	using namespace GraphicComponents;
	using namespace UtilityComponents;
	using namespace RML;
	RWindowComponent GameWindow("Hello World",
								1280, 720,
								EWindowParameters::WINDOWED_MODE,
								EWindowParameters::NON_RESIZABLE_WINDOW,
								0);

	RShaderComponent shader0(RShaderComponent("Shaders/basic.vertexshader", "Shaders/basic.fragmentshader"));
	RStaticLayer layer0(shader0);

	RSprite sprite1(0, 0, 4, 4, RML::Vector4D(0.5f, 0.0f, 0.5f, 1.0f));
	RSprite sprite3(5, 3.5, 0.5, 0.5, RML::Vector4D(0.6f, 0.0f, 1.0f, 1.0f));
	RSprite sprite2(1, 1, 4, 4, RML::Vector4D(0, 255, 255, 255).normaliseToRGBA());
	Group g;
	g.addRenderable(&sprite2).addRenderable(&sprite1);
	layer0.addGroup(g);

	RTimer timer(2);

	timer.setFrameCounter();

	// See if maps are slowing things down. Also have a performance check
	while(!GameWindow.closed())
	{
		GameWindow.clearWindow();

		layer0.draw();

		GameWindow.updateWindow();
		timer.evaluateFrames();
	}

	return 0;
}
