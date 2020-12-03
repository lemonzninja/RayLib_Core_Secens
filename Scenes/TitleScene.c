#include "raylib.h"
#include "SceneManager.h"

static int finishScene;

// Title Scene Initialization
void InitTitleScene(void)
{
    finishScene = 0;
}

// Title Scene Update 
void UpdateTitleScene(void)
{

    // seat finishScene to a number to change scene
    if(IsKeyReleased(KEY_ENTER))
    {
        finishScene = 1;
    }
}

// Title scene Draw logic
void DrawTitleScene(void)
{
    DrawText("Title Scene", 60, 32, 10, BLUE);
    DrawText("Push Enter to begin!", 80, 32, 10, BLUE);
}

void UnloadTitleScene(void)
{
    // TODO: unload Title screen here!
}

// Returns the number set to finishScene
int FinishTitleScreen(void)
{
    return finishScene;
}