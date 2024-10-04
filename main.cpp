#include "raylib.h"
#include "Weapon.h"
#include "Inventory.h"
#include "Item.h"
#include "Magic.h"
#include <iostream>

using namespace std;

void Start();
void Update();
void Draw();
void End();

Font ft;
Inventory myInvotory = Inventory();
//Weapon* littleSword =new Weapon("Short Sword", 1, 1, 5, 10, itemEffect::NONE, 10, 20, 3, 1.5);
//Magic* SpellOfVoid = new Magic("Spell of void", 2, 16, 1, 150, VOID, 5, 30);

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

    myInvotory.Start(1, 1);
    //littleSword->Start();
    //myInvotory.actualInvotory[0][0] = littleSword;
    //myInvotory.actualInvotory[0][2] = SpellOfVoid;
}


void Update()
{
    
    for (int x = 0; x < 9; x++)
    {
        for (int y = 0; y < 8; y++)
        {
            myInvotory.Update(x, y, ft);
        }
    }
}

void Draw()
{
    BeginDrawing();

    ClearBackground(DARKBROWN);


    for (int x = 0; x < 9; x++)
    {
        for (int y = 0; y < 8; y++)
        {
            myInvotory.Draw(x, y, ft);
        }
    }
    for (int x = 0; x < 9; x++)
    {
        for (int y = 0; y < 8; y++)
        {
            myInvotory.Update(x, y, ft);
        }
    }
    EndDrawing();
}


void End()
{
    CloseWindow();
}