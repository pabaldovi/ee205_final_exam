#include <iostream>
#include "trim.h"

// Main for String Manipulation
int main() {
    char hello[] = "---Hello, World!---";

    std::cout << hello << std::endl;

    std::cout << "The length of hello[] is = "
              << string_length( hello ) << " characters"
              << std::endl;

    std::cout << "trim_left( hello ) = ["
              << trim_left( hello )
              << "]" << std::endl;

    char buffer[32];
//
//    std::cout << "map_chars( \"hello\", buffer ) = ["
//              << map_chars( "hello", buffer )
//              << "]" << std::endl;

    return 0;
}