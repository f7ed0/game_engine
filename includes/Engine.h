#ifndef GE_ENGINE_HEADER
#define GE_ENGINE_HEADER

#include <SDL2/SDL.h>
#include "rendering/Renderer.h"
#include "configs/configs.h"

namespace GE
{
    class Engine {
    protected :
        WindowConfig wconf;
        SDL_Window *window;
        Renderer *r;
    public :
        /**
         * Default constructor for Engine object
        */
        Engine();

        /**
         * Init the engine to start the game
         * @throw SDLException
         * @throw NullPointerException
        */
        void init();

        /**
         * Clean stop of the engine
        */
        void stop();

        /**
         * 
        */
        void LoadConfig();
    };
}



#endif
