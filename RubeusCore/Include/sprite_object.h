/**
 * @file		Include\sprite_object.h.
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
			 * @fn		RSprite::RSprite(float x, float y, float width, float height, const RML::Vector4D & color);
			 *
			 * @brief	Constructor
			 *
			 * @param	x	  	The x offset.
			 * @param	y	  	The y offset.
			 * @param	width 	The width.
			 * @param	height	The height.
			 * @param	color 	The color.
			 */
			RSprite(float x, float y, float width, float height, const RML::Vector4D & color);

		protected:
		};
	}
}
