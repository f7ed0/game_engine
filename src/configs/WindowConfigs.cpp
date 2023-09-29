#include "configs/WindowConfig.h"

using namespace GE;

WindowConfig::WindowConfig(){
    this->height = WindowConfig::default_height;
    this->width = WindowConfig::default_width;
    this->fs = false;
    this->borderless = false;
}

Uint32 WindowConfig::getWindowFlags() {
    Uint32 flags = SDL_WINDOW_OPENGL;
    if(this->fs) flags |= SDL_WINDOW_FULLSCREEN;
    if(this->borderless) flags |= SDL_WINDOW_BORDERLESS;

    return flags;
}