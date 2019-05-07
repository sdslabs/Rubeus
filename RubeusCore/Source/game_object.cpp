/**
 * @file		Source/game_object.cpp.
 *
 * @brief	Defines the Game Object class
 */

#include <game_object.h>
#include <awerere_physics_object.h>

namespace Rubeus
{
	std::unordered_map<std::string, RGameObject *> RGameObject::InstantiatedGameObjects;

	RGameObject::RGameObject(
		std::string name,
		RLevel * levelName,
		GraphicComponents::RSprite& sprite,
		bool enablePhysics = false,
		Awerere::ACollider* collider = NULL,
		bool generatesHit = false,
		const Awerere::APhysicsMaterial& physicsMat = Awerere::APhysicsMaterial()
	)
		:
		m_Name(name),
		m_UsedByLevelName(levelName),
		m_Sprite(&sprite),
		m_PhysicsObject(enablePhysics == true ? new Awerere::APhysicsObject(physicsMat, enablePhysics, collider, m_Sprite) : NULL),
		m_ThisTicks(false),
		m_UsesTexture(true),
		m_HasPhysics(enablePhysics),
		m_GeneratesHit(generatesHit)
	{
		InstantiatedGameObjects.insert(std::pair<std::string, RGameObject *>(name, this));

		if (enablePhysics == true && m_PhysicsObject == NULL)
		{
			ERRORLOG("Invalid game object. Physics has been enabled. Specify a physics object for " + name);
		}
		
		if (m_PhysicsObject != NULL)
		{
			m_PhysicsObject->m_EnablePhysics = enablePhysics;
		}

		if (collider != NULL && m_PhysicsObject != NULL)
		{
			m_PhysicsObject->m_Collider->m_Sprite = m_Sprite;
		}
	}

	RGameObject::RGameObject()
		: m_UsedByLevelName(Rubeus::RGame::getActiveLevel())
	{
		m_IsGroup = true;
	}

	RGameObject::~RGameObject()
	{
		InstantiatedGameObjects[m_Name] = NULL;

		if (m_IsGroup == false)
		{
			delete m_Sprite->m_Texture;
			delete m_Sprite;
		}

		if (m_HasPhysics == true)
		{
			delete m_PhysicsObject;
		}
	}

	void RGameObject::begin()
	{
	}

	void RGameObject::tick()
	{
	}

	void RGameObject::onHit(RGameObject * hammer, RGameObject * nail, const Awerere::ACollideData & collisionData)
	{
	}

	void RGameObject::onMessage(Message * msg)
	{
		switch (msg->m_Type)
		{
			case system_ok:
				LOG(this->RMasterComponent::getName() + std::string(" is OK"));
		}
	}
}
