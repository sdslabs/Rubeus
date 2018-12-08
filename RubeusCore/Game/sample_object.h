#pragma once

#include "../RubeusCore.h"

class USampleObject : public Rubeus::RGameObject
{
public:
	USampleObject(float x, float y, float deltaX, float deltaY, const char * imageFilePath, bool enablePhysics = false, const Rubeus::Awerere::EColliderType & type = Rubeus::Awerere::EColliderType::NO_COLLIDER, Rubeus::Awerere::ACollider * collider = NULL, bool generatesHit = false, const Rubeus::Awerere::APhysicsMaterial & physicsMat = Rubeus::Awerere::APhysicsMaterial())
		: RGameObject(x, y, deltaX, deltaY, imageFilePath, enablePhysics, type, collider, generatesHit, physicsMat)
	{
	}

	USampleObject(float x, float y, float deltaX, float deltaY, float & r, float & g, float & b, bool enablePhysics, const Rubeus::Awerere::APhysicsMaterial & material, const Rubeus::Awerere::EColliderType & type, Rubeus::Awerere::ACollider * collider, bool generatesHit)
		: RGameObject(x, y, deltaX, deltaY, r, g, b, enablePhysics, material, type, collider, generatesHit)
	{
	}

	void begin() override;
	void onHit(RGameObject * hammer, RGameObject * nail, const Rubeus::Awerere::ACollideData & collisionData) override;
	void onMessage(Rubeus::Message * msg) override;
	void tick() override;
};
