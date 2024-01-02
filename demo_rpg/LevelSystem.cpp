#include "LevelSystem.h"

LevelSystem::LevelSystem() 
{
	currentLevel = 1u;
	currentEXP = 0u;
	levelUpsAvailable = 0u;
	expToNextLevel = LEVELUPEXP;
}

void LevelSystem::GainEXP(EXPType gainedEXP) 
{
	currentEXP += gainedEXP;
	CheckIfLevelled();
}

LevelType LevelSystem::GetCurrentLevel()
{
	return currentLevel;
}

EXPType LevelSystem::GetCurrentExp()
{
	return currentEXP;
}

EXPType LevelSystem::GetExpToNextLevel()
{
	return expToNextLevel;
}

void LevelSystem::CheckIfLevelled()
{
	if (currentEXP >= LEVELUPEXP)
	{
		currentLevel++;
		levelUpsAvailable++;
		currentEXP -= LEVELUPEXP; // Get the remainder
		LevelUp();
		expToNextLevel *= LEVELUP_MULTIPLIER;
	}
}