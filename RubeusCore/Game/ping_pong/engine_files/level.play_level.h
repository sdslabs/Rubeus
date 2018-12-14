#pragma once

#include "../RubeusCore.h"

class play_level : public Rubeus::RLevel
{
protected:
	// User defined members


	// Don't look down
public:
	play_level(std::string name)
		: RLevel(name)
	{
	}

	~play_level()
	{
	}

	void begin() override;
	void onEnd() override;
};
