#include <iostream>
#include <cmath>
#include "raylib.h"

int screen_width = 1800;
int screen_height = 900;

int main(){

    InitWindow(screen_width, screen_height, "my raylib screen");
    SetTargetFPS(30);

    while(!WindowShouldClose()){
        BeginDrawing();

        ClearBackground(BLACK);
        DrawText("Congrats! You created a window!", 190, 200, 20, BLACK);

        DrawPixel(800,450, RED);   
        DrawLine(0, 850, 1600, 850, RED);   
        
        EndDrawing();
    }

    CloseWindow();


    return 0;
}