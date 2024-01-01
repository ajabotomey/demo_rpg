#include <iostream>
#include "character_includes.h"


int main() {

	Warrior warrior;
	Wizard wizard;
	Cleric cleric;
	Rogue rogue;

	std::cout << "Warrior\n"
		<< "- Current HP" << warrior.GetCurrentHP() << "\n"
		<< "- MaxHP: " << warrior.GetMaxHP() << "\n"
		<< "- Strength: " << warrior.GetStrength() << "\n"
		<< "- Intellect: " << warrior.GetIntellect() << "\n";

	return 0;
}