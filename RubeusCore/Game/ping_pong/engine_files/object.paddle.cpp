#include "object.paddle.h"

void paddle::begin()
{
	this->m_PhysicsObject->m_Collider->m_PhysicsMaterial.m_Gravity.y = 0.0f;

	auto * inputManager = Rubeus::RGame::getEngine()->getCurrentLevelInputManager();

	inputManager->addKeyToKeyBinding("Ascend", Rubeus::EKeyboardKeys::__UP);
	inputManager->addKeyToKeyBinding("Descend", Rubeus::EKeyboardKeys::__DOWN);

	this->m_PhysicsObject->m_Collider->m_PhysicsMaterial.m_Mass = 1000000.0f;

	this->m_ThisTicks = true;
}

void paddle::onHit(RGameObject * hammer, RGameObject * nail, const Rubeus::Awerere::ACollideData & collisionData)
{
}

void paddle::tick()
{
	if (Rubeus::RGame::getEngine()->getCurrentLevelInputManager()->isKeyBindingPressed("Ascend"))
	{
		this->m_PhysicsObject->m_Collider->m_Momentum.y = +3.0f;
	}
	else if (Rubeus::RGame::getEngine()->getCurrentLevelInputManager()->isKeyBindingPressed("Descend"))
	{
		this->m_PhysicsObject->m_Collider->m_Momentum.y = -3.0f;
	}
	else
	{
		this->m_PhysicsObject->m_Collider->m_Momentum.y = 0.0f;
	}
}

