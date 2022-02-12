#pragma once

#include "GenBasic.hpp"
#include "GenPoint.hpp"

class GenLine : public GenBasic {
    protected:
        PrimitiveType Type;
        GenPoint *Point1, *Point2;
    public:
        GenLine(int x1, int y1, int x2, int y2);
        GenLine(GenPoint* p1, GenPoint* p2);
        ~GenLine() override;

        void Update() override;

        void Draw(SDL_Renderer * Renderer) override;

        bool IsChoosed(int x, int y) override;
    
};