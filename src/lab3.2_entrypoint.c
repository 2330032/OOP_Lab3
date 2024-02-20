#include "entrypoint.h"
#include "raylib.h"

//3.2
void raylib_start(void){
    InitWindow(600,600, "Lab 3.2");
    SetTargetFPS(60);
    float x = 0.0f; 
    float y = 0.0f;

    while(!WindowShouldClose()){
        if (IsKeyDown(KEY_ESCAPE)) {
            break;
        }

        float _DeltaTime = GetFrameTime();
        if(IsKeyDown(KEY_D)) {
            x += (100*_DeltaTime);
        }
        if(IsKeyDown(KEY_A)) {
            x -= (100*_DeltaTime);
        }
        if(IsKeyDown(KEY_S)) {
            y += (100*_DeltaTime);
        }
        if(IsKeyDown(KEY_W)) {
            y -= (100*_DeltaTime);
        }
        if (x>600){
            x = -100;
        }
        if (x<-101){
            x = 601;
        }
        if (y>600){
            y = -100;
        }
        if(y < -101){
            y = 601;
        }
        
        BeginDrawing();
        ClearBackground(BLACK);

        DrawRectangle(x,y,75,75, (Color){100,0,200,255});

        EndDrawing();
        }
    CloseWindow();
    }

