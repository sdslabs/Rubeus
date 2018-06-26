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
	layer0.m_Shader.setUniformMat4("proj_matrix", Matrix4::orthographic(0.0f, 16.0f, 0.0f, 9.0f, -1.0f, 1.0f));

	RShaderComponent shader1(RShaderComponent("Shaders/basic.vertexshader", "Shaders/basic.fragmentshader"));
	RStaticLayer layer1(shader1);
	layer1.m_Shader.setUniformMat4("proj_matrix", Matrix4::orthographic(0.0f, 16.0f, 0.0f, 9.0f, -1.0f, 1.0f));

	RSprite sprite1(0, 0, 4, 4, RML::Vector4D(255, 255, 255, 255).normaliseToRGBA());
	RSprite sprite2(7, 1, 2, 3, RML::Vector4D(0.2f, 0, 1, 1));
	RSprite sprite3(1, 1, 4, 4, RML::Vector4D(0, 255, 255, 255).normaliseToRGBA());

	layer0.addSprite(&sprite1);
	layer0.addSprite(&sprite2);
	layer1.addSprite(&sprite3);

	while(!GameWindow.closed())
	{
		GameWindow.clearWindow();

		layer0.draw();
		layer1.draw();

		GameWindow.updateWindow();
	}

	return 0;
}
