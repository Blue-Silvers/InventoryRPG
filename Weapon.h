#pragma once
#include "Equipement.h"

class Weapon : public Equipement
{
private:

public:
	int itemDamage = 1;
	//int itemRange = 1;
	float itemAttackSpeed = 1.0;

	Weapon();
	Weapon(string name, int stackable, int maxStackable, int weight, int price, itemEffect effect, int durability, int maxDurability, int damage, float attackSpeed);
	//~Weapon();
	void Start();
	void NewWeapon(string name, int stackable, int maxStackable, int weight, int price, itemEffect effect, int durability, int maxDurability, int damage, float attackSpeed);
	void Draw(Font ft);
};

