#pragma once
#include "raylib.h"
#include <iostream>
using namespace std;

class Inventory
{
private:
	

public:
	string itemName;
	int maxItemStackable;
	int itemWeight;
	int itemPrice;
	Texture2D itemSprite;
	enum itemEffect
	{
		Fire,
		Ice,
		Water,
		Earth,
		Heal,
		Light,
		Void,
		Latin,
	};

	Inventory();
};

