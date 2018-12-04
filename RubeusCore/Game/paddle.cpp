#include "../RubeusCore.h"

paddle::paddle()
{
	m_Name = "paddle";
}

void paddle::begin()
{
	m_ThisTicks = true;
}

void paddle::onHit(RGameObject * hammer, RGameObject * nail, Rubeus::Awerere::ACollideData & collisionData)
{

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

void paddle::tick()
{

}
