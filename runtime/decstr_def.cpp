#include "decstr_def.hpp"

std::string decstr::make_decorated (const std::string& strref,
        decstr::ansi_colour C,
        decstr::ansi_intensity I,
        decstr::ansi_special S)
{
    int imod = (I == 0) ? 0 : (I == 1) ? 60 : 70;
    std::string ret = "\033[" +
        std::to_string(S) +
        ';' +
        std::to_string(30 + C + imod) +
        'm';
    ret += strref + "\033[m";
    return ret;
}
