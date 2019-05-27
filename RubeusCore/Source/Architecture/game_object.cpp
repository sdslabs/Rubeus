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
		int childCount,
		std::initializer_list<RGameObject *> children
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

		if (children.size() != 0)
		{
			// Populate the children array
			for (auto & child : children)
			{
				if (this->m_Name == child->m_Name)
				{
					ASSERT("Warning! " + name + " has the same name as its child");
				}
				
				this->add(child);
				child->m_Parent = this;
			}
		}

		if (enablePhysics == true && m_PhysicsObject == NULL)
		{
			ERRORLOG("Invalid game object. Physics has been enabled for an object. Specify the physics object for " + name);
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

		if (m_HasPhysics == true)
		{
			delete m_PhysicsObject;
		}
	}

	void RGameObject::submit(GraphicComponents::RRendererComponent & renderer)
	{
		renderer.push(m_TransformationMatrix);

		if (this->m_IsSubmitted == false)
		{
			this->m_IsSubmitted = true;
			this->m_Sprite->submit(renderer);
		}

		for (auto & child : m_Children)
		{
			if (child->m_IsSubmitted == false)
			{
				child->m_IsSubmitted = true;
				child->m_Sprite->submit(renderer);
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
