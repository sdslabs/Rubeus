#pragma once

#include <rubeus_maths_library.h>

#include <entity_object.h>
#include <sprite_object.h>
#include <texture_object.h>
#include <awerere_physics_object.h>

namespace Rubeus
{
	class RGameObject : public REntity
	{
	private:
		void setPhysics(bool enablePhysics, Rubeus::Awerere::APhysicsObject * physicsObject);

	public:
		GraphicComponents::RSprite * m_Sprite;
		Awerere::APhysicsObject m_PhysicsObject;
		bool m_ThisTicks;
		bool m_UsesTexture;
		bool m_IsGroup = false;

		RGameObject(float x, float y, float deltaX, float deltaY, const char * imageFilePath, Awerere::EColliderType type, bool enablePhysics = false);
		RGameObject(float x, float y, float deltaX, float deltaY, float r, float g, float b, bool enablePhysics = false, Awerere::APhysicsObject * physicsObject = NULL);
		~RGameObject();

		void tick() override;

		inline void addToTickQueue() { m_ThisTicks = true; }

	protected:
		RGameObject();
	};
}
