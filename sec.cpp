#include <raylib.h>

const int height = 600, width = 800;

int main()
{
    InitWindow(width, height, "Секущая");
    SetTargetFPS(30);
    while (!WindowShouldClose())
    {
        BeginDrawing();
        
            DrawLine(0, 0, 800, 600, RED);
            DrawCircle(370, 340, 50, BLUE);
            DrawLine(0, 0, 800, 600, RED);
            DrawLine(370, 340, 400, 300, RED);
        
        EndDrawing();
    }
    CloseWindow();
}