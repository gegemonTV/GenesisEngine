#include "GenesisEngine/Core/Scene/GenScene.hpp"
#include "GenesisEngine/Core/Scene/GenLayer.hpp"

GenScene::GenScene(int LayerCount, SDL_Window *Window){
    this->LayerCount = LayerCount;
    SDL_GetWindowSize(Window, &Width, &Height);
    Scene_Renderer = SDL_GetRenderer(Window);
    BottomLayer = 0;
    TopLayer = LayerCount-1;
    Layers = std::vector<GenLayer *>();
    for (int i = 0; i<LayerCount; i++){
        Layers.push_back(new GenLayer(i, Scene_Renderer));
    }
}

GenScene::~GenScene(){}

void GenScene::Draw() {
    SDL_SetRenderDrawColor(Scene_Renderer, 255, 255, 255, 255);
    SDL_RenderClear(Scene_Renderer);
    for (auto e : Layers){
        e->Draw();
    }
    SDL_RenderPresent(Scene_Renderer);
}

SDL_Renderer* GenScene::GetRenderer() {
    return Scene_Renderer;
}

void GenScene::AddObject(GenGameObject *Game_Object, int LayerNumber) {
    Layers[LayerNumber-1]->AddObject(Game_Object);
}