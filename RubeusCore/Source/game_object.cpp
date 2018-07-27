#include <game_object.h>

namespace Rubeus
{
<<<<<<< HEAD
<<<<<<< HEAD
	RGameObject::RGameObject(float x, float y, float deltaX, float deltaY, const char * imageFilePath, bool enablePhysics, Awerere::APhysicsObject * physicsObject)
		:
		m_Sprite(new GraphicComponents::RSprite(x, y, deltaX, deltaY, new GraphicComponents::RTexture(imageFilePath))),
		m_PhysicsObject(physicsObject),
		m_ThisTicks(false),
		m_UsesTexture(true),
		m_HasPhysics(enablePhysics)
	{
		if(enablePhysics == true && m_PhysicsObject == NULL)
		{
			ERRORLOG("Invalid game object. Physics has been enabled. Specify a physics object");
		}

		if(m_PhysicsObject != NULL)
		{
			m_PhysicsObject->m_EnablePhysics = enablePhysics;
		}
	}

	RGameObject::RGameObject(float x, float y, float deltaX, float deltaY, float r, float g, float b, bool enablePhysics, Awerere::APhysicsObject * physicsObject)
		:
		m_Sprite(new GraphicComponents::RSprite(x, y, deltaX, deltaY, RML::Vector4D(r, g, b, 1.0f))),
		m_PhysicsObject(physicsObject),
		m_ThisTicks(false),
		m_UsesTexture(false),
		m_HasPhysics(enablePhysics)
	{
		if(enablePhysics == true && m_PhysicsObject == NULL)
		{
			ERRORLOG("Invalid game object. Physics has been enabled. Specify a physics object");
		}
	}

	RGameObject::RGameObject()
	{
		m_IsGroup = true;
=======
	RGameObject::RGameObject(GraphicComponents::RSprite * sprite)
		: m_Sprite(sprite)
	{
	}

	RGameObject::RGameObject(float x, float y, float deltaX, float deltaY, const char * texturePath)
=======
	RGameObject::RGameObject(float x, float y, float deltaX, float deltaY, const char * imageFilePath)
		: m_Sprite(new GraphicComponents::RSprite(x, y, deltaX, deltaY, new GraphicComponents::RTexture(imageFilePath))),
		m_ThisTicks(false),
		m_UsesTexture(true)
>>>>>>> Shift texture and sprite ownership to game object
	{
	}

	RGameObject::RGameObject(float x, float y, float deltaX, float deltaY, float r, float g, float b)
		: m_Sprite(new GraphicComponents::RSprite(x, y, deltaX, deltaY, RML::Vector4D(r, g, b, 1.0f))),
		m_ThisTicks(false),
		m_UsesTexture(false)
	{
>>>>>>> Add entity class
	}

	RGameObject::~RGameObject()
	{
<<<<<<< HEAD
<<<<<<< HEAD
		if(m_IsGroup == false)
		{
			delete m_Sprite->m_Texture;
			delete m_Sprite;
		}

		if(m_HasPhysics == true)
		{
			delete m_PhysicsObject;
		}
=======
=======
		delete m_Sprite->m_Texture;
>>>>>>> Shift texture and sprite ownership to game object
		delete m_Sprite;
>>>>>>> Add entity class
	}

	void RGameObject::tick()
	{
	}
}
