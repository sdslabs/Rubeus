/**
 * @file		Include/simple_renderer_component.h.
 *
 * @brief	Declares the simple renderer
 */

#pragma once

#include <deque>

#include <renderer_component.h>
#include <static_sprite_object.h>

namespace Rubeus
{
	namespace GraphicComponents
	{
		/**
		 * @class	RSimpleRendererComponent
		 *
		 * @brief	A simple renderer.
		 * 			Only for testing purposes.
		 */
		class RSimpleRendererComponent : public RRendererComponent
		{
		private:
			/** @brief	Queue of renderable objects */
			std::deque<const RStaticSprite *> m_RenderQueue;

		public:

			/**
			 * @fn		void RSimpleRendererComponent::submit(const RRenderableObject* renderable) override;
			 *
			 * @brief	Submits the given renderable object
			 *
			 * @param	renderable	The renderable.
			 */
			void submit(const RRenderableObject* renderable) override;

			/**
			 * @fn		void RSimpleRendererComponent::flush() override;
			 *
			 * @brief	Flushes the render objects' queue after displaying them on the screen
			 */
			void flush() override;
		};
	}
}
