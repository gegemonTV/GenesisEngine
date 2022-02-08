#pragma once

#include <SDL2/SDL.h>

enum PrimitiveType {
    POINT,
    LINE,
    POLYLINE,
    RECTANGLE,
    CIRCLE,
    SPRITE
};

class GenBasic {
    public:
        virtual ~GenBasic() {}

        virtual void Update() = 0;

        virtual void Draw(SDL_Renderer *Renderer) = 0;

        virtual bool IsChoosed(int x, int y) = 0;
};