#include "raylib.h"

int main() {

    // TODO crée un fichier constantes
    const int screenWidth = 800;
    const int screenHeight = 800;
    InitWindow(screenWidth, screenHeight, "Alcazar");

    while (!WindowShouldClose()) {
        BeginDrawing();

        ClearBackground(RAYWHITE);

        // TODO: Draw everything that requires to be drawn at this point

        DrawLineEx((Vector2){ 0, 0 }, (Vector2){ screenWidth, screenHeight }, 2.0f, RED);
        DrawLineEx((Vector2){ 0, screenHeight }, (Vector2){ screenWidth, 0 }, 2.0f, RED);
        DrawText("Exemple drawing Raylib", 260, 400, 20, LIGHTGRAY);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
