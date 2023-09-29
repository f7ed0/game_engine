#include "cstdlib"
#include "SDL2/SDL.h"
#include "Engine.h"
#include "exceptions/exceptions.h"

using namespace GE;

Engine::Engine() {
}

void Engine::init() {
    int result = SDL_Init(SDL_INIT_VIDEO);
    if(result) throw SDLException(SDL_GetError());
    SDL_Renderer *temp;
    result = SDL_CreateWindowAndRenderer(
        this->wconf.default_width,
        this->wconf.default_height,
        this->wconf.getWindowFlags(),
        &this->window,
        &temp
    );
    if(result) throw SDLException(SDL_GetError());
    this->r = new Renderer(temp);
}

void Engine::stop() {
    delete this->r;
    SDL_DestroyWindow(this->window);
    SDL_Quit();
}