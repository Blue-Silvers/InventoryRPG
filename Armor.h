#pragma once
#include "Equipement.h"

enum armorSlot
{
	HEAD,
	BODY,
	LEGS,
	BOOTS,
};

class Armor : public Equipement
{
private:

public:
	int armorProtection = 1;
	string armoreTypeName = "None";

	Armor();
	Armor(string name, int stackable, int maxStackable, int weight, int price, itemEffect effect, int durability, int maxDurability, int protection, armorSlot armorType);
	void Draw(Font ft);
};

