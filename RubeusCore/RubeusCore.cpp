// RubeusCore.cpp : Defines the entry point for the application.
//
#include <chrono>

#include "RubeusCore.h"

std::map<unsigned int, Rubeus::RMasterComponent *> Rubeus::RMasterComponent::m_ComponentMap;

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
								1);

	RShaderComponent shader0(RShaderComponent("Shaders/basic.vertexshader", "Shaders/basic.fragmentshader"));
	RStaticLayer layer0(shader0);

	RSprite sprite1(0, 0, 4, 4, RML::Vector4D(0.75f, 0.047f, 0.9f, 1.0f));
	RSprite sprite2(0.5, 0.5, 0.5, 0.5, RML::Vector4D(0.6f, 0.0f, 1.0f, 1.0f));
	RSprite sprite3(1, 1, 4, 4, RML::Vector4D(0, 255, 255, 255).normaliseToRGBA());
	Group * g = new Group();
	g->addRenderable(&sprite2).addRenderable(&sprite1).addRenderable(&sprite3);
	layer0.addGroup("group1", *g);

	while(!GameWindow.closed())
	{
		GameWindow.clearWindow();

		layer0.draw();

		GameWindow.updateWindow();
	}

	delete g;

	return 0;
}
