#include "paddle.h"

Rubeus::GraphicComponents::RWindowComponent * GameWindow = new Rubeus::GraphicComponents::RWindowComponent("Hello World",
																										   1280, 720,
																										   Rubeus::GraphicComponents::EWindowParameters::WINDOWED_MODE,
																										   Rubeus::GraphicComponents::EWindowParameters::NON_RESIZABLE_WINDOW,
																										   1);

Rubeus::RInputManager inputManager(*GameWindow);

void paddle::begin()
{
	using namespace ::Rubeus;

	m_ThisTicks = true;
}

void paddle::onHit(RGameObject * hammer, RGameObject * nail, Rubeus::Awerere::ACollideData & collisionData)
{
}

void paddle::tick()
{
	if (inputManager.isKeyBindingPressed("Up"))
	{
		this->m_PhysicsObject->m_Collider->m_Position.y += 0.1f;
		this->m_Sprite->m_Position.y += 0.1f;
	}

	if (inputManager.isKeyBindingPressed("Down"))
	{
		this->m_PhysicsObject->m_Collider->m_Position.y -= 0.1f;
		this->m_Sprite->m_Position.y -= 0.1f;
	}

	if (this->m_Sprite->m_Position.y > 6.0f)
	{
		this->m_PhysicsObject->m_Collider->m_Position.y -= 0.1f;
		this->m_Sprite->m_Position.y -= 0.1f;
	}

	if (this->m_Sprite->m_Position.y < 0.0f)
	{
		this->m_PhysicsObject->m_Collider->m_Position.y += 0.1f;
		this->m_Sprite->m_Position.y += 0.1f;
	}
}

void paddle::onMessage(Rubeus::Message * msg)
{
	switch (msg->m_Type)
	{
		case Rubeus::EMessageCode::system_ok:
			USERLOG("All cool!");
			break;
	}
}
