#pragma once

#include "../RubeusCore.h"

class USampleLevel : public Rubeus::RLevel
{
protected:
	// User defined members


	// Don't look down
public:
	USampleLevel(std::string name)
		: RLevel(name)
	{
	}

	~USampleLevel()
	{
	}

	void begin() override;
	void run() override;
	void onEnd() override;
};
