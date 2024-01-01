#pragma once

#include "hp.h"
#include "StatBlock.h"

class Cleric : public HP, public StatBlock {
public:
	static const HPType HP_GROWTH = 14u;
	static const StatType BASE_STRENGTH = 3u;
	static const StatType BASE_INTELLECT = 8u;

	Cleric();
private:

};