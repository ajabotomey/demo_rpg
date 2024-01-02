#pragma once

#include "hp.h"
#include "StatBlock.h"
#include "LevelSystem.h"

class Cleric : public HP, public StatBlock, public LevelSystem {
public:
	static const HPType BASE_HP = 14u;
	static const StatType BASE_STRENGTH = 3u;
	static const StatType BASE_INTELLECT = 8u;

	static const HPType HP_GROWTH = 7u;
	static const StatType STR_GROWTH = 1u;
	static const StatType INT_GROWTH = 2u;

	Cleric();
private:
	void LevelUp() override;
};