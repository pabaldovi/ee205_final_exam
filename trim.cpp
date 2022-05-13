///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_final_exam - EE 205 - Spr 2022
///
/// @file trim.cpp
/// @version 1.0
///
/// @author Paulo Baldovi <pbaldovi@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////
#include "trim.h"
#include "stdlib.h"
unsigned int string_length( const char *inString) {
    if (inString == nullptr) {
        return 0;
    }
    const char* end = inString;
    for( ; *end != '\0'; ++end)
        ;
    return end - inString;
}

const char *trim_left(const char *inString) {
    int initial_str_length = string_length(inString);
    char trimmed_str[initial_str_length];
    if (inString == nullptr) {
        return 0;
    }
    for (int i = 0; i < initial_str_length; i++) {
        if (inString[i] != '-') {
            trimmed_str[i] = inString[i];
        }
    }
    return trimmed_str;
}

char *map_chars(const char *inString, char *buffer) {
    int initial_str_length = string_length(inString);
    char from_char;
    char to_char;

    if (inString == nullptr) {
        return 0;
    }

    for (int i = 0; i < initial_str_length; i++) {
        switch (inString[i]){
            case 'a':
                buffer[i] = 'n'
            case '':
                buffer[i] = 'n'
        }

    }

//    return nullptr;
}
