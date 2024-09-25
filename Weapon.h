#pragma once
#include "Equipement.h"

class Weapon : public Equipement
{
private:

public:
	int itemDamage = 1;
	int itemRange = 1;

	Weapon();
	~Weapon();
	void NewWeapon(string name, int stackable, int maxStackable, int weight, int price, itemEffect effect, int durability, int maxDurability, int damage, int range);
};

