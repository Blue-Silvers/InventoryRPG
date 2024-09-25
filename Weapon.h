#pragma once
#include "Equipement.h"

class Weapon : public Equipement
{
private:

public:
	int damage = 1;
	int range = 1;

	Weapon();
	~Weapon();
	void NewWeapon(string name, int stackable, int maxStackable, int weight, int price, itemEffect effect, int durability, int maxDurability, int damage, int range);
};

