#pragma once

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

class GenSurface {
    public:
        GenSurface();
    
    public:
        static SDL_Surface* OnLoad(char* File, SDL_Window* Window);

        static bool OnDraw(SDL_Surface* Surf_Dest, SDL_Surface* Surf_Src, int x, int y);

        static bool OnDraw(SDL_Surface* Surf_Dest, SDL_Surface* Surf_Src, int x1, int y1, int x2, int y2, int w, int h);
};