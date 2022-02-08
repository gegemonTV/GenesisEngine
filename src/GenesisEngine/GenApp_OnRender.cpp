#include "GenesisEngine/GenApp.hpp"
#include "SDL_render.h"

void GenApp::OnRender() {
    Current_Scene->Draw();
}