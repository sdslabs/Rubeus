#pragma once

<<<<<<< HEAD
<<<<<<< HEAD
#include <rubeus_maths_library.h>

#include <entity_object.h>
#include <sprite_object.h>
#include <texture_object.h>
#include <awerere_physics_object.h>
=======
#include <entity_object.h>
#include <sprite_object.h>
#include <rubeus_maths_library.h>
>>>>>>> Add entity class
=======
#include <rubeus_maths_library.h>

#include <entity_object.h>
#include <sprite_object.h>
#include <texture_object.h>
>>>>>>> Shift texture and sprite ownership to game object

namespace Rubeus
{
	class RGameObject : public REntity
	{
<<<<<<< HEAD
<<<<<<< HEAD
	public:
		GraphicComponents::RSprite * m_Sprite;
		Awerere::APhysicsObject * m_PhysicsObject;

		bool m_ThisTicks;
		bool m_UsesTexture;
		bool m_IsGroup = false;
		bool m_HasPhysics = false;

		RGameObject(float x, float y, float deltaX, float deltaY, const char * imageFilePath, bool enablePhysics = false, Awerere::APhysicsObject * physicsObject = NULL);
		RGameObject(float x, float y, float deltaX, float deltaY, float r, float g, float b, bool enablePhysics = false, Awerere::APhysicsObject * physicsObject = NULL);
		~RGameObject();

		void tick() override;

		inline void addToTickQueue() { m_ThisTicks = true; }

	protected:
		RGameObject();
=======
	private:
=======
	public:
>>>>>>> Shift texture and sprite ownership to game object
		GraphicComponents::RSprite * m_Sprite;
		// TODO: Add Collider
		bool m_ThisTicks;
		bool m_UsesTexture;

		RGameObject(float x, float y, float deltaX, float deltaY, const char * imageFilePath);
		RGameObject(float x, float y, float deltaX, float deltaY, float r, float g, float b);
		~RGameObject();

		void tick() override;

		inline void addToTickQueue() { m_ThisTicks = true; }
	protected:
>>>>>>> Add entity class
	};
}
