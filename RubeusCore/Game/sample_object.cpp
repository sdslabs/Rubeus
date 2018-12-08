#include "sample_object.h"

void USampleObject::begin()
{
	m_Name = "sample_object";

	m_ThisTicks = true;
}

void USampleObject::onHit(RGameObject * hammer, RGameObject * nail, const Rubeus::Awerere::ACollideData & collisionData)
{
}

void USampleObject::tick()
{
}

void USampleObject::onMessage(Rubeus::Message * msg)
{
}

