#include "ball.h"

void ball::begin()
{
	using namespace ::Rubeus;

	m_ThisTicks = true;
}

void ball::onHit(RGameObject * hammer, RGameObject * nail, const Rubeus::Awerere::ACollideData & collisionData)
{
}

void ball::tick()
{
	if (this->m_Sprite->m_Position.y > 9.0f)
	{
		this->m_PhysicsObject->m_Collider->m_Momentum.y *= -1.0f;
	}

	if (this->m_Sprite->m_Position.y < 0.0f)
	{
		this->m_PhysicsObject->m_Collider->m_Momentum.y *= -1.0f;
	}

	if (m_Sprite->m_Position.x > 15.5f)
	{

	}
}

void ball::onMessage(Rubeus::Message * msg)
{
	switch (msg->m_Type)
	{
		case Rubeus::EMessageCode::system_ok:
			USERLOG("All cool!");
			break;
	}
}

