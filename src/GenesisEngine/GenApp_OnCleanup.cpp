#include "GenesisEngine/GenApp.hpp"
#include "SDL_render.h"
#include "SDL_surface.h"

void GenApp::OnCleanup() {
    if (Current_Scene != NULL) SDL_DestroyRenderer(Current_Scene->GetRenderer());
    Current_Scene->~GenScene();
    SDL_FreeSurface(Main_Surface);
    SDL_DestroyWindow(Window);
    SDL_Quit();
}