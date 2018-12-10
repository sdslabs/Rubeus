#include "user_init.h"
#include "../RubeusCore.h"

std::string startupLevel = "sample_level";

USampleLevel * sample_level = new USampleLevel("sample_level");

Usample_object * sample_object = new Usample_object(
	"sample_object",
	"sample_level",
	6.0f, 3.0f,
	3.0f, 3.0f,
	"Assets/debug.png",
	false
);