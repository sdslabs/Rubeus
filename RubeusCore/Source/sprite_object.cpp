/**
 * @file	Source\sprite.cpp.
 *
 * @brief	Implements the sprite class
 */

#include <sprite_object.h>

namespace Rubeus
{
	namespace GraphicComponents
	{
		RSprite::RSprite()
			: RRenderableObject(RML::Vector3D(), RML::Vector2D(), RML::Vector4D())
		{
		}

		RSprite::~RSprite()
		{
		}

		RSprite::RSprite(float x, float y, float width, float height, const RML::Vector4D & color)
			: RRenderableObject(RML::Vector3D(x, y, 0), RML::Vector2D(width, height), color)
		{
		}
	}
}
