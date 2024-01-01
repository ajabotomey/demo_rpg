#pragma once

#include "hp.h"
#include "StatBlock.h"

class Rogue : public HP, public StatBlock {
public:
	static const HPType HP_GROWTH = 9u;
	static const StatType BASE_STRENGTH = 10u;
	static const StatType BASE_INTELLECT = 4u;

	Rogue();
private:

};