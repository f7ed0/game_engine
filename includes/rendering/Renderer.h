#ifndef RENDERING_RENDERER_H
#define RENDERING_RENDERER_H

#include <SDL2/SDL.h>

namespace GE {
    class Renderer {
        protected :
            SDL_Renderer *renderer;
        public :
            /**
             * Do not use
            */
            Renderer();

            /**
             * Basic contructor for renderer
             * @throw NullPointerException
            */
            Renderer(SDL_Renderer *sdl_renderer);

            ~Renderer();
    };
}

#endif