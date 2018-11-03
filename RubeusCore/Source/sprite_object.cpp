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
			: RRenderableObject(new RML::Vector3D(), new RML::Vector2D(), new RML::Vector4D())
		{
		}

		RSprite::~RSprite()
		{
			if (!m_Texture)
			{
				delete m_Texture;
			}

			delete _m_Position;
			delete _m_Size;
			delete _m_Color;
		}

		RSprite::RSprite(float & x, float & y, float & width, float & height, RML::Vector4D & color)
			:
			RRenderableObject(new RML::Vector3D(x, y, 1.0f), new RML::Vector2D(width, height), new RML::Vector4D(color))
		{
			m_Texture = NULL;

			_m_Position = &this->m_Position;
			_m_Size = &this->m_Size;
			_m_Color = &this->m_Color;
		}

		RSprite::RSprite(float & x, float & y, float & width, float & height, RTexture * texture)
			:
			RRenderableObject(new RML::Vector3D(x, y, 1.0f), new RML::Vector2D(width, height), new RML::Vector4D(0.314f, 0.314f, 0.314f, 0.0f)) // Using values of PI to catch errors while debugging
		{
			m_Texture = texture;

			_m_Position = &this->m_Position;
			_m_Size = &this->m_Size;
			_m_Color = &this->m_Color;
		}
	}
}
