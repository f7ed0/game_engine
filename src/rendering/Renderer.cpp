#include "rendering/Renderer.h"

using namespace GE;

Renderer::Renderer() {
    this->renderer = NULL;
}

Renderer::Renderer(SDL_Renderer *sdl_renderer) {
    this->renderer = sdl_renderer;
}

Renderer::~Renderer() {
    SDL_DestroyRenderer(this->renderer);
}