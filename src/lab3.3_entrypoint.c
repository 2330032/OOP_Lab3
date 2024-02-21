#include "entrypoint.h"
#include "raylib.h"


void raylib_start(void){
    InitWindow(600,600, "Lab 3.3");
    SetTargetFPS(60);
    float x = 0.0f; 
    float y = 0.0f;

    while(!WindowShouldClose()){
        if (IsKeyDown(KEY_ESCAPE)) {
            break;
        }

        float _deltaTime = GetFrameTime();

        

        BeginDrawing();
        ClearBackground(BLACK);

        DrawRectangle(x,y,20,20, (Color){20,100,100,255});

        EndDrawing();
        }
    CloseWindow();
    }

