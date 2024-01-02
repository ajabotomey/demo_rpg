#include "Wizard.h"

Wizard::Wizard() : HP(BASE_HP), StatBlock(BASE_STRENGTH, BASE_INTELLECT) 
{

}

void Wizard::LevelUp()
{
	setMaxHP(HP_GROWTH + GetMaxHP());
	IncreaseStats(STR_GROWTH, INT_GROWTH);
}