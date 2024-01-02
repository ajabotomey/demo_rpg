#pragma once

#include "hp.h"
#include "StatBlock.h"
#include "LevelSystem.h"

class Rogue : public HP, public StatBlock, public LevelSystem {
public:
	static const HPType BASE_HP = 9u;
	static const StatType BASE_STRENGTH = 10u;
	static const StatType BASE_INTELLECT = 4u;

	static const HPType HP_GROWTH = 3u;
	static const StatType STR_GROWTH = 4u;
	static const StatType INT_GROWTH = 2u;

	Rogue();
private:
	void LevelUp() override;
};