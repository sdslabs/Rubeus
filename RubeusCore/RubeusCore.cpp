// RubeusCore.cpp : Defines the entry point for the application.
//
#include "RubeusCore.h"

#define MSG_SYSTEM 0

int main()
{
	using namespace Rubeus;

	using namespace GraphicComponents;
	using namespace AudioComponents;
	using namespace UtilityComponents;

	using namespace RML;

#if !MSG_SYSTEM
	RWindowComponent * GameWindow = new RWindowComponent("Hello World",
														 1280, 720,
														 EWindowParameters::WINDOWED_MODE,
														 EWindowParameters::NON_RESIZABLE_WINDOW,
														 0);
	RAudioManager * audio_manager = new RAudioManager();
	audio_manager->addMusicTrack(1);
	audio_manager->addSoundTrack(1);
	audio_manager->loadTrack(MUSIC_TRACK, TRACK_0, "Assets/Garage.wav", 20, true);
	audio_manager->loadTrack(SOUND_TRACK, TRACK_0, "Assets/sound.wav", 20);
	audio_manager->playTrack(MUSIC_TRACK, TRACK_0);
	audio_manager->playTrack(SOUND_TRACK, TRACK_0);

	RShaderComponent * shader0 = new RShaderComponent("Shaders/basic.vert", "Shaders/basic.frag");

	RStaticLayer * layer0 = new RStaticLayer(*shader0);

	RGroup * g = new RGroup(Matrix4::translation(Vector3D(0.0f, 0.0f, 0.0f)) * Matrix4::rotation(0, Vector3D(0, 0, 1)));

	RTimer * timer = new RTimer(2);
	timer->setFrameCounter();

	RTexture * texture = new RTexture("Assets/test8.png");

	g->add(new RSprite(3.0f, 3.0f, 3.0f, 3.0f, texture));

	layer0->addGroup(*g);

	shader0->enableShader();
	int textureIDs[] =
	{
		0, 1, 2, 3, 4, 5, 6, 7, 8, 9
	};
	shader0->setUniform1iv("textures", textureIDs, 10);

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
	delete texture;
	delete g;
	delete layer0;
	delete shader0;
	delete audio_manager;
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

	return 0;
}
