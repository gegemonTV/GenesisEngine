#include "GenesisEngine/Core/Primitives/GenLine.hpp"
#include "SDL_render.h"

GenLine::GenLine(int x1, int y1, int x2, int y2) {
    Point1 = new GenPoint(x1, y1);
    Point2 = new GenPoint(x2, y2);
    this->Type = LINE;
}

GenLine::GenLine(GenPoint *p1, GenPoint *p2) {
    Point1 = p1;
    Point2 = p2;
    this->Type = LINE;
}

GenLine::~GenLine() {}

void GenLine::Update() {};

void GenLine::Draw(SDL_Renderer *Renderer) {
    SDL_SetRenderDrawColor(Renderer, 0, 0, 0, 255);
    SDL_RenderDrawLine(Renderer, Point1->GetX(), Point1->GetY(), Point2->GetX(), Point2->GetY());
}

bool GenLine::IsChoosed(int x, int y) {
    return false;
}