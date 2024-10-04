#include "raylib.h"
#include "Inventory.h"
#include "GameInit.h"
#include <iostream>

using namespace std;

void Start();
void Update();
void Draw();
void End();

Font ft;
GameInit gameManage;
Inventory myInvotory = Inventory();

int main()
{
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

    gameManage.Init(myInvotory);

    myInvotory.Start();
    myInvotory.actualInvotory[0][0] = gameManage.broadSword;
    myInvotory.actualInvotory[0][1] = gameManage.cactusSword;
    myInvotory.actualInvotory[0][2] = gameManage.meteorStrike;
    myInvotory.actualInvotory[0][3] = gameManage.summonSatan;
    myInvotory.actualInvotory[0][4] = gameManage.poseidonStaff;
    myInvotory.actualInvotory[0][5] = gameManage.bread;
    myInvotory.actualInvotory[0][6] = gameManage.honey;
    myInvotory.actualInvotory[0][7] = gameManage.chainedChesplate;
    myInvotory.actualInvotory[0][8] = gameManage.spartaHelmet;
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