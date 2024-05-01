#include "../decstr_comptime.hpp"

#include <iostream>

std::ostream& operator<< (std::ostream& out, const std::array<char, 8>& arr)
{
    for (auto& it : arr) out << it;
    return out;
}

int main (int argc, char ** argv)
{
    // Generates an array of chars that contain a decorator
    constexpr std::array<char, 8> arr = decstr::make_decorator_array<decstr::RED, decstr::DEFAULT, decstr::NONE>();
    
    // Outputs red "Hello git!" string
    std::cout << arr << "Hello git!\n" << "\033[m";
}
