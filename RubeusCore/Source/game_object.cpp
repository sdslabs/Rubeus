/**
 * @file		Source/game_object.cpp.
 *
 * @brief	Defines the Game Object class
 */

#include <game_object.h>
#include <awerere_physics_object.h>

namespace Rubeus
{
	RGameObject::RGameObject(float x, float y, float deltaX, float deltaY, const char * imageFilePath, bool enablePhysics, const Awerere::EColliderType & type, Awerere::ACollider * collider, bool generatesHit, const Awerere::APhysicsMaterial & physicsMat)
		:
		m_Sprite(new GraphicComponents::RSprite(x, y, deltaX, deltaY, new GraphicComponents::RTexture(imageFilePath))),
		m_PhysicsObject(new Awerere::APhysicsObject(physicsMat, enablePhysics, type, collider, m_Sprite)),
		m_ThisTicks(false),
		m_UsesTexture(true),
		m_HasPhysics(enablePhysics),
		m_GeneratesHit(generatesHit)
	{
		if (enablePhysics == true && m_PhysicsObject == NULL)
		{
			ERRORLOG("Invalid game object. Physics has been enabled. Specify a physics object");
		}

		if (m_PhysicsObject != NULL)
		{
			m_PhysicsObject->m_EnablePhysics = enablePhysics;
		}

		m_PhysicsObject->m_Collider->m_Sprite = m_Sprite;
	}

	RGameObject::RGameObject(float x, float y, float deltaX, float deltaY, float & r, float & g, float & b, bool enablePhysics, const Awerere::APhysicsMaterial & material, const Awerere::EColliderType & type, Awerere::ACollider * collider, bool generatesHit)
		:
		m_Sprite(new GraphicComponents::RSprite(x, y, deltaX, deltaY, RML::Vector4D(r, g, b, 1.0f))),
		m_PhysicsObject(new Awerere::APhysicsObject(material, enablePhysics, type, collider)),
		m_ThisTicks(false),
		m_UsesTexture(false),
		m_HasPhysics(enablePhysics),
		m_GeneratesHit(generatesHit)
	{
		if (enablePhysics == true && m_PhysicsObject == NULL)
		{
			ERRORLOG("Invalid game object. Physics has been enabled for a NULL values Physics object pointer. Specify a non-NULL physics object.");
		}

		m_PhysicsObject->m_Collider->m_Sprite = m_Sprite;
	}

	RGameObject::RGameObject()
	{
		m_IsGroup = true;
	}

	RGameObject::~RGameObject()
	{
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
