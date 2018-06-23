#pragma once

#include <map>

#include <renderable_object.h>
#include <guerrilla_renderer_component.h>

namespace Rubeus
{
	namespace GraphicComponents
	{
		class RLayer
		{
		private:
			std::map<int, RRenderableObject *> m_SpriteMap;
			RGuerrillaRendererComponent m_Renderer;

		public:
			Rlayer();
			virtual ~RLayer();

			void addSprite(const RRenderableObject & renderable) = 0;
			void removeSprite(const RRenderableObject & sprite) = 0;

		protected:
		};
	}
}
