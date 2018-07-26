#include <game_object.h>

namespace Rubeus
{
	RGameObject::RGameObject(GraphicComponents::RSprite * sprite)
		: m_Sprite(sprite)
	{
	}

	RGameObject::RGameObject(float x, float y, float deltaX, float deltaY, const char * texturePath)
	{
	}

	RGameObject::RGameObject(float x, float y, float deltaX, float deltaY, float r, float g, float b)
	{
	}

	RGameObject::~RGameObject()
	{
		delete m_Sprite;
	}

	void RGameObject::tick()
	{
	}
}
