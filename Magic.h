#pragma once
#include "Inventory.h"

class Magic : public Inventory
{
private:
	int spellDuration;

public:
	int spellLevel;

	Magic();
};

