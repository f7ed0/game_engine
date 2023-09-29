#ifndef GE_NULLPOINTEREXCEPTION_HEADER
#define GE_NULLPOINTEREXCEPTION_HEADER

#include <exception>

namespace GE
{
    class NullPointerException : public std::exception {
    public:
        NullPointerException();
    };

}

#endif