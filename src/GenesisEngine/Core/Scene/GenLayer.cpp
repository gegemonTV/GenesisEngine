#include "GenesisEngine/Core/Scene/GenLayer.hpp"
#include "GenesisEngine/Core/GameObject/GenGameObject.hpp"

GenLayer::GenLayer(int Layer, SDL_Renderer* Renderer) {
    Processing = true;
    this->Layer = Layer;
    this->Renderer = Renderer;
    Processing = false;
}

GenLayer::~GenLayer(){}

void GenLayer::AddObject(GenGameObject *Object) {
    Processing = true;
    Objects.push_back(Object);
    Processing = false;
}

void GenLayer::Draw() {
    Processing = true;
    for (auto el : Objects) {
        el->Draw(Renderer);
    }
    Processing = false;
}