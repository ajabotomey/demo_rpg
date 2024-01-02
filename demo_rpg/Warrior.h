#pragma once

#include "hp.h"
#include "StatBlock.h"
#include "LevelSystem.h"

class Warrior : public HP, public StatBlock, public LevelSystem {
public:
	static const HPType BASE_HP = 19u;
	static const StatType BASE_STRENGTH = 10u;
	static const StatType BASE_INTELLECT = 1u;

	static const HPType HP_GROWTH = 5u;
	static const StatType STR_GROWTH = 4u;
	static const StatType INT_GROWTH = 1u;

	Warrior();
private:
	void LevelUp() override;
};