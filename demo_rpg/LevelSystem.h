#pragma once
#include <cstdint>
#include "types.h"

class LevelSystem
{
public:
	static const LevelType LEVELUP_MULTIPLIER = 2u;
	static const EXPType LEVELUPEXP = 100u;

	LevelSystem();

	void GainEXP(EXPType gainedEXP);
	LevelType GetCurrentLevel();
	EXPType GetCurrentExp();
	EXPType GetExpToNextLevel();

	virtual void LevelUp() = 0;
protected:
	LevelType currentLevel;
	EXPType currentEXP;
	std::uint16_t levelUpsAvailable;
	EXPType expToNextLevel;

	void CheckIfLevelled();
private:

};