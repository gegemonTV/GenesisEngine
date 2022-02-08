#pragma once

#include <SDL2/SDL.h>

#include "GenesisEngine/Core/Primitives/GenBasic.hpp"

class GenGameObject {
    public:
        GenGameObject();
        ~GenGameObject();

        void Draw(SDL_Renderer* Renderer);

        void SetDrawableObject(GenBasic* New_Drawable_Object);
    
    private:
        GenBasic* Drawable_Object;
};