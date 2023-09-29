#include "types/path.h"
#include <fstream>

using namespace GE;

std::ifstream *path::open() {
    std::ifstream *f = new std::ifstream(this->c_str());
    bool result = f->good();
    return f;
}