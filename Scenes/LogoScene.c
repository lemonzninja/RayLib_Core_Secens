#include "raylib.h"
#include "SceneManager.h"

//------------------------------------------------------
// Global Variables Definition (local to this module)
//------------------------------------------------------
static int finishScene;
static int frameCounter;

// Logo Scene Initialization logic
void InitLogoScreen(void)
{

    finishScene = 0;
}

// Logo Screen Update logic
void UpdateLogoScreen(void)
{
    frameCounter++;

    // Wait for 2 seconds (120 frames) befor going to TITLE screen
    if (frameCounter > 120)
    {
        finishScene = true;
    }
}

// Logo Screen Draw logic
void DrawLogoScreen(void)
{
    DrawText("LOGO SCREEN", 20, 20, 40, LIGHTGRAY);
    DrawText("WAIT for 2 SECONDS...", 290, 220, 20, GRAY);
}

void UnloadLogoScreen(void)
{
    // TODO: Unload LOGO screen variables here!

}

int FinishLogoScreen(void)
{
    return finishScene;
}
