// RubeusCore.cpp : Defines the entry point for the application.
//

#include "RubeusCore.h"

using namespace std;

int main()
{

	glfwInit();
	glewInit();

	Rubeus::GraphicComponents::RWindowComponent game("Title", 1280, 720);
	return 0;
}
