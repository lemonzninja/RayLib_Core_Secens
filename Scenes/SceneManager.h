#ifndef SCREENS_H
#define SCREENS_H

typedef enum GameScenes
{
    LOGO = 0,
    TITLE,
    OPTIONS,
    MAIN_LEVEL,
    ENDING,
} GameScenes;

GameScenes currentScene;

// Change the scene and updates the current scene
void ScenesUpdate(void);
void DrawScenes(void);
//------------------------------------------------------
// Logo Scene
//------------------------------------------------------
void InitLogoScreen(void);
void UpdateLogoScreen(void);
void DrawLogoScreen(void);
void UnloadLogoScreen(void);
int FinishLogoScreen(void);

//------------------------------------------------------
// Title Scene
//------------------------------------------------------
void InitTitleScene(void);
void UpdateTitleScene(void);
void DrawTitleScene(void);
void UnloadTitleScene(void);
int FinishTitleScreen(void);

//------------------------------------------------------
// Main_Level Scene
//------------------------------------------------------
void InitGameplayScreen(void);
void UpdateGameplayScreen(void);
void DrawGameplayScreen(void);
void UnloadGameplayScreen(void);
int FinishGameplayScreen(void);

#endif