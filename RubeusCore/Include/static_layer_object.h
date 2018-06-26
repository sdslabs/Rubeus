#pragma once

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
			unsigned int m_ObjectCount;
			std::map<std::string, Group *> m_Groups;
			RGuerrillaRendererComponent * m_Renderer;
			RShaderComponent & m_Shader;

		public:

			RStaticLayer(RShaderComponent& shader);
			virtual ~RStaticLayer();

			RLayer & addGroup(std::string name, Group & group) override;
			void draw() override;
			void removeGroup(std::string name) override;

		protected:
		};
	}
}
