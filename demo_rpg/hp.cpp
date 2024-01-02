#include "hp.h"

// TODO: Come back to this function later to refine if we have to do more health checks like this
//void checkDeath(hpType health, hpType damage, hpType currentHP) {
//	if (damage > health) {
//		currentHP = 0;
//		return;
//	}
//}

HP::HP() 
{
	currentHP = 1;
	maxHP = 1;
	shieldHP = 0;
}

HP::HP(HPType _currentHP) 
{
	currentHP = _currentHP;
	maxHP = _currentHP;
	shieldHP = 0;
}

HP::HP(HPType _currentHP, HPType _maxHP) 
{
	currentHP = _currentHP;
	maxHP = _maxHP;
	shieldHP = 0;

	checkHP();
}

bool HP::setMaxHP(HPType newMaxHP) 
{
	if (newMaxHP < 1)
		return false;

	maxHP = newMaxHP;

	checkHP();

	return true;
}

void HP::takeDamage(HPType damage) 
{
	if (damage == 0) return;

	if (shieldHP > damage) {
		shieldHP -= damage;
		return;
	}
	else {
		// Get the leftover damage after the shield breaks
		HPType remainingDamage = damage - shieldHP;

		if (remainingDamage > currentHP) {
			currentHP = 0;
			return;
		}

		currentHP -= remainingDamage;
	}

	if (damage > currentHP) {
		currentHP = 0;
		return;
	}

	currentHP -= damage;
}

void HP::heal(HPType health) 
{
	currentHP += health;

	checkHP();
}

HPType HP::GetCurrentHP()
{
	return currentHP;
}

HPType HP::GetMaxHP()
{
	return maxHP;
}

void HP::checkHP()
{
	if (currentHP > maxHP) currentHP = maxHP;
}