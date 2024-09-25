#pragma once
#include "Inventory.h"

class Consumable : public Inventory
{
private:


public:
	int heal = 1;

	Consumable();
	Consumable(string name, int stackable, int maxStackable, int weight, int price, itemEffect effect, int heal);
};

