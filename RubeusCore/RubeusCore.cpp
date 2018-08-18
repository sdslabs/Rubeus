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

	using namespace Awerere;

	RWindowComponent * GameWindow = new RWindowComponent("Hello World",
														 1280, 720,
														 EWindowParameters::WINDOWED_MODE,
														 EWindowParameters::NON_RESIZABLE_WINDOW,
														 0);
<<<<<<< HEAD
<<<<<<< HEAD
    RAudioManager * audio_manager = new RAudioManager();
    audio_manager->addMusicTrack(1);
    audio_manager->addSoundTrack(1);
    audio_manager->loadTrack(AudioComponents::MUSIC_TRACK, AudioComponents::TRACK_0, "Assets/Garage.wav", 10, true);
    audio_manager->loadTrack(AudioComponents::SOUND_TRACK, AudioComponents::TRACK_0, "Assets/sound.wav", 10);
    audio_manager->playTrack(AudioComponents::MUSIC_TRACK, AudioComponents::TRACK_0);
    audio_manager->playTrack(AudioComponents::SOUND_TRACK, AudioComponents::TRACK_0);
=======
	RSymphony * audio_manager = new RSymphony();
	audio_manager->addMusicTrack(1);
	audio_manager->addSoundTrack(1);
	audio_manager->loadTrack(MUSIC_TRACK, TRACK_0, "Assets/Garage.wav", 10, true);
	audio_manager->loadTrack(SOUND_TRACK, TRACK_0, "Assets/sound.wav", 10);
	audio_manager->playTrack(MUSIC_TRACK, TRACK_0);
	audio_manager->playTrack(SOUND_TRACK, TRACK_0);
>>>>>>> Rename audio manager as 'Symphony'
=======

	RSymphony * audio_manager = new RSymphony();
	audio_manager->addMusicTrack(1);
	audio_manager->addSoundTrack(1);
	audio_manager->loadTrack(AudioComponents::MUSIC_TRACK, AudioComponents::TRACK_0, "Assets/Garage.wav", 10, true);
	audio_manager->loadTrack(AudioComponents::SOUND_TRACK, AudioComponents::TRACK_0, "Assets/sound.wav", 10);
	audio_manager->playTrack(AudioComponents::MUSIC_TRACK, AudioComponents::TRACK_0);
	audio_manager->playTrack(AudioComponents::SOUND_TRACK, AudioComponents::TRACK_0);
>>>>>>> Rename audio manager as 'Symphony'

	RShaderComponent * shader0 = new RShaderComponent("Shaders/basic.vert", "Shaders/basic.frag");

	RStaticLayer * layer0 = new RStaticLayer(*shader0);

	RGroup * g = new RGroup(Matrix4::translation(Vector3D(0.0f, 0.0f, 0.0f)) * Matrix4::rotation(0, Vector3D(0, 0, 1)));
<<<<<<< HEAD
<<<<<<< HEAD
	RGroup * g2 = new RGroup(Matrix4::translation(Vector3D(0.0f, 0.0f, 0.0f)) * Matrix4::rotation(0, Vector3D(0, 0, 1)));
=======
	RGroup * g2 = new RGroup(Matrix4::translation(Vector3D(8.0f, 0.0f, 0.0f)) * Matrix4::rotation(0, Vector3D(0, 0, 1)));
>>>>>>> Modify workflow to accept only RGameObject objects
=======
	RGroup * g2 = new RGroup(Matrix4::translation(Vector3D(0.0f, 0.0f, 0.0f)) * Matrix4::rotation(0, Vector3D(0, 0, 1)));
>>>>>>> Add sphere collider

	RTimer * timer = new RTimer(2);
	timer->setFrameCounter();

<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> Add simplified game-physics object creation
	APhysicsMaterial mat;

	RGameObject * object1 = new RGameObject(2, 2,
											3, 3,
											"Assets/debug.png",
											true,
											new APhysicsObject(mat,
															   true,
															   EColliderType::BOX,
															   new ABoxCollider(RML::Vector3D(),
																				RML::Vector3D(3.0f, 3.0f, 1.0f))));
<<<<<<< HEAD

	g->add(object1);
	g->add(g2);
=======
	RGameObject * object1 = new RGameObject(10.0f, 1.0f, 1.0f, 1.0f, "Assets/test8.png");
	RGameObject * object2 = new RGameObject(1.0f, 2.0f, 1.0f, 1.0f, "Assets/test9.png");
=======
	RGameObject * object1 = new RGameObject(1.0f, 1.0f, 1.0f, 1.0f, "Assets/test8.png");
	RGameObject * object2 = new RGameObject(1.5f, 1.5f, 1.0f, 1.0f, "Assets/test9.png");
>>>>>>> Add sphere collider
=======
>>>>>>> Add simplified game-physics object creation

	g->add(object1);
<<<<<<< HEAD
	g->add(object2);
>>>>>>> Shift texture and sprite ownership to game object
=======
	g->add(g2);
<<<<<<< HEAD
	g2->add(object2);
>>>>>>> Modify workflow to accept only RGameObject objects
=======
>>>>>>> Add simplified game-physics object creation
	layer0->addGroup(*g);
	layer0->addGroup(*g2);

	shader0->enableShader();
	GLint textureIDs[32];
	for(int i = 0; i < 32; i++)
	{
		textureIDs[i] = i;
	}
	shader0->setUniform1iv("textures", textureIDs, 32);

<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> Add box and sphere interaction
	ABoxCollider box(Vector3D(3, 3, 0), Vector3D(5, 5, 0));
	ASphereCollider sphere(Vector3D(5.5, 5.5, 0), 1);

	LOG(box.tryIntersect(sphere).getGap());
<<<<<<< HEAD

=======
	ABoxCollider testBox1(Vector3D(1, 1, 1), Vector3D(2, 2, 1));
	ABoxCollider testBox2(Vector3D(1.5, 1.5, 1), Vector3D(3, 3, 1));

	//LOG("Boxes: " + std::to_string(testBox1.tryIntersect(testBox2).getGap()));
	LOG(testBox1.tryIntersect(testBox2).getGap());
>>>>>>> Add sphere collider
=======
	APlaneCollider plane(Vector3D(1, 1, 0), Vector3D(10, -4, 0));
	ASphereCollider sphere(Vector3D(5, 5, 0), 1);

	LOG(plane.tryIntersect(sphere).getIsIntersect());
>>>>>>> Add sphere-plane collision detection
=======
	APlaneCollider plane(Vector3D(-1, -1, 0), Vector3D(1, 1, 0));
	APlaneCollider plane2(Vector3D(1, -1, 0), Vector3D(1, 1, 0));

<<<<<<< HEAD
	LOG(plane.tryIntersect(box).getIsIntersect());
>>>>>>> Add plane-box interaction
=======
	LOG(plane.tryIntersect(plane2).getIsIntersect());
>>>>>>> Add plane-plane interaction
=======

>>>>>>> Add box and sphere interaction
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
<<<<<<< HEAD
<<<<<<< HEAD
	delete g2;
	delete object1;
=======
=======
	delete g2;
>>>>>>> Modify workflow to accept only RGameObject objects
	delete object1;
<<<<<<< HEAD
	delete object2;
>>>>>>> Shift texture and sprite ownership to game object
=======
>>>>>>> Add simplified game-physics object creation
	delete layer0;
	delete shader0;
	delete audio_manager;
	delete GameWindow;

	return 0;
}
