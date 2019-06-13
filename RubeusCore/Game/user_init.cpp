#include "user_init.h"
#include "../RubeusCore.h"

class PingPong : Rubeus::RGame
{
protected:
	Rubeus::RLevel* playLevel;
	paddle* leftPaddle;
	paddle* rightPaddle;
	ball* matchBall;
	Rubeus::GraphicComponents::RTexture* texture1;
	Rubeus::GraphicComponents::RTexture* texture2;
	Rubeus::GraphicComponents::RTexture* texture3;
	Rubeus::GraphicComponents::RSprite* sprite1;
	Rubeus::GraphicComponents::RSprite* sprite2;
	Rubeus::GraphicComponents::RSprite* sprite3;

	void init() override
	{
		using namespace Rubeus;
		using namespace Rubeus::Awerere;
		using namespace Rubeus::GraphicComponents;

		playLevel = new play_level("play_level");

		texture1 = new RTexture("Assets/test9.png");
		texture2 = new RTexture("Assets/test9.png");
		texture3 = new RTexture("Assets/test9.png");
		sprite1 = new RSprite(0.0f, 0.0f, 0.5f, 3.0f, texture1);
		sprite2 = new RSprite(0.0f, 0.0f, 0.5f, 3.0f, texture2);
		sprite3 = new RSprite(0.0f, 0.0f, 0.5f, 3.0f, texture3);

		leftPaddle = new paddle(
			"left_paddle",
			playLevel,
			*sprite1,
			RML::Matrix4::translation(RML::Vector3D(0.0f, 0.0f, 0.0f)),
			true,
			new ABoxCollider(RML::Vector2D(0.0f, 0.0f),
				RML::Vector2D(0.5f, 3.0f)),
			true
		);

		rightPaddle = new paddle(
			"right_paddle",
			playLevel,
			*sprite2,
			RML::Matrix4::translation(RML::Vector3D(5.0f, 0.0f, 0.0f)),
			true,
			new ABoxCollider(RML::Vector2D(5.0f, 0.0f),
				RML::Vector2D(5.5f, 3.0f)),
			true
		);

		matchBall = new ball(
			"ball",
			playLevel,
			*sprite3,
			RML::Matrix4::translation(RML::Vector3D(7.0f, 0.0f, 0.0f)),
			true,
			new ABoxCollider(RML::Vector2D(7.0f, 0.0f),
				RML::Vector2D(7.5f, 3.0f)),
			true,
			APhysicsMaterial::DefaultMaterial
		);
	}

	void end() override
	{
		delete matchBall;
		delete leftPaddle;
		delete rightPaddle;
		delete sprite1;
		delete sprite2;
		delete sprite3;
		delete texture1;
		delete texture2;
		delete texture3;
	}

public:
	PingPong()
	{
		m_StartupLevel = "play_level";
	}
};

auto* pingPong = new PingPong();
