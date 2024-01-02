#include "Cleric.h"

Cleric::Cleric() : HP(BASE_HP), StatBlock(BASE_STRENGTH, BASE_INTELLECT) 
{

}

void Cleric::LevelUp()
{
	setMaxHP(HP_GROWTH + GetMaxHP());
	IncreaseStats(STR_GROWTH, INT_GROWTH);
}