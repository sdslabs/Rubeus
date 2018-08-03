#include <game_object.h>

namespace Rubeus
{
<<<<<<< HEAD
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
=======
	RGameObject::RGameObject(float x, float y, float deltaX, float deltaY, const char * imageFilePath, bool enablePhysics, Awerere::APhysicsObject * physicsObject)
>>>>>>> Add support for generalised collider class
		:
		m_Sprite(new GraphicComponents::RSprite(x, y, deltaX, deltaY, new GraphicComponents::RTexture(imageFilePath))),
		m_ThisTicks(false),
		m_UsesTexture(true)
>>>>>>> Shift texture and sprite ownership to game object
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
<<<<<<< HEAD
>>>>>>> Add entity class
=======
		if(enablePhysics == false)
		{
			m_PhysicsObject = NULL;
		}
		else
		{
			m_PhysicsObject = physicsObject;
		}
>>>>>>> Add support for generalised collider class
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
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> Modify workflow to accept only RGameObject objects
		if(m_IsGroup == false)
		{
			delete m_Sprite->m_Texture;
			delete m_Sprite;
		}
<<<<<<< HEAD
<<<<<<< HEAD

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
=======
>>>>>>> Modify workflow to accept only RGameObject objects
=======

		if(m_PhysicsObject != NULL)
		{
			delete m_PhysicsObject;
		}
>>>>>>> Add support for generalised collider class
	}

	void RGameObject::tick()
	{
	}
}
