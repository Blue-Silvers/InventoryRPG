#pragma once
#include <iostream>
#include "vector"
#include "Item.h"


using namespace std;

class Inventory
{
private :
	int money = 0;


public :
	
	vector <Item*> actualInvotory;

	Inventory();
	void SellItemInInventory();

};

