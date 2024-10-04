#pragma once
#include "raylib.h"
#include <iostream>
#include <sstream>
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
	bool showInfo = false;
	string itemName = "Bob";
	int maxItemStackable = 1;
	int actualItemStackable = 1;
	int itemWeight = 1;
	int itemPrice = 1;
	Texture2D itemSprite;
	itemEffect itemEffectName = NONE;

	Item();
	Item(string name, int stackable, int maxStackable, int weight, int price, itemEffect effect, Texture2D newItemSprite);
	void Start();
	void Update(int x, int y);
	void Draw(Font ft);
	//virtual void Sell();

	virtual string GetItemStatistique() = 0;
	virtual int GetFood() = 0;
	virtual int GetLearnSpeel() = 0;
	virtual bool GetEquip() = 0;
	virtual int GetArmor() = 0;
};

