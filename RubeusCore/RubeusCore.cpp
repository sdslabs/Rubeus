// RubeusCore.cpp : Defines the entry point for the application.
//
#include "RubeusCore.h"

#include <nvidia_enable.h>

int main()
{
	using namespace Rubeus;
	using namespace GraphicComponents;
	using namespace AudioComponents;
	using namespace UtilityComponents;
	using namespace RML;
	using namespace Awerere;

	RSymphony * symphony = new RSymphony();
	symphony->addMusicTrack(1);
	symphony->addSoundTrack(1);
	symphony->loadTrack(AudioComponents::MUSIC_TRACK, AudioComponents::TRACK_0, "Assets/Garage.wav", 10, true);
	symphony->playTrack(AudioComponents::MUSIC_TRACK, AudioComponents::TRACK_0);
	symphony->playTrack(AudioComponents::SOUND_TRACK, AudioComponents::TRACK_0);

	RShaderComponent * shader0 = new RShaderComponent("Shaders/basic.vert", "Shaders/basic.frag");

	RStaticLayer * layer0 = new RStaticLayer(*shader0);

	RGroup * g = new RGroup(Matrix4::translation(Vector3D(0.0f, 0.0f, 0.0f)) * Matrix4::rotation(0, Vector3D(0, 0, 1)));
	RGroup * g2 = new RGroup(Matrix4::translation(Vector3D(0.0f, 0.0f, 0.0f)) * Matrix4::rotation(0, Vector3D(0, 0, 1)));

	APhysicsMaterial mat;

	std::vector<RGameObject *> gameObjects;
	APhysicsMaterial paddleMaterial;
	paddleMaterial.makeMaterial(1.0f, RML::Vector2D(0.0f, 0.0f), 0.0f, 1.0f);

	APhysicsMaterial ballMaterial;
	ballMaterial.makeMaterial(1.0f, RML::Vector2D(0.0f, 0.0f), 0.0f, 1.0f);

	USampleObject * sampleobject = new USampleObject(8.0f, 4.5f, 0.5f, 0.5f, "Assets/debug.png", true, EColliderType::BOX, new ABoxCollider(RML::Vector3D(8.0f, 4.5f, 1), RML::Vector3D(8.5f, 5.0f, 1)), true, ballMaterial);

	gameObjects.push_back(sampleobject);
	g->add(sampleobject);
	g->add(g2);
	layer0->addGroup(*g);
	layer0->addGroup(*g2);

	shader0->enableShader();
	GLint textureIDs[32];
	for (int i = 0; i < 32; i++)
	{
		textureIDs[i] = i;
	}
	shader0->setUniform1iv("textures", textureIDs, 32);

	RWorld world(gameObjects);

	APhysicsEngine awerere(*GameWindow, world, GameWindow->getHeight() / 9, GameWindow->getWidth() / 16);

	for (auto& item : world.getActiveObjects())
	{
		item->begin();
	}

	RTimer * timer = new RTimer(2);
	timer->setFrameCounter();

	// See if maps are slowing things down. Also have a performance check
	while (!GameWindow->closed())
	{
		//inputManager.update();
		// TODO: Message bus needs references to all systems here
		// Clear Window buffer
		GameWindow->clearWindow();

		// World tick
		world.tick();

		// Physics engine update
		awerere.update(1.0f / 60.0f);

		// Render objects
		layer0->draw();

		// Window buffer replacement
		GameWindow->updateWindow();

		// Frame counter update
		timer->evaluateFrames();
	}

	delete timer;
	delete g;
	delete g2;
	delete sampleobject;
	delete layer0;
	delete shader0;
	delete symphony;
	delete GameWindow;

	return 0;
}

