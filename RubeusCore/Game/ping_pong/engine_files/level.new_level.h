"#pragma once
#include "../RubeusCore.h"
class %s : public Rubeus::RLevel
{
protected:
// User defined members
// Don't look down
public:
%s(std::string name)
: RLevel(name)
{
}
~%s()
{
}
void begin() override;
void onEnd() override;
};
		