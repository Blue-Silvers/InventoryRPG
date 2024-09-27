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
	itemEffectName = (char)effect;
	spellLevel = level;
	spellDuration = duration;
}

void Magic::Draw(Font ft)
{
	DrawTextEx(ft, TextFormat("Name : ", itemName), Vector2{ 975, 5 }, 20, 5, WHITE);
	DrawTextEx(ft, TextFormat("Stack of : %01i / %01i", actualItemStackable, maxItemStackable), Vector2{ 975, 30 }, 20, 5, WHITE);
	DrawTextEx(ft, TextFormat("Weight : %01i kg", itemWeight), Vector2{ 975, 55 }, 20, 5, WHITE);
	DrawTextEx(ft, TextFormat("Price : %01i PO", itemPrice), Vector2{ 975, 80 }, 20, 5, WHITE);
	DrawTextEx(ft, TextFormat("Effect : ", itemEffectName), Vector2{ 975, 105 }, 20, 5, WHITE);
	DrawTextEx(ft, TextFormat("Spell level : %01i", spellLevel), Vector2{ 975, 130 }, 20, 5, WHITE);
	DrawTextEx(ft, TextFormat("Spell duration : %01i", spellDuration), Vector2{ 975, 155 }, 20, 5, WHITE);
}