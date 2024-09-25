#include "Magic.h"

Magic::Magic() 
{

}

Magic::Magic (std::string name, int stackable, int maxStackable, int weight, int price, itemEffect effect, int level, int duration)
{
	itemName = name;
	actualItemStackable = stackable;
	maxItemStackable = maxStackable;
	itemWeight = weight;
	itemPrice = price;
	itemEffectName = (int)effect;
	spellLevel = level;
	spellDuration = duration;
}