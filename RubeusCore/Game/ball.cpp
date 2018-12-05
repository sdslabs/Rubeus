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
	if (this->m_PhysicsObject->m_Collider->m_Position.y > 9 || this->m_PhysicsObject->m_Collider->m_Position.y < 0)
	{
		this->m_PhysicsObject->m_Collider->m_Momentum.y *= -1.0f;
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

