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

	RShaderComponent shader1(RShaderComponent("Shaders/basic.vertexshader", "Shaders/basic.fragmentshader"));
	RStaticLayer layer1(shader1);

	RSprite sprite1(0, 0, 4, 4, RML::Vector4D(255, 255, 255, 255).normaliseToRGBA());
	RSprite sprite2(7, 1, 2, 3, RML::Vector4D(0.2f, 0, 1, 1));
	RSprite sprite3(1, 1, 4, 4, RML::Vector4D(0, 255, 255, 255).normaliseToRGBA());

	layer0.addGroup("group1", Group().addRenderable(&sprite1).addRenderable(&sprite2).addRenderable(&sprite3));

	while(!GameWindow.closed())
	{
		GameWindow.clearWindow();

		layer0.draw();

		GameWindow.updateWindow();
	}

	return 0;
}
