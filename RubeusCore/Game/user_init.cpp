#include "user_init.h"
#include "../RubeusCore.h"

class PingPong : Rubeus::RGame
{
protected:
	Rubeus::RLevel * playLevel;
	paddle * leftPaddle;
	paddle * rightPaddle;
	ball * matchBall;

	void init() override
	{
		playLevel = new play_level("play_level");

		leftPaddle = new paddle("left_paddle",
								"play_level",
								0.0f, 0.0f,
								0.5f, 3.0f,
								"Assets/test9.png", true,
								Rubeus::Awerere::EColliderType::BOX,
								new Rubeus::Awerere::ABoxCollider(RML::Vector2D(0.0f, 0.0f),
																  RML::Vector2D(0.5f, 3.0f)),
								true);

		rightPaddle = new paddle("right_paddle", "play_level",
								 15.5f, 0.0f,
								 0.5f, 3.0f,
								 "Assets/test8.png",
								 true,
								 Rubeus::Awerere::EColliderType::BOX,
								 new Rubeus::Awerere::ABoxCollider(RML::Vector2D(15.5f, 0.0f),
																   RML::Vector2D(16.0f, 3.0f)),
								 true);

		matchBall = new ball("ball",
							 "play_level",
							 8.0f, 4.5f,
							 0.5f, 0.5f,
							 "Assets/test8.png",
							 true,
							 Rubeus::Awerere::EColliderType::BOX,
							 new Rubeus::Awerere::ABoxCollider(RML::Vector2D(8.0f, 4.5f),
															   RML::Vector2D(8.5f, 5.0f)),
							 true);

	}

	void end() override
	{
	}

public:
	PingPong()
	{
		m_StartupLevel = "play_level";
	}
};

auto * pingPong = new PingPong();
