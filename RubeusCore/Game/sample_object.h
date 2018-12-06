#pragma once

#include "../RubeusCore.h"

class sampleObject : public Rubeus::RGameObject
{
public:
	sampleObject(float x, float y, float deltaX, float deltaY, const char * imageFilePath, bool enablePhysics = false, const Rubeus::Awerere::EColliderType & type = Rubeus::Awerere::EColliderType::NO_COLLIDER, Rubeus::Awerere::ACollider * collider = NULL, bool generatesHit = false, const Rubeus::Awerere::APhysicsMaterial & physicsMat = Rubeus::Awerere::APhysicsMaterial())
		: RGameObject(x, y, deltaX, deltaY, imageFilePath, enablePhysics, type, collider, generatesHit, physicsMat)
	{
	}

	void begin() override;
	void onHit(RGameObject * hammer, RGameObject * nail, const Rubeus::Awerere::ACollideData & collisionData) override;
	void onMessage(Rubeus::Message * msg) override;
	void tick() override;
};
