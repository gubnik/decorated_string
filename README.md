# Decorated String
A small lib for wrapping `std::string` with ANSI Escape codes. Only works for environments with ANSI Escape codes support (Linux terminal, for example)

# Specifics
Decorated String is split in 3 headers: **decstr_enum** is a main header that provides enum definitions, **decstr_def** contains runtime functions definitions and **decstr_comptime** provides compile-time functions definitions.\
**decstr_comptime** must be used with **C++20**, as it containst *consteval*. Other headers must work for versions above C++11.\
The lib was tested on *x86_64 Arch Linux* system with *GCC 13.2.1*.

# How to use
Copy the headers into your project and just include them.

# Known issues
- Including **decstr_def** bloats the executable (because `consteval` is `inline`)
- High text intensity may not work in `make_decorated()` function of **decstr_def** header
