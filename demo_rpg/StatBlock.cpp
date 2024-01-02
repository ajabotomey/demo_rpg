#include "StatBlock.h"

StatBlock::StatBlock()
{
	strength = 1u;
	intellect = 1u;
}

StatBlock::StatBlock(StatType _strength, StatType _intellect)
{
	strength = _strength;
	intellect = _intellect;
}

StatType StatBlock::GetStrength()
{
	return strength;
}

StatType StatBlock::GetIntellect()
{
	return intellect;
}

void StatBlock::IncreaseStats(StatType s, StatType i) 
{
	strength += s;
	intellect += i;
}