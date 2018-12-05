#include "paddle.h"
#include "ball.h"

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

void paddle::onHit(RGameObject * hammer, RGameObject * nail, const Rubeus::Awerere::ACollideData & collisionData)
{
	if (this->m_PhysicsObject->m_Collider->m_Position.x > 15.0f)
	{
		LOG(hammer->m_PhysicsObject->m_Collider->tryIntersect(*nail->m_PhysicsObject->m_Collider).getIsIntersect());
	}

	RGameObject * temp;

	temp = reinterpret_cast<ball *>(hammer);

	if (temp == NULL)
	{
		temp = reinterpret_cast<ball *>(nail);

		LOG("hammer hit");
	}
	else
	{
		LOG("nail hit");

		LOG(collisionData.getCollisionNormal());
	}
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
