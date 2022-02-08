#include "GenesisEngine/Core/Primitives/GenPoint.hpp"
#include "SDL_render.h"

GenPoint::GenPoint(int x, int y) {
    this->x = x;
    this->y = y;
    this->Type = POINT;
}

GenPoint::~GenPoint() {}

void GenPoint::Draw(SDL_Renderer *Renderer){
    SDL_SetRenderDrawColor(Renderer, 0, 0, 0, 255);
    SDL_RenderDrawPoint(Renderer, x, y);
}

bool GenPoint::IsChoosed(int x, int y){
    return this->x == x && this->y == y;
}

void GenPoint::Update() {}