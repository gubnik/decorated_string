#include <decstr_def.hpp>
#include <iostream>

int main (int argc, char ** argv)
{
    // Makes a red string
    std::string S1 = decstr::make_decorated("Balls", decstr::RED);
    std::cout << S1 << '\n';

    // Makes a bold blue string with high background intensity
    std::string S2 = decstr::make_decorated("Balls", decstr::BLUE, decstr::TEXT, decstr::UNDERLINED);
    std::cout << S2 << '\n';
}
