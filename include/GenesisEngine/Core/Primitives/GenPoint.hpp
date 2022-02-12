#pragma once

#include "GenBasic.hpp"

class GenPoint : public GenBasic {
    protected:
        int x, y;
        PrimitiveType Type;
    
    public:
        GenPoint(int x, int y);
        ~GenPoint() override;

        void Update() override;

        void Draw(SDL_Renderer * Renderer) override;

        bool IsChoosed(int x, int y) override; 

        int GetX();
        int GetY();

        void SetX(int x);
        void SetY(int y);
};