#include "GenLayer.hpp"
#include "GenesisEngine/Core/GameObject/GenGameObject.hpp"
#include <vector>

class GenScene {
    public:
        GenScene(int LayerCount, SDL_Window *Window);
        ~GenScene();

        void Draw();

        SDL_Renderer* GetRenderer();

        void AddObject(GenGameObject* Game_Object, int LayerNumber);

        int TopLayer;
        int BottomLayer;
    private:
        int LayerCount;
        int Width, Height;
        std::vector<GenLayer *> Layers;
        SDL_Renderer *Scene_Renderer;
        

};