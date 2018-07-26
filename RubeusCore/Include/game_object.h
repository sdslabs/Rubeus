#pragma once

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

namespace Rubeus
{
	class RGameObject : public REntity
	{
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
		GraphicComponents::RSprite * m_Sprite;
		// TODO: Add here--> PhysicsComponents::RCollider * m_Collider;
		RML::Vector3D m_Position;
		RML::Vector2D m_Size;
		RML::Vector2D m_Scale;

	public:
		RGameObject(GraphicComponents::RSprite * sprite);
		RGameObject(float x, float y, float deltaX, float deltaY, const char * texturePath);
		RGameObject(float x, float y, float deltaX, float deltaY, float r, float g, float b);
		virtual ~RGameObject();

		void tick();

		inline const GraphicComponents::RSprite * getSprite() { return m_Sprite; }

	protected:
>>>>>>> Add entity class
	};
}
