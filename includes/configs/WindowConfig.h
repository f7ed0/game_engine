#ifndef GE_WINDOWCONFIG_HEADER
#define GE_WINDOWCONFIG_HEADER

#include "./Config.h"
#include <SDL2/SDL.h>

namespace GE {
    class WindowConfig : public Config {
    public :
        static const int default_height = 720;
        static const int default_width = 1280;
    protected :
        int width;
        int height;
        bool fs;
        bool borderless;
    public :
        /**
         * Default constructor.
         * init attribute with default value
        */
        WindowConfig();

        /**
         * Retrieve the windowFlags from attributes
         * @return current flags
        */
        Uint32 getWindowFlags();
    };
}

#endif