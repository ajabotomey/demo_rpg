#pragma once
#include "types.h"

class StatBlock {
public:
	StatBlock();
	StatBlock(StatType strength, StatType intellect);

	StatType GetStrength();
	StatType GetIntellect();

protected:
	void IncreaseStats(StatType s, StatType i);

private:
	StatType strength;
	StatType intellect;
};