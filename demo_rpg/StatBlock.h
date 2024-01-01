#pragma once
#include "types.h"

class StatBlock {
public:
	StatBlock();
	StatBlock(StatType strength, StatType intellect);

	StatType GetStrength();
	StatType GetIntellect();
private:
	StatType strength;
	StatType intellect;
};