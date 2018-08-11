#include <game_object.h>

namespace Rubeus
{
	void RGameObject::setPhysics(bool enablePhysics, Rubeus::Awerere::APhysicsObject * physicsObject)
	{
		if(enablePhysics == true)
		{
			m_PhysicsObject = *physicsObject;
			m_PhysicsObject.m_EnablePhysics = true;
		}
	}

	RGameObject::RGameObject(float x, float y, float deltaX, float deltaY, const char * imageFilePath, Awerere::EColliderType type, bool enablePhysics)
		:
		m_Sprite(new GraphicComponents::RSprite(x, y, deltaX, deltaY, new GraphicComponents::RTexture(imageFilePath))),
		m_ThisTicks(false),
		m_UsesTexture(true)
	{
		setPhysics(enablePhysics, new Awerere::APhysicsObject());
	}

	RGameObject::RGameObject(float x, float y, float deltaX, float deltaY, float r, float g, float b, bool enablePhysics, Awerere::APhysicsObject * physicsObject)
		:
		m_Sprite(new GraphicComponents::RSprite(x, y, deltaX, deltaY, RML::Vector4D(r, g, b, 1.0f))),
		m_ThisTicks(false),
		m_UsesTexture(false)
	{
		setPhysics(enablePhysics, physicsObject);
	}

	RGameObject::RGameObject()
	{
		m_IsGroup = true;
	}

	RGameObject::~RGameObject()
	{
		if(m_IsGroup == false)
		{
			delete m_Sprite->m_Texture;
			delete m_Sprite;
		}
	}

	void RGameObject::tick()
	{
	}
}
