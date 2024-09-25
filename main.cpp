#include "raylib.h"
#include "Weapon.h"
#include <iostream>

using namespace std;

Weapon littleSword;

int main() {
    
    littleSword.NewWeapon("Short Sword", 1, 1, 5, 10, itemEffect::NONE, 10, 20, 3, 1);

    cout << "Hello World" << endl;



    /*InitWindow(300, 300, "My first Raylib window!");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(DARKGREEN);
        EndDrawing();
    }

    CloseWindow();
    return 0;*/
}