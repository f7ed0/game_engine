#include "iostream"
#include "game_engine.h"
#include <unistd.h>


int main(int argc, char** argv) {
    GE::Engine engine;

    try {
        engine.init();
    }
    catch(GE::SDLException &e) {
        std::cerr << e.what() << std::endl;
        exit(UNKNOWN_ERROR_CODE);
    }
    catch (...) {
        exit(UNKNOWN_ERROR_CODE);
    }

    

    sleep(2);

    engine.stop();
}