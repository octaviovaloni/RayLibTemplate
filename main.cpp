
#include "raylib.h"

int main() {

    constexpr int width = 800;
    constexpr int height = 450;

    InitWindow(width, height, "Window");

    SetTargetFPS(60);

    while (!WindowShouldClose()) {

        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawText(
            "Yep",
            220, 180,
            30,
            DARKGRAY
        );

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
