#include "GenesisEngine/GenesisSurface/GenSurface.hpp"
#include "SDL_rect.h"
#include "SDL_surface.h"

GenSurface::GenSurface() {

}

SDL_Surface* GenSurface::OnLoad(char *File, SDL_Window *Window) {
    SDL_Surface* Surf_Temp = NULL;
    SDL_Surface* Surf_Ret = NULL;

    if ((Surf_Temp = IMG_Load(File)) == NULL) return NULL;

    Surf_Ret = SDL_ConvertSurfaceFormat(Surf_Temp, SDL_GetWindowPixelFormat(Window), 0);
    SDL_FreeSurface(Surf_Temp);

    return Surf_Ret;
}

bool GenSurface::OnDraw(SDL_Surface *Surf_Dest, SDL_Surface *Surf_Src, int x, int y) {
    if (Surf_Dest == NULL || Surf_Src == NULL) return false;

    SDL_Rect DestR;

    DestR.x = x;
    DestR.y = y;

    SDL_BlitSurface(Surf_Src, NULL, Surf_Dest, &DestR);

    return true;
}

bool GenSurface::OnDraw(SDL_Surface* Surf_Dest, SDL_Surface* Surf_Src, int x1, int y1, int x2, int y2, int h, int w) {
    if (Surf_Dest == NULL || Surf_Src == NULL) {
        return false;
    }

    SDL_Rect DestR;

    DestR.x = x1;
    DestR.y = y1;

    SDL_Rect SrcR;

    SrcR.x = x2;
    SrcR.y = y2;

    SrcR.w = w;
    SrcR.h = h;

    SDL_BlitSurface(Surf_Src, &SrcR, Surf_Dest, &DestR);

    return true;
}