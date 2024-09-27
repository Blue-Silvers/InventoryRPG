#include "Armor.h"
Armor::Armor()
{

}

Armor::Armor(std::string name, int stackable, int maxStackable, int weight, int price, itemEffect effect, int durability, int maxDurability, int protection, armorSlot armorType)
{
	itemName = name;
	actualItemStackable = stackable;
	maxItemStackable = maxStackable;
	itemWeight = weight;
	itemPrice = price;
	itemEffectName = (char)effect;
	itemMaxDurability = maxDurability;
	itemDurability = durability;
	armorProtection = protection;
	if ((int)armorType == 0) 
	{
		armoreTypeName = "Helmet";
	}
	else if ((int)armorType == 1)
	{
		armoreTypeName = "Platron";
	}
	else if ((int)armorType == 2)
	{
		armoreTypeName = "Legins";
	}
	else
	{
		armoreTypeName = "Boots";
	}
}

void Armor::Draw(Font ft)
{
	DrawTextEx(ft, TextFormat("Name : ", itemName), Vector2{ 975, 5 }, 20, 5, WHITE);
	DrawTextEx(ft, TextFormat("Stack of : %01i / %01i", actualItemStackable, maxItemStackable), Vector2{ 975, 30 }, 20, 5, WHITE);
	DrawTextEx(ft, TextFormat("Weight : %01i kg", itemWeight), Vector2{ 975, 55 }, 20, 5, WHITE);
	DrawTextEx(ft, TextFormat("Price : %01i PO", itemPrice), Vector2{ 975, 80 }, 20, 5, WHITE);
	DrawTextEx(ft, TextFormat("Effect : ", itemEffectName), Vector2{ 975, 105 }, 20, 5, WHITE);
	DrawTextEx(ft, TextFormat("Durability : %01i / %01i", itemDurability, itemMaxDurability), Vector2{ 975, 130 }, 20, 5, WHITE);
	DrawTextEx(ft, TextFormat("Protetion : %01i", armorProtection), Vector2{ 975, 155 }, 20, 5, WHITE);
	DrawTextEx(ft, TextFormat("Armor slot : %01.02f", armoreTypeName), Vector2{ 975, 180 }, 20, 5, WHITE);
}