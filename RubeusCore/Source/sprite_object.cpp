/**
 * @file		Source\sprite_object.cpp.
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
			if (!m_Texture)
			{
				delete m_Texture;
			}
		}

		RSprite::RSprite(float & x, float & y, float width, float height, RML::Vector4D & color)
			: RRenderableObject(RML::Vector3D(x, y, 0), RML::Vector2D(width, height), color)
		{
			m_Texture = NULL;
		}

		RSprite::RSprite(float & x, float & y, float width, float height, RTexture * texture)
			: RRenderableObject(RML::Vector3D(x, y, 0), RML::Vector2D(width, height), RML::Vector4D(0.314f, 0.314f, 0.314f, 0.0f)) // Using values of PI to catch errors as flags while debugging
		{
			m_Texture = texture;
		}
	}
}
