#include "raylib.h"
#include "Weapon.h"
#include "Inventory.h"
#include "Item.h"
#include <iostream>

using namespace std;

void Start();
void Update();
void Draw();
void End();

Font ft;
Inventory myInvotory = Inventory();
Weapon littleSword;
Item* testItem = new Item("Item test", 1, 1, 5, 10, itemEffect::NONE);

int main()
{
    

    cout << "Hello World" << endl;
    Start();

    while (!WindowShouldClose())
    {
        Update();
        Draw();
    }

    End();
    return 0;
}


void Start()
{
    
    InitWindow(1200, 800, "Inventory RPG");
    SetTargetFPS(60);
    ft = LoadFont("resources/fonts/jupiter_crash.png");
    littleSword.NewWeapon("Short Sword", 1, 1, 5, 10, itemEffect::NONE, 10, 20, 3, 1);
    for (int x = 0; x < 24; x++)
    {
        for (int y = 0; y < 16; y++)
        {
            //myInvotory.actualInvotory[x][y].Start(x, y);
        }
    }
    myInvotory.Start(1, 1);
    /*Item* test = &testItem;*/
    myInvotory.actualInvotory[0][0] = testItem;
}


void Update()
{
    
}

void Draw()
{
    BeginDrawing();

    ClearBackground(DARKGREEN);


    for (int x = 0; x < 24; x++)
    {
        for (int y = 0; y < 16; y++)
        {
            myInvotory.Draw(x, y, ft);
        }
    }
    //DrawTextEx(ft, TextFormat("Name : Short sword"), Vector2{ 975, 5 }, 20, 5, WHITE);
    //DrawTextEx(ft, TextFormat("Stack of : %01i / %01i", 1, 1), Vector2{ 975, 30 }, 20, 5, WHITE);
    //DrawTextEx(ft, TextFormat("Weight : %01i kg", 20), Vector2{ 975, 55 }, 20, 5, WHITE);
    //DrawTextEx(ft, TextFormat("Price : %01i PO", 5), Vector2{ 975, 80 }, 20, 5, WHITE);
    //DrawTextEx(ft, TextFormat("Effect : ", VOID), Vector2{ 975, 105 }, 20, 5, WHITE);
    //DrawTextEx(ft, TextFormat("Durability : %01i / %01i", 100, 150), Vector2{ 975, 130 }, 20, 5, WHITE);
    //DrawTextEx(ft, TextFormat("Damage : %01i", 5), Vector2{ 975, 155 }, 20, 5, WHITE);
    //DrawTextEx(ft, TextFormat("SpeedAttack : %01f", 1.5), Vector2{ 975, 180 }, 20, 5, WHITE);
    //DrawTextEx(ft, TextFormat("Mana : %01i", 50), Vector2{ 975, 205 }, 20, 5, WHITE);
    EndDrawing();
}


void End()
{
    CloseWindow();
}