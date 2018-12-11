#include "sample_level2.h"

void USampleLevel2::begin()
{
	m_Name = "sample_level2";
	getInputManager()->addKeyToKeyBinding("Space", Rubeus::EKeyboardKeys::__SPACE);
}

void USampleLevel2::onEnd()
{
}
