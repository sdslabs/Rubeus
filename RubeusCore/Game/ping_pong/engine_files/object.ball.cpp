#include "object.ball.h"

void Oball::begin()
{
	this->m_PhysicsObject->m_Collider->m_PhysicsMaterial.m_Gravity.y = 0.0f;
	this->m_PhysicsObject->m_Collider->m_Momentum.x = 1.0f;
}

void Oball::onHit(RGameObject * hammer, RGameObject * nail, const Rubeus::Awerere::ACollideData & collisionData)
{
}

void Oball::tick()
{
}

void Oball::onMessage(Rubeus::Message * msg)
{
}
