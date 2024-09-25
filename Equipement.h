#pragma once
#include "Inventory.h"

class Equipement : public Inventory
{
private:

public:
	int durability = 1;
	int maxDurability = 1;

	Equipement();
	Equipement(string name, int stackable, int maxStackable, int weight, int price, itemEffect effect, int durability, int maxDurability);
};

