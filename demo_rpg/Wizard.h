#pragma once

#include "hp.h"
#include "StatBlock.h"

class Wizard : public HP, public StatBlock {
public:
	static const HPType HP_GROWTH = 9u;
	static const StatType BASE_STRENGTH = 2u;
	static const StatType BASE_INTELLECT = 10u;

	Wizard();
private:

};