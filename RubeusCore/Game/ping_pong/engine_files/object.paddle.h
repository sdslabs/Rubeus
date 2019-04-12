#pragma once

#include "../RubeusCore.h"

class paddle : public Rubeus::RGameObject
{
	// User members



	// Do not look below
public:

	paddle(std::string name, std::string levelName, float x, float y, float deltaX, float deltaY, const char * imageFilePath, bool enablePhysics = false, const Rubeus::Awerere::EColliderType & type = Rubeus::Awerere::EColliderType::NO_COLLIDER, Rubeus::Awerere::ACollider * collider = NULL, bool generatesHit = false, const Rubeus::Awerere::APhysicsMaterial & physicsMat = Rubeus::Awerere::APhysicsMaterial(), GraphicComponents::RGroup * parent)
		: RGameObject(name, levelName, x, y, deltaX, deltaY, imageFilePath, enablePhysics, type, collider, generatesHit, physicsMat, parent)
	{
	}

	// TODO: Add default paramters
	paddle(std::string name, std::string levelName, float x, float y, float deltaX, float deltaY, float & r, float & g, float & b, bool enablePhysics = false, const Rubeus::Awerere::APhysicsMaterial & material = Rubeus::Awerere::APhysicsMaterial(), const Rubeus::Awerere::EColliderType & type = Rubeus::Awerere::EColliderType::NO_COLLIDER, Rubeus::Awerere::ACollider * collider = NULL, bool generatesHit = false, GraphicComponents::RGroup * parent)
		: RGameObject(name, levelName, x, y, deltaX, deltaY, r, g, b, enablePhysics, material, type, collider, generatesHit, parent)
	{
	}

	void begin() override;
	void onHit(RGameObject * hammer, RGameObject * nail, const Rubeus::Awerere::ACollideData & collisionData) override;
	void onMessage(Rubeus::Message * msg) override;
	void tick() override;
};
