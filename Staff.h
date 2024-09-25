#pragma once
#include "Weapon.h"

class Staff : public Weapon
{
protected:
	int itemMaxMana = 1;

public:


	Staff();
	void NewStaff(string name, int stackable, int maxStackable, int weight, int price, itemEffect effect, int durability, int maxDurability, int damage, float attackSpeed, int maxMana);
	void ChooseMagic();
};

