#pragma once

#include <rubeus_maths_library.h>

#include <entity_object.h>
#include <sprite_object.h>
#include <texture_object.h>

namespace Rubeus
{
	class RGameObject : public REntity
	{
	public:
		GraphicComponents::RSprite * m_Sprite;
		// TODO: Add Collider
		bool m_ThisTicks;
		bool m_UsesTexture;
		bool m_IsGroup = false;

		RGameObject(float x, float y, float deltaX, float deltaY, const char * imageFilePath);
		RGameObject(float x, float y, float deltaX, float deltaY, float r, float g, float b);
		RGameObject(GraphicComponents::RSprite & renderable);
		~RGameObject();

		void tick() override;

		inline void addToTickQueue() { m_ThisTicks = true; }

	protected:
		RGameObject();
	};
}
