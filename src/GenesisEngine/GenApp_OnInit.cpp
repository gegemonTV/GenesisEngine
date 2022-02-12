#include "GenesisEngine/Core/GameObject/GenGameObject.hpp"
#include "GenesisEngine/Core/Primitives/GenLine.hpp"
#include "GenesisEngine/Core/Primitives/GenPoint.hpp"
#include "GenesisEngine/GenApp.hpp"
#include "GenesisEngine/GenesisSurface/GenSurface.hpp"
#include "SDL_log.h"
#include "SDL_render.h"

bool GenApp::OnInit() {
    if (SDL_Init(SDL_INIT_EVERYTHING) < 0) {
        SDL_LogError(1, "Failed to initialize SDL: %s", SDL_GetError());
        return false;
    }

    if ((Window = SDL_CreateWindow("MainWin", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, SDL_WINDOW_SHOWN)) == NULL) {
        SDL_LogError(2, "Failed to initialize window: %s", SDL_GetError());
        return false;
    }

    if ((Main_Renderer = SDL_CreateRenderer(Window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC)) == NULL) {
        SDL_LogError(3, "Failed to initialize renderer: %s", SDL_GetError());
        return false;
    }

    if ((Main_Surface = SDL_GetWindowSurface(Window)) == NULL) {
        SDL_LogError(4, "Failed to initialize surface: %s", SDL_GetError());
        return false;
    }
    
    Current_Scene = new GenScene(1, Window);

    GenGameObject * GenPObject = new GenGameObject();
    GenPoint * p = new GenPoint(10,10);
    GenPObject->SetDrawableObject(p);

    GenGameObject * GenLObject1 = new GenGameObject();
    GenLine * l1 = new GenLine(10, 15, 50, 15);
    GenLObject1->SetDrawableObject(l1);

    GenGameObject * GenLObject2 = new GenGameObject();
    GenLine * l2 = new GenLine(new GenPoint(10, 20), new GenPoint(80, 20));
    GenLObject2->SetDrawableObject(l2);

    Current_Scene->AddObject(GenPObject, 1);
    Current_Scene->AddObject(GenLObject1, 1);
    Current_Scene->AddObject(GenLObject2, 1);
    return true;
}