#include "Consumable.h"

Consumable::Consumable()
{

}

Consumable::Consumable(string name, int stackable, int maxStackable, int weight, int price, itemEffect effect, int heal) 
{
	itemName = name;
	actualItemStackable = stackable;
	maxItemStackable = maxStackable;
	itemWeight = weight;
	itemPrice = price;
	itemEffectName = (int)effect;
	healing = heal;
}
