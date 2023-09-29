#include <SDL2/SDL.h>
#include <string>
#include <iostream>
#include "exceptions/SDLException.h"



using namespace GE;

SDLException::SDLException(const char *info) : info(info){
}


const char *SDLException::what() const noexcept {
    return this->info;
}