// RubeusCore.cpp : Defines the entry point for the application.
//
#include <chrono>

#include "RubeusCore.h"

std::map<unsigned int, Rubeus::RMasterComponent *> Rubeus::RMasterComponent::m_ComponentMap;

int main()
{
	using namespace Rubeus;
	using namespace GraphicComponents;
	using namespace UtilityComponents;
	using namespace RML;
	RWindowComponent GameWindow("Hello World",
								1280, 720,
								EWindowParameters::WINDOWED_MODE,
								EWindowParameters::NON_RESIZABLE_WINDOW,
								1);

	RShaderComponent shader("Shaders/basic.vertexshader", "Shaders/basic.fragmentshader");
	shader.enableShader();
	shader.setUniformMat4("proj_matrix", Matrix4::orthographic(0.0f, 16.0f, 0.0f, 9.0f, -1.0f, 1.0f));

	RSprite sprite1(0, 0, 4, 4, RML::Vector4D(1, 0, 1, 1));
	RSprite sprite2(7, 1, 2, 3, RML::Vector4D(0.2f, 0, 1, 1));
	RGuerrillaRendererComponent renderer;

	auto x = ((RWindowComponent *) (RMasterComponent::m_ComponentMap[GameWindow.getComponentID()]));
	x->setWindowTitle("Hey I just changed the title");

	RTimer timer(4);
	timer.setFrameCounter();
	timer.addTimePoint(2);
	while(!GameWindow.closed())
	{
		GameWindow.clearWindow();
		timer.addTimePoint(3);
		shader.setUniformMat4("model_matrix", Matrix4::translation(Vector3D(5, 5, 0)) * Matrix4::rotation(timer.getRelativeTime(2, 3) / 10000000, Vector3D(0, 0, 1)));

		renderer.begin();
		renderer.submit(&sprite1);
		renderer.submit(&sprite2);
		renderer.end();
		renderer.flush();

		GameWindow.updateWindow();

		timer.evaluateFrames();
	}

	return 0;
}
