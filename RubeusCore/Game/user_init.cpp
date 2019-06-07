#include "user_init.h"
#include "../RubeusCore.h"

class PingPong : Rubeus::RGame
{
protected:
	Rubeus::RLevel* playLevel;
	paddle* leftPaddle;
	paddle* rightPaddle;
	ball* matchBall;
<<<<<<< Updated upstream
	ball* matchBall2;
	Rubeus::GraphicComponents::RTexture* texture;
=======
<<<<<<< HEAD
<<<<<<< HEAD
	Rubeus::GraphicComponents::RTexture* texture1;
	Rubeus::GraphicComponents::RTexture* texture2;
	Rubeus::GraphicComponents::RTexture* texture3;
=======
	Rubeus::GraphicComponents::RTexture* texture;
>>>>>>> Replace objects on the screen
=======
	Rubeus::GraphicComponents::RTexture* texture1;
	Rubeus::GraphicComponents::RTexture* texture2;
	Rubeus::GraphicComponents::RTexture* texture3;
>>>>>>> Switch to using actual color values
>>>>>>> Stashed changes

	Rubeus::GraphicComponents::RSprite* sprite;

	void init() override
	{
		using namespace Rubeus;
		using namespace Rubeus::Awerere;
		using namespace Rubeus::GraphicComponents;

		playLevel = new play_level("play_level");

<<<<<<< Updated upstream
		texture = new RTexture("Assets/test9.png");
		sprite = new RSprite(0.0f, 0.0f, 0.5f, 3.0f, texture);
=======
<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> Switch to using actual color values
		texture1 = new RTexture("Assets/test9.png");
		texture2 = new RTexture("Assets/test9.png");
		texture3 = new RTexture("Assets/test9.png");
		sprite1 = new RSprite(0.0f, 0.0f, 0.5f, 3.0f, texture1);
		sprite2 = new RSprite(0.0f, 0.0f, 0.5f, 3.0f, texture2);
		sprite3 = new RSprite(0.0f, 0.0f, 0.5f, 3.0f, texture3);
<<<<<<< HEAD
=======
		texture = new RTexture("Assets/test9.png");
<<<<<<< HEAD
		sprite = new RSprite(0.0f, 0.0f, 0.5f, 3.0f, RML::Vector4D(0.5f, 0.5f, 0.5f, 1.0f));
>>>>>>> Fix frag shader always using color values
=======
		sprite1 = new RSprite(0.0f, 0.0f, 0.5f, 3.0f, RML::Vector4D(0.5f, 0.5f, 0.5f, 1.0f));
		sprite2 = new RSprite(0.0f, 0.0f, 0.5f, 3.0f, RML::Vector4D(0.5f, 0.5f, 0.5f, 1.0f));
		sprite3 = new RSprite(0.0f, 0.0f, 0.5f, 3.0f, RML::Vector4D(0.5f, 0.5f, 0.5f, 1.0f));
>>>>>>> Switch to using DevIL 1.6.7 instead of DevIL 1.8
=======
>>>>>>> Switch to using actual color values
>>>>>>> Stashed changes

		leftPaddle = new paddle(
			"left_paddle",
			playLevel,
			*sprite,
			RML::Matrix4::translation(sprite->getPosition()),
			true,
			new ABoxCollider(RML::Vector2D(0.0f, 0.0f),
				RML::Vector2D(0.5f, 3.0f)),
			true
		);

		rightPaddle = new paddle(
			"right_paddle",
			playLevel,
			*sprite,
			RML::Matrix4::translation(sprite->getPosition()),
			true,
			new ABoxCollider(RML::Vector2D(15.5f, 0.0f),
				RML::Vector2D(16.0f, 3.0f)),
			true);

		matchBall2 = new ball(
			"ball2",
			playLevel,
			*sprite,
			RML::Matrix4::translation(sprite->getPosition()),
			true,
			new ABoxCollider(RML::Vector2D(8.0f, 4.5f),
				RML::Vector2D(8.5f, 5.0f)),
			true,
			APhysicsMaterial::DefaultMaterial);

		matchBall = new ball(
			"ball",
			playLevel,
			*sprite,
			RML::Matrix4::translation(sprite->getPosition()),
			true,
			new ABoxCollider(RML::Vector2D(8.0f, 4.5f),
				RML::Vector2D(8.5f, 5.0f)),
			true,
			APhysicsMaterial::DefaultMaterial,
			1, { matchBall2 });
	}

	void end() override
	{
		delete matchBall;
		delete matchBall2;
		delete leftPaddle;
		delete rightPaddle;
<<<<<<< Updated upstream
		delete sprite;
		delete texture;
=======
		delete sprite1;
		delete sprite2;
		delete sprite3;
<<<<<<< HEAD
<<<<<<< HEAD
		delete texture1;
		delete texture2;
		delete texture3;
=======
		delete texture;
>>>>>>> Switch to using DevIL 1.6.7 instead of DevIL 1.8
=======
		delete texture1;
		delete texture2;
		delete texture3;
>>>>>>> Switch to using actual color values
>>>>>>> Stashed changes
	}

public:
	PingPong()
	{
		m_StartupLevel = "play_level";
	}
};

auto* pingPong = new PingPong();
