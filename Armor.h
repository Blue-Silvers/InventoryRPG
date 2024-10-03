#pragma once
#include "Equipement.h"
#include <sstream>

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
	enum armorSlot mArmorSlot;


public:
	int armorProtection = 1;
	string armoreTypeName = "None";

	Armor();
	Armor(string name, int stackable, int maxStackable, int weight, int price, itemEffect effect, int durability, int maxDurability, int protection, armorSlot armorType);
	~Armor();
	//void Draw(Font ft);

	string GetItemStatistique() override;
};

