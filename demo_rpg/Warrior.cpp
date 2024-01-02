#include "Warrior.h"

Warrior::Warrior() : HP(BASE_HP), StatBlock(BASE_STRENGTH, BASE_INTELLECT) 
{

}

void Warrior::LevelUp()
{
	setMaxHP(HP_GROWTH + GetMaxHP());
	IncreaseStats(STR_GROWTH, INT_GROWTH);
}