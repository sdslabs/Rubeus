#pragma once

#include <layer.h>
#include <sprite.h>
#include <shader_component.h>
#include <logger_component.h>
#include <rubeus_maths_library.h>

namespace Rubeus
{
	namespace GraphicComponents
	{
		class RStaticLayer : public RLayer
		{
		private:
			unsigned int m_ObjectCount;
			std::map<unsigned int, RSprite *> m_ObjectMap;
			RGuerrillaRendererComponent * m_Renderer;

		public:
			RShaderComponent& m_Shader;

			RStaticLayer(RShaderComponent& shader);
			virtual ~RStaticLayer();

			void addSprite(RRenderableObject * sprite) override;
			void draw() override;
			void removeSprite(RRenderableObject * sprite) override;

		protected:
		};
	}
}
