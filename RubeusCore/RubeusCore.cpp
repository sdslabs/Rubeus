// RubeusCore.cpp : Defines the entry point for the application.
//

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

	RShaderComponent shader0(RShaderComponent("Shaders/basic.vert", "Shaders/basic.frag"));

	RStaticLayer * layer0 = new RStaticLayer(shader0);

	RGroup * g = new RGroup(Matrix4::translation(Vector3D(2.0f, 3.0f, 0.0f)));

	g->addRenderable(&RSprite(0.0f, 0.0f, 1.0f, 1.0f, Vector4D(0.3f, 0.5f, 1.0f, 1.0f)));
	g->addRenderable(&RSprite(0.2f, 0.2f, 0.6f, 0.6f, Vector4D(0.5f, 0.1f, 0.6f, 1.0f)));
	layer0->addGroup(*g);

	RTimer timer(2);
	timer.setFrameCounter();

	// See if maps are slowing things down. Also have a performance check
	while(!GameWindow.closed())
	{
		GameWindow.clearWindow();

		shader0.enableShader();
		shader0.setUniform2f("light_position", Vector2D(GameWindow.m_X * 16.0f / 1280.0f, (720.0f - GameWindow.m_Y) * 9.0f / 720.0f));

		layer0->draw();

		GameWindow.updateWindow();
		timer.evaluateFrames();
	}

	delete g;
	delete layer0;

	return 0;
}
