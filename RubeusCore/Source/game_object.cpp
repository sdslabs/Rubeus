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
		GraphicComponents::RSprite & sprite,
		RML::Matrix4 transform,
		bool enablePhysics,
		Awerere::ACollider * collider,
		bool generatesHit,
		const Awerere::APhysicsMaterial & physicsMat,
		int childCount = 0,
		...
	)
		:
		m_Name(name),
		m_ContainingLevel(levelName),
		m_Sprite(&sprite),
		m_TransformationMatrix(transform),
		m_PhysicsObject(enablePhysics == true ? new Awerere::APhysicsObject(physicsMat, enablePhysics, collider, m_Sprite) : NULL),
		m_ThisTicks(false),
		m_UsesTexture(true),
		m_HasPhysics(enablePhysics),
		m_GeneratesHit(generatesHit)
	{
		InstantiatedGameObjects.insert(std::pair<std::string, RGameObject *>(name, this));

		// Populate the children array
		va_list list;

		va_start(list, childCount);

		for (int arg = 0; arg < childCount; ++arg)
			this->add(va_arg(list, RGameObject *));

		va_end(list);

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
		: m_ContainingLevel(Rubeus::RGame::getActiveLevel())
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

	void RGameObject::submit(GraphicComponents::RRendererComponent & renderer) const
	{
		renderer.push(m_TransformationMatrix);

		for (auto child : m_Children)
		{
			if (child->m_IsGroup == false)
			{
				child->m_Sprite->submit(renderer);
			}
			else
			{
				for (auto groupChild : (dynamic_cast<RGroup *>(child))->m_Children)
				{
					groupChild->m_Sprite->submit(renderer);
				}
			}
		}

		renderer.pop();
	}

	void RGameObject::begin()
	{
		// Leave this empty
	}

	void RGameObject::tick()
	{
		// Leave this empty
	}

	void RGameObject::onHit(RGameObject * hammer, RGameObject * nail, const Awerere::ACollideData & collisionData)
	{
		// Leave this empty
	}

	RGameObject & RGameObject::add(RGameObject * gameObject)
	{
		m_Children.push_back(gameObject);

		return *this;
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
