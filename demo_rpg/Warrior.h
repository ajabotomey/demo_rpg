#pragma once

#include "hp.h"
#include "StatBlock.h"

class Warrior : public HP, public StatBlock {
public:
	static const HPType HP_GROWTH = 19u;
	static const StatType BASE_STRENGTH = 10u;
	static const StatType BASE_INTELLECT = 1u;

	Warrior();
private:

};