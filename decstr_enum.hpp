
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
}
