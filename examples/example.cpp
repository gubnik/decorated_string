#include "decorated_string.hpp"

#include <iostream>
#include <string>

int main (int argc, char ** argv)
{
    std::string S = decstr::make_decorated("Heil Hitler", decstr::RED);
    std::cout << S << '\n';
}
