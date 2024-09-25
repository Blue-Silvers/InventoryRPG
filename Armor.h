#pragma once
#include "Equipement.h"

class Armor : public Equipement
{
private:

public:
	int protection = 1;

	Armor();
	Armor(string name, int stackable, int maxStackable, int weight, int price, itemEffect effect, int durability, int maxDurability, int protection);
};

