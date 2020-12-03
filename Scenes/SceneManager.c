#include "SceneManager.h"

// Change the scene and updates the current scene
void ScenesUpdate(void)
{
    /*
        The Switch statmint will 
        -change the scene
        -update current
    */
    switch (currentScene)
    {
    case LOGO:
    {
        if (currentScene == LOGO)
        {

            UpdateLogoScreen();

            if (FinishLogoScreen())
            {
                UnloadLogoScreen();
                currentScene = TITLE;
                InitTitleScene();
            }
        }
    }
    break;
    case TITLE:
    {
        UpdateTitleScene();
        if(FinishTitleScreen() == 1)
        {
            UnloadTitleScene();
            currentScene = MAIN_LEVEL;
            InitGameplayScreen();
        }
    }
    break;
    case OPTIONS:
    {
        // TODO MAKE AN OPTIONS
    }
    break;
    case MAIN_LEVEL:
    {
        if (currentScene == MAIN_LEVEL)
        {
            InitGameplayScreen();
            UpdateGameplayScreen();
        }
    }
    break;
    case ENDING:
    {
        // TODO NEEDS A LOSE AND WIN SCENE
    }
    break;
    default:
        break;
    }
}

// Draw the Current scene
void DrawScenes(void)
{
    /*  
        The Switch statmint
        Draws the Current Scene 
        from "scenesManager" is in. 
    */
    switch (currentScene)
    {
    case LOGO:
        DrawLogoScreen();
        break;
    case TITLE:
        DrawTitleScene();
        break;
    case OPTIONS:

        break;
    case MAIN_LEVEL:
        DrawGameplayScreen();
        break;
    case ENDING:

        break;
    default:
        break;
    }
}
