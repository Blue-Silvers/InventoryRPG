#pragma once
#include "Weapon.h"

class Physical : public Weapon
{
protected:
	int itemRange = 1;

public:


	Physical();
	void Draw(Font ft);
	void NewPhysical(string name, int stackable, int maxStackable, int weight, int price, itemEffect effect, int durability, int maxDurability, int damage, float attackSpeed, int range);
};

