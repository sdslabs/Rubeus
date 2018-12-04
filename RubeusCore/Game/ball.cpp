#include "ball.h"

void ball::begin()
{
	using namespace ::Rubeus;

	m_ThisTicks = true;
}

void ball::onHit(RGameObject * hammer, RGameObject * nail, Rubeus::Awerere::ACollideData & collisionData)
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
	}
}

void ball::tick()
{
	if (this->m_Sprite->m_Position.y > 9.0f)
	{
		this->m_PhysicsObject->m_Collider->m_Momentum.y += -1.0f;
	}

	if (this->m_Sprite->m_Position.y < 0.0f)
	{
		this->m_PhysicsObject->m_Collider->m_Momentum.y += -1.0f;
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

