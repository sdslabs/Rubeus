#pragma once

#include <entity_object.h>
#include <sprite_object.h>
#include <rubeus_maths_library.h>

namespace Rubeus
{
	class RGameObject : public REntity
	{
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
	};
}
