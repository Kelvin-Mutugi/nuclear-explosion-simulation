#include <iostream>
#include <cmath>
#include "raylib.h"

int screen_width = 1800;
int screen_height = 900;

int main(){
    InitWindow(screen_width, screen_height, "NUCLEAR EXPLOSION SIMULATION");
    SetTargetFPS(30);

    while(!WindowShouldClose()){
        BeginDrawing();

        ClearBackground(BLACK);
  
        
        EndDrawing();
    }

    
    CloseWindow();
    return 0;
}