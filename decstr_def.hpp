#include "decstr_enum.hpp"

#include <string>

namespace decstr
{
    enum ansi_colour : unsigned char
    {
        BLACK = 0,
        RED = 1,
        GREEN = 2,
        YELLOW = 3,
        BLUE = 4,
        MAGENTA = 5,
        CYAN = 6,
        WHITE = 7,
    };

    enum ansi_intensity : unsigned char
    {
        DEFAULT = 0,
        TEXT = 1,
        BG = 2,
    };

    enum ansi_special : unsigned char
    {
        NONE = 0, 
        BOLD = 1,
        UNDERLINED = 4,
    };
    
    /* Creates a decorated string
     * @param colour    - colour of the string inside the decorator
     * @param intensity - intensity of the string inside the decorator (default/background/text)
     * @param special   - none/bold/underlined
     */
    std::string make_decorated (const std::string& strref,
            decstr::ansi_colour C = WHITE,
            decstr::ansi_intensity I = DEFAULT,
            decstr::ansi_special S = NONE
            )
    {
        std::string ret = "\033[" +
            std::to_string(S) +
            ';' +
            std::to_string(30 + C + (!I) ? (50 + 10 * I) : 0) +
            "m";
        ret += strref + "\033[m";
        return ret;
    }
}
