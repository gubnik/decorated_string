# Decorated String 0.1.0
A small lib for wrapping `std::string` with ANSI Escape codes. Only works for environments with ANSI Escape codes support (Linux terminal, for example).

# Specifics
Decorated String is split in 3 headers: **decstr_enum** is a main header that provides enum definitions, **decstr_def** contains runtime functions definitions and **decstr_comptime** provides compile-time functions definitions.\
**decstr_comptime** must be used with **C++20**, as it contains *consteval*. Other headers work for versions above C++11.\
The lib was tested on *x86_64 Arch Linux* system with *GCC 13.2.1*.

# How to use
## For runtime:
1. `git clone https://github.com/gubnik/decorated_string`
2. `cd decorated_string/runtime`
3. `sudo make install`
4. Don't forget to link *libdecstr.so.%VERSION%`
## For compile time
1. Copy the header in your project dir
2. Include it (see "Known issues")

# Known issues
- **!! IMPORTANT !!** I'm not sure if my way of doing `make install` is the correct one. It works for my 3 machines (Arch, Gentoo, Ubuntu) but it may still break.
- Including **decstr_comptime** bloats the executable (because `consteval` is `inline`)
- High text intensity may not work in `make_decorated()` function of **decstr_def** header
