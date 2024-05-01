#include "../decstr_def.hpp"

int main (int argc, char ** argv)
{
    // Makes a red string
    std::string S1 = decstr::make_decorated("Balls", decstr::RED);
    // Makes a bold blue string with high text intensity
    std::string S2 = decstr::make_decorated("Balls", decstr::BLUE, decstr::TEXT, decstr::BOLD);
}
