/**
 * @file	Include\sprite.h.
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
		 *
		 * @author	Twarit
		 * @date	20-06-2018
		 */
		class RSprite : public RRenderableObject
		{
		private:
		public:

			/**
			 * @fn	RSprite::RSprite(float x, float y, float width, float height, const RML::Vector4D & color);
			 *
			 * @brief	Constructor
			 *
			 * @author	Twarit
			 * @date	20-06-2018
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
