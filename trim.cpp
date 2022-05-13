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

unsigned int string_length(const char *inString) {
    unsigned int str_length = 0;
    char *temp_pointer;
    for (temp_pointer = inString; *temp_pointer != '\0'; temp_pointer++) {
        str_length++;
    }
    return str_length;
}

const char *trim_left(const char *inString) {
    return nullptr;
}

char *map_chars(const char *inString, char *buffer) {
    return nullptr;
}
