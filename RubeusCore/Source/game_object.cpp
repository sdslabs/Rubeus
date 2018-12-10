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

	void RGameObject::DeleteAll()
	{
		for (auto & item : RGameObject::InstantiatedGameObjects)
		{
			if (item.second != NULL)
			{
				delete item.second;
			}
		}
	}

	RGameObject::RGameObject(std::string name, std::string levelName, float x, float y, float deltaX, float deltaY, const char * imageFilePath, bool enablePhysics, const Awerere::EColliderType & type, Awerere::ACollider * collider, bool generatesHit, const Awerere::APhysicsMaterial & physicsMat)
		:
		m_Name(name),
		m_UsedByLevelName(levelName),
		m_Sprite(new GraphicComponents::RSprite(x, y, deltaX, deltaY, new GraphicComponents::RTexture(imageFilePath))),
		m_PhysicsObject(enablePhysics == true ? new Awerere::APhysicsObject(physicsMat, enablePhysics, type, collider, m_Sprite) : NULL),
		m_ThisTicks(false),
		m_UsesTexture(true),
		m_HasPhysics(enablePhysics),
		m_GeneratesHit(generatesHit)
	{
		InstantiatedGameObjects.insert(std::pair<std::string, RGameObject *>(name, this));

		if (enablePhysics == true && m_PhysicsObject == NULL)
		{
			ERRORLOG("Invalid game object. Physics has been enabled. Specify a physics object");
		}

		if (m_PhysicsObject != NULL)
		{
			m_PhysicsObject->m_EnablePhysics = enablePhysics;
		}

		if (collider != NULL)
		{
			m_PhysicsObject->m_Collider->m_Sprite = m_Sprite;
		}
	}

	RGameObject::RGameObject(std::string name, std::string levelName, float x, float y, float deltaX, float deltaY, float & r, float & g, float & b, bool enablePhysics, const Awerere::APhysicsMaterial & material, const Awerere::EColliderType & type, Awerere::ACollider * collider, bool generatesHit)
		:
		m_Name(name),
		m_UsedByLevelName(levelName),
		m_Sprite(new GraphicComponents::RSprite(x, y, deltaX, deltaY, RML::Vector4D(r, g, b, 1.0f))),
		m_PhysicsObject(enablePhysics == true ? new Awerere::APhysicsObject(material, enablePhysics, type, collider) : NULL),
		m_ThisTicks(false),
		m_UsesTexture(false),
		m_HasPhysics(enablePhysics),
		m_GeneratesHit(generatesHit)
	{
		InstantiatedGameObjects.insert(std::pair<std::string, RGameObject *>(name, this));

		if (enablePhysics == true && m_PhysicsObject == NULL)
		{
			ERRORLOG("Invalid game object. Physics has been enabled for a NULL values Physics object pointer. Specify a non-NULL physics object.");
		}

		if (collider != NULL)
		{
			m_PhysicsObject->m_Collider->m_Sprite = m_Sprite;
		}
	}

	RGameObject::RGameObject()
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
				LOG(this->RMasterComponent::getName() + std::string(" reporting for duty"));
		}
	}
}
