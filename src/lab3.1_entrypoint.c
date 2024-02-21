#include "entrypoint.h"
#include "raylib.h"


void raylib_start(void){
    InitWindow(600,600, "Lab 3.1");
    SetTargetFPS(60);
    Color _black = (Color){0,0,0,255};
    Color _red = (Color){255,0,0,255};

    while(!WindowShouldClose()){
        if (IsKeyDown(KEY_ESCAPE)) {
            break;
        }

        BeginDrawing();
        ClearBackground(WHITE);
        //line 1
        DrawRectangle(210,60,180,30, _black);
        //line 2
        DrawRectangle(150,90,60,30, _black);
        DrawRectangle(270,90,120,90, _red);
        DrawRectangle(390,90,60,30, _black);
        //line 3
        DrawRectangle(120,120,30,30, _black);
        DrawRectangle(450,120,30,30, _black);
        //line 4
        DrawRectangle(90,150,30,60, _black);
        DrawRectangle(240,150,30,60, _red);
        DrawRectangle(390,150,30,60, _red);
        DrawRectangle(480,150,30,60, _black);
        //line 5
        DrawRectangle(210,180,30,30, _red);
        DrawRectangle(420,180,30,210, _red);
        //line 6
        DrawRectangle(60,210,30,180, _black);
        DrawRectangle(90,210,150,30, _red);
        DrawRectangle(450,210,60,60, _red);
        DrawRectangle(510,210,30,180, _black);
        //line 7
        DrawRectangle(90,240,30,30, _red);
        DrawRectangle(180,240,30,30, _red);
        DrawRectangle(210,240,30,90, _red);
        //line 8
        DrawRectangle(450,270,30,30, _red);
        //line 9
        DrawRectangle(240,300,30,30, _red);
        DrawRectangle(390,300,30,30, _red);
        //line 10
        DrawRectangle(90,330,30,30, _red);
        DrawRectangle(180,330,240,30, _red);
        //line 11
        DrawRectangle(90,360,90,30, _red);
        DrawRectangle(180,360,240,30, _black);
        DrawRectangle(450,360,30,30, _red);
        //line 12
        DrawRectangle(90,390,90,30, _black);
        DrawRectangle(240,390,30,60, _black);
        DrawRectangle(330,390,30,60, _black);
        DrawRectangle(420,390,90,30, _black);
        //line 13
        DrawRectangle(120,420,30,60, _black);
        DrawRectangle(450,420,30,60, _black);
        //line 15
        DrawRectangle(150,480,30,30, _black);
        DrawRectangle(420,480,30,30, _black);
        //line 16
        DrawRectangle(180,510,240,30, _black);

        EndDrawing();
        }
    CloseWindow();
    }

