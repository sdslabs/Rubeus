// RubeusCore.cpp : Defines the entry point for the application.
//
#define ENGINE_COMPONENTS

#include "RubeusCore.h"
#include "Game/paddle.h"
#include "Game/ball.h"

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

	RTimer * timer = new RTimer(2);
	timer->setFrameCounter();

	APhysicsMaterial mat;

	std::vector<RGameObject *> gameObjects;
	APhysicsMaterial paddleMaterial;
	paddleMaterial.makeMaterial(1.0f, RML::Vector2D(0.0f, 0.0f), 0.5f, 1.0f);

	APhysicsMaterial ballMaterial;
	ballMaterial.makeMaterial(0.5f, RML::Vector2D(0.0f, 0.0f), 0.5f, 1.0f);

	paddle * paddleLeft = new paddle(0.0f, 5.0f, 0.5f, 3.0f, "Assets/debug.png", true, EColliderType::BOX, new ABoxCollider(RML::Vector3D(0.0f, 5.0f, 1), RML::Vector3D(0.5f, 8.0f, 1)), true, paddleMaterial);

	paddle * paddleRight = new paddle(15.5f, 5.0f, 0.5f, 3.0f, "Assets/debug.png", true, EColliderType::BOX, new ABoxCollider(RML::Vector3D(15.5f, 5.0f, 1), RML::Vector3D(16.0f, 8.0f, 1)), true, paddleMaterial);

	ball * ball1 = new ball(8.0f, 4.5f, 0.1f, 0.1f, "Assets/debug.png", true, EColliderType::BOX, new ABoxCollider(RML::Vector3D(8.0f, 4.5f, 1), RML::Vector3D(8.1f, 4.6f, 1)), true, ballMaterial);
	ball1->m_PhysicsObject->m_Collider->m_Momentum.x = 2.0f;
	ball1->m_PhysicsObject->m_Collider->m_Momentum.y = 2.0f;

	gameObjects.push_back(paddleLeft);
	gameObjects.push_back(paddleRight);
	gameObjects.push_back(ball1);
	g->add(paddleLeft);
	g->add(paddleRight);
	g->add(ball1);
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

	inputManager.addKeyToKeyBinding("Up", EKeyboardKeys::__UP);
	inputManager.addKeyToKeyBinding("Down", EKeyboardKeys::__DOWN);

	for (auto& item : world.getActiveObjects())
	{
		item->begin();
	}

	// See if maps are slowing things down. Also have a performance check
	while (!GameWindow->closed())
	{
		//inputManager.update();
		// TODO: Message bus needs references to all systems here
		// Clear Window buffer
		GameWindow->clearWindow();

		// Miscellaneous testing stuff
		shader0->enableShader();
		shader0->setUniform2f("light_position", Vector2D(GameWindow->m_X * 16.0f / 1280.0f, (720.0f - GameWindow->m_Y) * 9.0f / 720.0f));

		world.tick();

		// Physics engine update
		awerere.update(1.0f / 60.0f);

		// Render update
		layer0->draw();

		// Window buffer update
		GameWindow->updateWindow();

		// Frame counter update
		timer->evaluateFrames();
	}

	delete timer;
	delete g;
	delete g2;
	delete paddleLeft;
	delete paddleRight;
	delete ball1;
	delete layer0;
	delete shader0;
	delete symphony;
	delete GameWindow;

	return 0;
}

