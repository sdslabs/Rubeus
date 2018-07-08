// RubeusCore.cpp : Defines the entry point for the application.
//
#include "RubeusCore.h"

#define MSG_SYSTEM 0

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

	RGroup * g = new RGroup(Matrix4::translation(Vector3D(0.0f, 0.0f, 0.0f)) * Matrix4::rotation(0, Vector3D(0, 0, 1)));

	g->add(new RSprite(3.0f, 3.0f, 3.0f, 3.0f, Vector4D(1.0f, 1.0f, 0.0f, 1.0f)));


	layer0->addGroup(*g);

	RTimer * timer = new RTimer(2);
	timer->setFrameCounter();

	glActiveTexture(GL_TEXTURE0);
	RTexture texture("Assets/test8.png");
	texture.bindTexture();

	shader0->enableShader();
	shader0->setUniform1i("tex", 0);

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
	MessageSystem.addMessage(GameWindow, GameWindow, change_window_title, "chal raha hain bro :*)");

	RLoaderComponent * loader = new RLoaderComponent();
	MessageSystem.m_MessageBus.addSystem(loader);

	GameWindow->m_MessageSystem.addMessage(GameWindow, loader, EMessageCode::load_image, "Assets/test8.png");

	while(!GameWindow->closed())
	{
		GameWindow->clearWindow();

		MessageSystem.evaluateMessages();

		GameWindow->updateWindow();
	}

	delete loader;
	delete GameWindow;
#endif
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
	MessageSystem.addMessage(GameWindow, GameWindow, change_window_title, "chal raha hain bro :*)");

	RLoaderComponent * loader = new RLoaderComponent();
	MessageSystem.m_MessageBus.addSystem(loader);

	GameWindow->m_MessageSystem.addMessage(GameWindow, loader, EMessageCode::load_image, "Assets/test8.png");

	while(!GameWindow->closed())
	{
		GameWindow->clearWindow();

		MessageSystem.evaluateMessages();

		GameWindow->updateWindow();
	}

	delete loader;
	delete GameWindow;
#endif
	return 0;
}
