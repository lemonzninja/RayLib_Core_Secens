#include "raylib.h"
#include "Scenes/SceneManager.h"

//Variables Declarations
//------------------------------
const int screenWidth = 450;
const int screenHeight = 450;
// Functions Declarations
//------------------------------
static void Initialization(void);
static void Update(void);
static void DrawGame(void);
static void UpdateDrawFrame(void);

// Functions
//------------------------------

// Game Initializations
static void Initialization(void)
{
    // Set the Start up Scene
    currentScene = LOGO;
    InitLogoScreen();
}

// Update Game
static void Update(void)
{
    // Updates the Sene where are in
    ScenesUpdate();
}

// Draw Game
static void DrawGame(void)
{
    // Start Drawing
    BeginDrawing();

    ClearBackground(BLACK);

    // Draw the Seneses form SceneManager.h
    DrawScenes();

    // End Drawing
    EndDrawing();
}

// Update and DrawGame
static void UpdateDrawFrame(void)
{
    Update();
    DrawGame();
}

// The main function
int main(void)
{
    // Initialization
    //-----------------------

    InitWindow(screenWidth, screenHeight, "Ray-Window");

    Initialization();

    SetTargetFPS(60);

    // Main game loop
    while (!WindowShouldClose())
    {
        // Update/Draw gameLoop
        //----------------------
        UpdateDrawFrame();
    }

    // De-Initialization
    //-----------------------

    CloseWindow(); // CLose Window and OpenGL context
    //-----------------------
    return 0;
}