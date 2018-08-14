#include <game_object.h>

namespace Rubeus
{
<<<<<<< HEAD
<<<<<<< HEAD
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
=======
	void RGameObject::setPhysics(bool enablePhysics, Rubeus::Awerere::APhysicsObject * physicsObject)
>>>>>>> Add better game object API
	{
		if(enablePhysics == true)
		{
			m_PhysicsObject = *physicsObject;
			m_PhysicsObject.m_EnablePhysics = true;
		}
	}

	RGameObject::RGameObject(float x, float y, float deltaX, float deltaY, const char * imageFilePath, Awerere::EColliderType type, bool enablePhysics)
=======
	RGameObject::RGameObject(float x, float y, float deltaX, float deltaY, const char * imageFilePath, bool enablePhysics, Awerere::APhysicsObject * physicsObject)
>>>>>>> Add simplified game-physics object creation
		:
		m_Sprite(new GraphicComponents::RSprite(x, y, deltaX, deltaY, new GraphicComponents::RTexture(imageFilePath))),
		m_PhysicsObject(physicsObject),
		m_ThisTicks(false),
		m_UsesTexture(true),
		m_HasPhysics(enablePhysics)
	{
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
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
=======
		setPhysics(enablePhysics, Awerere::APhysicsObject());
>>>>>>> Add better game object API
=======
		setPhysics(enablePhysics, new Awerere::APhysicsObject());
>>>>>>> Add physics material
=======
		if(enablePhysics == true && m_PhysicsObject == NULL)
		{
			ERRORLOG("Invalid game object. Physics has been enabled. Specify a physics object");
		}

		if(m_PhysicsObject != NULL)
		{
			m_PhysicsObject->m_EnablePhysics = enablePhysics;
		}
>>>>>>> Add simplified game-physics object creation
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
<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> Add simplified game-physics object creation

		if(m_HasPhysics == true)
		{
			delete m_PhysicsObject;
		}
<<<<<<< HEAD
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
=======
>>>>>>> Add better game object API
=======
>>>>>>> Add simplified game-physics object creation
	}

	void RGameObject::tick()
	{
	}
}
