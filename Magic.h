#pragma once
#include "Item.h"

class Magic : public Item
{
private:
	int spellDuration = 1;

public:
	int spellLevel = 1;

	Magic();
	Magic(string name, int stackable, int maxStackable, int weight, int price, itemEffect effect, int level, int duration);
	//void Draw(Font ft);
	string GetItemStatistique() override;

};

