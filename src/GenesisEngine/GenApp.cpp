#include "GenesisEngine/GenApp.hpp"

GenApp::GenApp() {
    Running = true;

    Window = NULL;

    Main_Renderer = NULL;

    Main_Surface = NULL;
    Current_Scene = NULL;
}

int GenApp::OnExecute() {
    if (!OnInit()) return -1;

    SDL_Event Event;

    while (Running) {
        while (SDL_PollEvent(&Event)) {
            OnEvent(&Event);
        }

        OnLoop();
        OnRender();
    }

    OnCleanup();

    return 0;
}