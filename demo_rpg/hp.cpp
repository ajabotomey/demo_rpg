#include "hp.h"

// TODO: Come back to this function later to refine if we have to do more health checks like this
//void checkDeath(hpType health, hpType damage, hpType currentHP) {
//	if (damage > health) {
//		currentHP = 0;
//		return;
//	}
//}

bool hp::setMaxHP(hpType newMaxHP) {
	if (newMaxHP < 1)
		return false;

	maxHP = newMaxHP;

	if (currentHP > maxHP)
		currentHP = maxHP;

	return true;
}

void hp::takeDamage(hpType damage) {
	if (damage == 0) return;

	if (shieldHP > damage) {
		shieldHP -= damage;
		return;
	}
	else {
		// Get the leftover damage after the shield breaks
		hpType remainingDamage = damage - shieldHP;

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

void hp::heal(hpType health) {
	currentHP += health;

	if (currentHP > maxHP) currentHP = maxHP;
}

hpType hp::getCurrentHP()
{
	return currentHP;
}

hpType hp::getMaxHP()
{
	return maxHP;
}