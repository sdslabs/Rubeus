/**
 * @file		Include\static_layer_object.h.
 *
 * @brief	Declares the static layer class
 */

#pragma once

#include <vector>

#include <layer_object.h>
#include <sprite_object.h>
#include <shader_component.h>
#include <logger_component.h>
#include <rubeus_maths_library.h>

// TODO: Add docs
namespace Rubeus
{
	namespace GraphicComponents
	{
		class RStaticLayer : public RLayer
		{
		private:
			std::vector<Group *> m_Groups;
			RGuerrillaRendererComponent * m_Renderer;
			RShaderComponent & m_Shader;

		public:

			RStaticLayer(RShaderComponent& shader);
			virtual ~RStaticLayer();

			RLayer & addGroup(Group & group) override;
			void draw() override;

		protected:
		};
	}
}
