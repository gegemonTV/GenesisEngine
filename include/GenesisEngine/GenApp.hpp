#pragma once

#include <SDL2/SDL.h>

#include "GenesisSurface/GenSurface.hpp"
#include "Core/Scene/GenScene.hpp"
#include "Core/GameObject/GenGameObject.hpp"

class GenApp {
    private:
        bool Running;

        SDL_Window* Window;

        SDL_Renderer* Main_Renderer;

        SDL_Surface* Main_Surface;

        GenScene* Current_Scene;

    public:

        GenApp();

        int OnExecute();
    
    public:
        bool OnInit();

        void OnEvent(SDL_Event* Event);

        void OnLoop();

        void OnRender();

        void OnCleanup();
};