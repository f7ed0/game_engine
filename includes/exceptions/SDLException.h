#ifndef GE_SDLEXCEPTION_HEADER
#define GE_SDLEXCEPTION_HEADER

#include <exception>

namespace GE
{
    class SDLException : public std::exception {
    private:
        const char *info;

    public:
        SDLException(const char *info);

        const char *what() const noexcept override;
    };

}

#endif