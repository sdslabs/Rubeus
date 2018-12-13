/**
 * @file		Include/sprite_object.h.
 *
 * @brief	Declares the sprite class
 */

#pragma once

#include <renderable_object.h>

namespace Rubeus
{
	namespace GraphicComponents
	{
		/**
		 * @class	RSprite
		 *
		 * @brief	A sprite compatible with guerrilla renderer.
		 */
		class RSprite : public RRenderableObject
		{
		private:
			/** @brief	Link to position of the parent Renderable object */
			RML::Vector3D * _m_Position;

			/** @brief	Link to size of the parent Renderable object */
			RML::Vector2D * _m_Size;

			/** @brief	Link to color of the parent Renderable object */
			RML::Vector4D * _m_Color;

		public:
			/**
			 * @fn		RSprite()
			 *
			 * @brief	Constructor
			 */
			RSprite();

			/**
			 * @fn		virtual ~RSprite()
			 *
			 * @brief	Destructor
			 */
			virtual ~RSprite();

			/**
			 * @fn		RSprite::RSprite(float & x, float & y, float & width, float & height, const RML::Vector4D & color);
			 *
			 * @brief	Constructor
			 *
			 * @param	x	  	The x offset.
			 * @param	y	  	The y offset.
			 * @param	width 	The width.
			 * @param	height	The height.
			 * @param	color 	The color of this sprite.
			 */
			RSprite(float & x, float & y, float & width, float & height, const RML::Vector4D & color);

			/**
			 * @fn		RSprite::RSprite(float & x, float & y, float & width, float & height, RTexture * texture);
			 *
			 * @brief	Constructor
			 *
			 * @param	x	  	The x offset.
			 * @param	y	  	The y offset.
			 * @param	width 	The width.
			 * @param	height	The height.
			 * @param	texture 	Pointer to the texture to be used.
			 */
			RSprite(float & x, float & y, float & width, float & height, RTexture * texture);

		protected:
		};
	}
}
