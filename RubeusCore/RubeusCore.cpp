// RubeusCore.cpp : Defines the entry point for the application.
//
#include "RubeusCore.h"

int main()
{
	using namespace Rubeus;

	using namespace GraphicComponents;
	using namespace AudioComponents;
	using namespace UtilityComponents;

	using namespace RML;

	RWindowComponent * GameWindow = new RWindowComponent("Hello World",
														 1280, 720,
														 EWindowParameters::WINDOWED_MODE,
														 EWindowParameters::NON_RESIZABLE_WINDOW,
														 0);
    RAudioManager * audio_manager = new RAudioManager();
    audio_manager->addMusicTrack(1);
    audio_manager->addSoundTrack(1);
    audio_manager->loadTrack(AudioComponents::MUSIC_TRACK, AudioComponents::TRACK_0, "Assets/Garage.wav", 10, true);
    audio_manager->loadTrack(AudioComponents::SOUND_TRACK, AudioComponents::TRACK_0, "Assets/sound.wav", 10);
    audio_manager->playTrack(AudioComponents::MUSIC_TRACK, AudioComponents::TRACK_0);
    audio_manager->playTrack(AudioComponents::SOUND_TRACK, AudioComponents::TRACK_0);

	RShaderComponent * shader0 = new RShaderComponent("Shaders/basic.vert", "Shaders/basic.frag");

	RStaticLayer * layer0 = new RStaticLayer(*shader0);

	RGroup * g = new RGroup(Matrix4::translation(Vector3D(0.0f, 0.0f, 0.0f)) * Matrix4::rotation(0, Vector3D(0, 0, 1)));
	RGroup * g2 = new RGroup(Matrix4::translation(Vector3D(8.0f, 0.0f, 0.0f)) * Matrix4::rotation(0, Vector3D(0, 0, 1)));

	RTimer * timer = new RTimer(2);
	timer->setFrameCounter();

	RGameObject * object1 = new RGameObject(10.0f, 1.0f, 1.0f, 1.0f, "Assets/test8.png");
	RGameObject * object2 = new RGameObject(1.0f, 1.0f, 1.0f, 1.0f, "Assets/test9.png");

	g->add(object1);
	g->add(g2);
	g2->add(object2);
	layer0->addGroup(*g);
	layer0->addGroup(*g2);

	shader0->enableShader();
	GLint textureIDs[32];
	for(int i = 0; i < 32; i++)
	{
		textureIDs[i] = i;
	}
	shader0->setUniform1iv("textures", textureIDs, 32);

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
	delete g2;
	delete object1;
	delete object2;
	delete layer0;
	delete shader0;
	delete audio_manager;
	delete GameWindow;

	return 0;
}
