// RubeusCore.cpp : Defines the entry point for the application.
//

#include "RubeusCore.h"

std::unordered_map<unsigned int, Rubeus::RMasterComponent *> Rubeus::RMasterComponent::m_ComponentMap;

#define MSG_SYSTEM 1

int main()
{
	using namespace Rubeus;
	using namespace GraphicComponents;
	using namespace UtilityComponents;
	using namespace RML;
#if !MSG_SYSTEM
	RWindowComponent * GameWindow = new RWindowComponent("Hello World",
								1280, 720,
								EWindowParameters::WINDOWED_MODE,
								EWindowParameters::NON_RESIZABLE_WINDOW,
								0);

	RShaderComponent * shader0 = new RShaderComponent("Shaders/basic.vert", "Shaders/basic.frag");

	RStaticLayer * layer0 = new RStaticLayer(*shader0);

	RGroup * g = new RGroup(Matrix4::translation(Vector3D(8.0f, 3.0f, 0.0f)) * Matrix4::rotation(45, Vector3D(0, 0, 1)));

	RSprite * s1 = new RSprite(0.0f, 0.0f, 1.0f, 1.0f, Vector4D(0.3f, 0.5f, 1.0f, 1.0f));
	RSprite * s2 = new RSprite(0.2f, 0.2f, 0.6f, 0.6f, Vector4D(0.5f, 0.1f, 0.6f, 1.0f));

	g->add(s1);
	g->add(s2);

	RGroup * childg = new RGroup(Matrix4::translation(Vector3D(1.0f, 0.0f, 0.0f)));

	RSprite * sc1 = new RSprite(5.0f, 0.5f, 1.0f, 1.0f, Vector4D(1.0f, 1.0f, 0.0f, 1.0f));
	childg->add(sc1);

	g->add(childg);

	layer0->addGroup(*g);

	RTimer * timer = new RTimer(2);
	timer->setFrameCounter();

	// See if maps are slowing things down. Also have a performance check
	while(!GameWindow->closed())
	{
		// TODO: Message bus needs references to all systems here
		GameWindow->clearWindow();

		shader0->enableShader();
		shader0->setUniform2f("light_position", Vector2D(GameWindow->m_X * 16.0f / 1280.0f, (720.0f - GameWindow->m_Y) * 9.0f / 720.0f));

		layer0->draw();

		GameWindow->updateWindow();
		timer->evaluateFrames();
	}

	delete timer;
	delete g;
	delete layer0;
	delete shader0;
	delete GameWindow;

#else

	RMessageSystem MessageSystem;
	RWindowComponent * GameWindow = new RWindowComponent(
		"Hello World",
		1280, 720,
		EWindowParameters::WINDOWED_MODE,
		EWindowParameters::NON_RESIZABLE_WINDOW,
		1
	);

	MessageSystem.m_MessageBus.addSystem(GameWindow);
	MessageSystem.addMessage(new RMessage(GameWindow, GameWindow, change_window_title, "chal raha hain bro :*)"));

	while(!GameWindow->closed())
	{
		GameWindow->clearWindow();

		MessageSystem.evaluateMessages();

		GameWindow->updateWindow();
	}

	delete GameWindow;

#endif
	return 0;
}
