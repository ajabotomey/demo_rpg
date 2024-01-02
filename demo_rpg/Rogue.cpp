#include "Rogue.h"

Rogue::Rogue() : HP(HP_GROWTH), StatBlock(BASE_STRENGTH, BASE_INTELLECT) 
{

}

void Rogue::LevelUp()
{
	setMaxHP(HP_GROWTH + GetMaxHP());
	IncreaseStats(STR_GROWTH, INT_GROWTH);
}