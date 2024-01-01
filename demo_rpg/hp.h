#pragma once
#include "types.h"

class HP {
public: 
	HP();
	HP(HPType _currentHP);
	HP(HPType _currentHP, HPType _maxHP);

	bool setMaxHP(HPType newMaxHP);
	void takeDamage(HPType damage);
	void heal(HPType health);

	// Accessors
	HPType GetCurrentHP();
	HPType GetMaxHP();

private:
	void checkHP();

	HPType shieldHP;
	HPType currentHP;
	HPType maxHP;
};