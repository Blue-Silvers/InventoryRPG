#include "Item.h"


Item::Item()
{

}

Item::Item(string name, int stackable, int maxStackable, int weight, int price, itemEffect effect) 
{
	itemName = name;
	actualItemStackable = stackable;
	maxItemStackable = maxStackable;
	itemWeight = weight;
	itemPrice = price;
	itemEffectName = (char)effect;
}

void Item::Start() 
{
	itemSprite = LoadTexture("Icone/BG_Description.png");
}

void Item::Update(int x, int y) 
{
	DrawText(TextFormat("Test : ", itemName), 975, 5 , 20, WHITE);
		showInfo = true;
		if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
		{
			//effect
		}

}

void Item::Draw(Font ft)
{
	//if (showInfo == true) 
	//{
	DrawTextEx(ft, TextFormat("Name : ", itemName), Vector2{ 975, 5 }, 20, 5, WHITE);
	DrawTextEx(ft, TextFormat("Stack of : %01i / %01i", actualItemStackable, maxItemStackable), Vector2{ 975, 30 }, 20, 5, WHITE);
	DrawTextEx(ft, TextFormat("Weight : %01i kg", itemWeight), Vector2{ 975, 55 }, 20, 5, WHITE);
	DrawTextEx(ft, TextFormat("Price : %01i PO", itemPrice), Vector2{ 975, 80 }, 20, 5, WHITE);
	DrawTextEx(ft, TextFormat("Effect : ", itemEffectName), Vector2{ 975, 105 }, 20, 5, WHITE);
	//DrawTextEx(ft, TextFormat("Bricks : %02i", nbBrick), Vector2{ 5, 5 }, 50, 5, WHITE);
	//}

}