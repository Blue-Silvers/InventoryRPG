#include "Equipement.h"


Equipement::Equipement() 
{

}

Equipement::Equipement(string name, int stackable, int maxStackable, int weight, int price, itemEffect effect, int durability, int maxDurability) 
{
	itemName = name;
	actualItemStackable = stackable;
	maxItemStackable = maxStackable;
	itemWeight = weight;
	itemPrice = price;
	itemEffectName = (int)effect;
	itemMaxDurability = maxDurability;
	itemDurability = durability;
}