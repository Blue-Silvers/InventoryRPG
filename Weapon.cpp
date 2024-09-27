#include "Weapon.h"

Weapon::Weapon() 
{

}

Weapon::Weapon(std::string name, int stackable, int maxStackable, int weight, int price, itemEffect effect, int durability, int maxDurability, int damage, float attackSpeed)
{
	itemName = name;
	actualItemStackable = stackable;
	maxItemStackable = maxStackable;
	itemWeight = weight;
	itemPrice = price;
	itemEffectName = (char)effect;
	itemMaxDurability = maxDurability;
	itemDurability = durability;
	itemDamage = damage;
	itemAttackSpeed = attackSpeed;

	
}

void Weapon::Start() 
{
	itemSprite = LoadTexture("Icone/BG_Description.png");
}

void Weapon::NewWeapon(std::string name, int stackable, int maxStackable, int weight, int price, itemEffect effect, int durability, int maxDurability, int damage, float attackSpeed) 
{
	itemName = name;
	actualItemStackable = stackable;
	maxItemStackable = maxStackable;
	itemWeight = weight;
	itemPrice = price;
	itemEffectName = (char)effect;
	itemMaxDurability = maxDurability;
	itemDurability = durability;
	itemDamage = damage;
	itemAttackSpeed = attackSpeed;

	itemSprite = LoadTexture("Icone/BG_Description.png");
}

void Weapon::Draw(Font ft)
{
	DrawTextEx(ft, TextFormat("Name : ", itemName), Vector2{ 975, 5 }, 20, 5, WHITE);
	DrawTextEx(ft, TextFormat("Stack of : %01i / %01i", actualItemStackable, maxItemStackable), Vector2{ 975, 30 }, 20, 5, WHITE);
	DrawTextEx(ft, TextFormat("Weight : %01i kg", itemWeight), Vector2{ 975, 55 }, 20, 5, WHITE);
	DrawTextEx(ft, TextFormat("Price : %01i PO", itemPrice), Vector2{ 975, 80 }, 20, 5, WHITE);
	DrawTextEx(ft, TextFormat("Effect : ", itemEffectName), Vector2{ 975, 105 }, 20, 5, WHITE);
	DrawTextEx(ft, TextFormat("Durability : %01i / %01i", itemDurability, itemMaxDurability), Vector2{ 975, 130 }, 20, 5, WHITE);
	DrawTextEx(ft, TextFormat("Damage : %01i", itemDamage), Vector2{ 975, 155 }, 20, 5, WHITE);
	DrawTextEx(ft, TextFormat("SpeedAttack : %01f", itemAttackSpeed), Vector2{ 975, 180 }, 20, 5, WHITE);
	//DrawTextEx(ft, TextFormat("Bricks : %02i", nbBrick), Vector2{ 5, 5 }, 50, 5, WHITE);
}
