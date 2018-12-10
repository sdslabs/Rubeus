#pragma once

#include "../RubeusCore.h"

class USampleLevel2 : public Rubeus::RLevel
{
protected:
	// User defined members


	// Don't look down
public:
	USampleLevel2(std::string name)
		: RLevel(name)
	{
	}

	~USampleLevel2()
	{
	}

	void begin() override;
	void run() override;
	void onEnd() override;
};
