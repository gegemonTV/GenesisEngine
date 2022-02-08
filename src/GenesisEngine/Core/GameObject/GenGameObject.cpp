#include "GenesisEngine/Core/GameObject/GenGameObject.hpp"

GenGameObject::GenGameObject() {
    Drawable_Object = NULL;
}

GenGameObject::~GenGameObject(){
    Drawable_Object = NULL;
}

void GenGameObject::Draw(SDL_Renderer *Renderer) {
    if (Drawable_Object != NULL) Drawable_Object->Draw(Renderer);
}

void GenGameObject::SetDrawableObject(GenBasic *New_Drawable_Object) {
    Drawable_Object = New_Drawable_Object;
}