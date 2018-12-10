#include "sample_level.h"

void USampleLevel::begin()
{
	m_Name = "sample_level";
	getInputManager()->addKeyToKeyBinding("Space", Rubeus::EKeyboardKeys::__SPACE);
}

void USampleLevel::run()
{
}

void USampleLevel::onEnd()
{
}
