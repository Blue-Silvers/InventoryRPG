#include "Inventory.h"
Inventory::Inventory()
{

}
void Inventory::Start(int x, int y)
{
	foreGround = LoadTexture("Icone/BG_Item.png");
	backGround = LoadTexture("Icone/BG_Description.png");
}

void Inventory::Update(int x, int y)
{
	Rectangle rec{ (int)(50 * x), (int)(50 * y), 50, 50 };
	if (CheckCollisionPointRec(GetMousePosition(), rec))
	{
		showInfo = true;
		if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
		{
			//effect
		}
	}
	else 
	{
		showInfo = false;
	}
}

void Inventory::Draw(int x, int y, Font ft)
{
	Rectangle rec{ (int)(50 * x), (int)(50 * y), 50, 50 };
	Vector2 origin{ 0, 0 };
	if (x <= 18)
	{
		DrawTexturePro(foreGround, Rectangle{ 0, 0, 128, 128 }, rec, origin, 0.0f, WHITE);
	}
	else
	{
		DrawTexturePro(backGround, Rectangle{ 0, 0, 128, 128 }, rec, origin, 0.0f, WHITE);
	}


	if (actualInvotory[y][x] != nullptr) 
	{
		DrawTexturePro(actualInvotory[y][x]->itemSprite, Rectangle{0, 0, 128, 128}, rec, origin, 0.0f, WHITE);
	}


	if (showInfo == true) 
	{
		//actualInvotory[y][x]->Draw(ft);
	}
}