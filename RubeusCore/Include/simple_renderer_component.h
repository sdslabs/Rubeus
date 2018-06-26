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
		 *
		 * @author	Twarit
		 * @date	14-06-2018
		 */
		class RSimpleRendererComponent : public RRendererComponent
		{
		private:
			/** @brief	Queue of renderable objects */
			std::deque<const RStaticSprite *> m_RenderQueue;

		public:

			/**
			 * @fn	void RSimpleRendererComponent::submit(const RRenderableObject* renderable) override;
			 *
			 * @brief	Submits the given renderable object
			 *
			 * @author	Twarit
			 * @date	14-06-2018
			 *
			 * @param	renderable	The renderable.
			 */
			void submit(const RRenderableObject* renderable) override;

			/**
			 * @fn	void RSimpleRendererComponent::flush() override;
			 *
			 * @brief	Flushes the render objects' queue after displaying them on the screen
			 *
			 * @author	Twarit
			 * @date	14-06-2018
			 */
			void flush() override;
		};
	}
}
