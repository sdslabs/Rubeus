/**
 * @file	Source\sprite.cpp.
 *
 * @brief	Implements the sprite class
 */

#include <sprite.h>

namespace Rubeus
{
	namespace GraphicComponents
	{
		RSprite::RSprite(float x, float y, float width, float height, const RML::Vector4D & color)
			: RRenderableObject(RML::Vector3D(x, y, 0), RML::Vector2D(width, height), color)
		{

		}
	}
}
