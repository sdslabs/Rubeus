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
		public:
			/**
			 * @fn		RSprite()
			 *
			 * @brief	Constructor
			 */
			RSprite();

			/**
			 * @fn		RSprite::RSprite(const float & x, const float & y, const float & width, const float & height, const RML::Vector4D & color);
			 *
			 * @brief	Constructor
			 *
			 * @param	x	  	The x offset.
			 * @param	y	  	The y offset.
			 * @param	width 	The width.
			 * @param	height	The height.
			 * @param	color 	The color of this sprite.
			 */
			RSprite(const float & x, const float & y, const float & width, const float & height, const RML::Vector4D & color);

			/**
			 * @fn		RSprite::RSprite(const float & x, const float & y, const float & width, const float & height, RTexture * texture);
			 *
			 * @brief	Constructor
			 *
			 * @param	x	  	The x offset.
			 * @param	y	  	The y offset.
			 * @param	width 	The width.
			 * @param	height	The height.
			 * @param	texture Pointer to the texture to be used.
			 */
			RSprite(const float & x, const float & y, const float & width, const float & height, RTexture * texture);

			RSprite(RSprite & sprite);

			/**
			 * @fn		virtual ~RSprite()
			 *
			 * @brief	Destructor
			 */
			virtual ~RSprite();

		protected:
		};
	}
}
