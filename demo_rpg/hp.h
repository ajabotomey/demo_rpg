#pragma once
#include "HitpointTypes.h"

class hp {
public: 
	bool setMaxHP(hpType newMaxHP);
	void takeDamage(hpType damage);
	void heal(hpType health);

	// Accessors
	hpType getCurrentHP();
	hpType getMaxHP();

private:
	hpType shieldHP;
	hpType currentHP;
	hpType maxHP;
};