#include "GenesisEngine/GenApp.hpp"

void GenApp::OnEvent(SDL_Event *Event) {
    if (Event->type == SDL_QUIT) {
        Running = false;
    }
}