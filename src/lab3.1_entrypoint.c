#include "entrypoint.h"
#include "raylib.h"

//3.2
void raylib_start(void){
    InitWindow(600,600, "Lab 3.1");
    SetTargetFPS(60);
    
    while(!WindowShouldClose()){
        if (IsKeyDown(KEY_ESCAPE)) {
            break;
        }

        BeginDrawing();
        ClearBackground(BLACK);

        DrawRectangle(0,0,600,50, (Color){175,20,50,255});

        EndDrawing();
        }
    CloseWindow();
    }

