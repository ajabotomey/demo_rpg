#include <iostream>
#include "character_includes.h"


int main() 
{

	Warrior warrior;
	Wizard wizard;
	Cleric cleric;
	Rogue rogue;

	std::cout << "Warrior\n"
		<< "- Current HP: " << warrior.GetCurrentHP() << "\n"
		<< "- MaxHP: " << warrior.GetMaxHP() << "\n"
		<< "- Strength: " << warrior.GetStrength() << "\n"
		<< "- Intellect: " << warrior.GetIntellect() << "\n"
		<< "- Level: " << warrior.GetCurrentLevel() << "\n"
		<< "- EXP: " << warrior.GetCurrentExp() << "/" << warrior.GetExpToNextLevel() << "\n";

	warrior.GainEXP(100u);

	std::cout << "Warrior\n"
		<< "- Current HP: " << warrior.GetCurrentHP() << "\n"
		<< "- MaxHP: " << warrior.GetMaxHP() << "\n"
		<< "- Strength: " << warrior.GetStrength() << "\n"
		<< "- Intellect: " << warrior.GetIntellect() << "\n"
		<< "- Level: " << warrior.GetCurrentLevel() << "\n"
		<< "- EXP: " << warrior.GetCurrentExp() << "/" << warrior.GetExpToNextLevel() << "\n";

	return 0;
}