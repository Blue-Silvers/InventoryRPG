#pragma once
#include "Item.h"

class Consumable : public Item
{
private:


public:
	int healing = 1;

	Consumable();
	Consumable(string name, int stackable, int maxStackable, int weight, int price, itemEffect effect, int heal);

	virtual void Consum();
};

