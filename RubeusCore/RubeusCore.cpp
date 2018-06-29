// RubeusCore.cpp : Defines the entry point for the application.
//

#include "RubeusCore.h"

std::unordered_map<unsigned int, Rubeus::RMasterComponent *> Rubeus::RMasterComponent::m_ComponentMap;

int main()
{
	srand(NULL);
	using namespace Rubeus;
	using namespace GraphicComponents;
	using namespace UtilityComponents;
	using namespace RML;
	RWindowComponent GameWindow("Hello World",
								1280, 720,
								EWindowParameters::WINDOWED_MODE,
								EWindowParameters::NON_RESIZABLE_WINDOW,
								0);

	RShaderComponent shader0(RShaderComponent("Shaders/vertex.glsl", "Shaders/fragment.glsl"));

	RStaticLayer * layer0 = new RStaticLayer(shader0);

	Group * g = new Group();
	long int count = 0;
	for(float x = 0; x < 16.0f; x+=0.2f)
		for(float y = 0; y < 9.0f; y+=0.08f)
		{
			count++;
			RSprite * p = new RSprite(x, y, 0.07, 0.07, Vector4D(0, 0.2, 1, 1));
			g->addRenderable(p);
			delete p;
		}
	LOG(count);

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
