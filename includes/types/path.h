#ifndef GE_TYPES_PATH_HEADER
#define GE_TYPES_PATH_HEADER

#include <fstream>
#include <string>

namespace GE {
    class path : public std::string {
        public :
            std::ifstream *open();
    };
}

#endif