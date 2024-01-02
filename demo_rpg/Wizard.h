#pragma once

#include "hp.h"
#include "StatBlock.h"
#include "LevelSystem.h"

class Wizard : public HP, public StatBlock, public LevelSystem {
public:
	static const HPType BASE_HP = 9u;
	static const StatType BASE_STRENGTH = 2u;
	static const StatType BASE_INTELLECT = 10u;

	static const HPType HP_GROWTH = 3u;
	static const StatType STR_GROWTH = 1u;
	static const StatType INT_GROWTH = 4u;

	Wizard();
private:
	void LevelUp() override;
};