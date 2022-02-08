#pragma once

#include "GenesisEngine/Core/GameObject/GenGameObject.hpp"
#include "GenesisEngine/Core/Primitives/GenBasic.hpp"
#include <SDL2/SDL.h>
#include <vector>

class GenLayer {
    public:
        GenLayer(int Level, SDL_Renderer* Renderer);
        ~GenLayer();

        void Draw();

        void AddObject(GenGameObject *Object);

    private:
        int Layer;
        bool Processing;
        std::vector<GenGameObject *> Objects;
        SDL_Renderer *Renderer;
};