#pragma once
#include "raylib.h"
#include <iostream>
using namespace std;

	enum itemEffect
	{
		FIRE,
		ICE,
		WATER,
		EARTH,
		HEAL,
		LIGHT,
		VOID,
		NONE,
	};

class Item
{
private:
	

public:
	string itemName = "Bob";
	int maxItemStackable = 1;
	int actualItemStackable = 1;
	int itemWeight = 1;
	int itemPrice = 1;
	Texture2D itemSprite;
	string itemEffectName = "NoneEffect";

	Item();
	Item(string name, int stackable, int maxStackable, int weight, int price, itemEffect effect);
	void Draw(Font ft);
	//virtual void Sell();
};

