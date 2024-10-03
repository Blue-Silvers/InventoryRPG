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
	itemEffectName = effect;
	spellLevel = level;
	spellDuration = duration;
}

string Magic::GetItemStatistique()
{
	string itemEffectText;
	if (itemEffectName == 0)
	{
		itemEffectText = "Fire";
	}
	else if (itemEffectName == 1)
	{
		itemEffectText = "Ice";
	}
	else if (itemEffectName == 2)
	{
		itemEffectText = "Water";
	}
	else if (itemEffectName == 3)
	{
		itemEffectText = "Earth";
	}
	else if (itemEffectName == 4)
	{
		itemEffectText = "Heal";
	}
	else if (itemEffectName == 5)
	{
		itemEffectText = "Light";
	}
	else if (itemEffectName == 6)
	{
		itemEffectText = "Void";
	}
	else if (itemEffectName == 7)
	{
		itemEffectText = "None";
	}
	std::ostringstream returnValue;
	returnValue << "Name : " << itemName <<
		"\n\n" << "Stack of : " << actualItemStackable << " / " << maxItemStackable <<
		"\n\n" << "Weight : " << itemWeight << "Kg" <<
		"\n\n" << "Price : " << itemPrice << "PO" <<
		"\n\n" << "Effect : " << itemEffectText <<
		"\n\n" << "Spell level : " << spellLevel <<
		"\n\n" << "Spell duration : " << spellDuration;
	return returnValue.str();
}

//void Magic::Draw(Font ft)
//{
//	DrawTextEx(ft, TextFormat("Name : ", itemName), Vector2{ 975, 5 }, 20, 5, WHITE);
//	DrawTextEx(ft, TextFormat("Stack of : %01i / %01i", actualItemStackable, maxItemStackable), Vector2{ 975, 30 }, 20, 5, WHITE);
//	DrawTextEx(ft, TextFormat("Weight : %01i kg", itemWeight), Vector2{ 975, 55 }, 20, 5, WHITE);
//	DrawTextEx(ft, TextFormat("Price : %01i PO", itemPrice), Vector2{ 975, 80 }, 20, 5, WHITE);
//	DrawTextEx(ft, TextFormat("Effect : ", itemEffectName), Vector2{ 975, 105 }, 20, 5, WHITE);
//	DrawTextEx(ft, TextFormat("Spell level : %01i", spellLevel), Vector2{ 975, 130 }, 20, 5, WHITE);
//	DrawTextEx(ft, TextFormat("Spell duration : %01i", spellDuration), Vector2{ 975, 155 }, 20, 5, WHITE);
//}