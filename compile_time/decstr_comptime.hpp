#include "decstr_enum.hpp"
#include <array>

namespace decstr
{
    template <decstr::ansi_colour C, decstr::ansi_intensity I, decstr::ansi_special S>
    consteval std::array<char, 8> make_decorator_array ()
    {
        std::array<char, 8> ret =
        {
            '\033',
            '[',
            '0' + S,
            ';',
            (I == 2) ? '1' : '0',
            (I == 2) ? '0' : (I == 1) ? '9' : '3',
            '0' + C,
            'm'
        };
        return ret;
    }
}
