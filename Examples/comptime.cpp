#include "../decstr_comptime.hpp"

int main (int argc, char ** argv)
{
    constexpr std::array<char, 8> arr = decstr::make_decorator_array
        <decstr::RED, decstr::DEFAULT, decstr::NONE>();
        //= {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
}
