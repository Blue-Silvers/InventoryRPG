#pragma once
#include "Item.h"

class Equipement : public Item
{
private:

public:
	int itemDurability = 1;
	int itemMaxDurability = 1;

	Equipement();
	Equipement(string name, int stackable, int maxStackable, int weight, int price, itemEffect effect, int durability, int maxDurability);

	virtual void Equip();
	virtual void Unequip();
};

