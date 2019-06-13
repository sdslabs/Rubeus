#include "object.ball.h"

void ball::begin()
{
	this->m_PhysicsObject->m_Collider->m_PhysicsMaterial.m_Gravity.y = 0.0f;
	this->m_PhysicsObject->m_Collider->m_Momentum.x = 1.0f;
}

void ball::onHit(RGameObject * hammer, RGameObject * nail, const Rubeus::Awerere::ACollideData & collisionData)
{
}

void ball::tick()
{
}

