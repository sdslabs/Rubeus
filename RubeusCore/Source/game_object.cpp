#include <game_object.h>

namespace Rubeus
{
	RGameObject::RGameObject(float x, float y, float deltaX, float deltaY, const char * imageFilePath, bool enablePhysics, Awerere::APhysicsObject * physicsObject)
		:
		m_Sprite(new GraphicComponents::RSprite(x, y, deltaX, deltaY, new GraphicComponents::RTexture(imageFilePath))),
		m_ThisTicks(false),
		m_UsesTexture(true)
	{
		if(enablePhysics == false)
		{
			m_PhysicsObject = NULL;
		}
		else
		{
			m_PhysicsObject = physicsObject;
		}
	}

	RGameObject::RGameObject(float x, float y, float deltaX, float deltaY, float r, float g, float b, bool enablePhysics, Awerere::APhysicsObject * physicsObject)
		:
		m_Sprite(new GraphicComponents::RSprite(x, y, deltaX, deltaY, RML::Vector4D(r, g, b, 1.0f))),
		m_ThisTicks(false),
		m_UsesTexture(false)
	{
		if(enablePhysics == false)
		{
			m_PhysicsObject = NULL;
		}
		else
		{
			m_PhysicsObject = physicsObject;
		}
	}

	RGameObject::RGameObject(GraphicComponents::RSprite & renderable)
		:
		m_Sprite(&renderable),
		m_ThisTicks(false),
		m_UsesTexture(renderable.m_Texture == NULL ? false : true)
	{
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

		if(m_PhysicsObject != NULL)
		{
			delete m_PhysicsObject;
		}
	}

	void RGameObject::tick()
	{
	}
}
