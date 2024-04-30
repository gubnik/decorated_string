
#include <string>
#include <array>

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

    enum ansi_special
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
    std::string make_decorated (const std::string&,
            decstr::ansi_colour,
            decstr::ansi_intensity,
            decstr::ansi_special
            );
}

std::string decstr::make_decorated (const std::string& strref,
        decstr::ansi_colour colour,
        decstr::ansi_intensity intensity = decstr::DEFAULT,
        decstr::ansi_special special = decstr::NONE
    )
{
    int imod = (intensity == 0) ? 0 : (intensity == 1) ? 60 : 70;
    std::string ret = "\033["
        + std::to_string((int) special)
        + ';'
        + std::to_string(30 + colour + imod)
        + 'm';
    ret += strref;
    ret += "\033[m";
    return ret;
}
