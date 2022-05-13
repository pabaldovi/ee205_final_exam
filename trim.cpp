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
    char prev_char;
    if (inString == nullptr) {
        return 0;
    }

    //copy starting from first alpha char
    for (int i = 0; i < initial_str_length; i++) {
        if (i > 0){
            prev_char = inString[i - 1];
        }

        if (prev_char =='-' && inString[i] != '-') {
            trimmed_str[i] = inString[i];
        }
    }
    return trimmed_str;
}

char *map_chars(const char *inString, char *buffer) {
    int initial_str_length = string_length(inString);
    char mapped_str[100];
    if (inString == nullptr) {
        return 0;
    }

    //copy buffer
    for (int i = 0; buffer[i] != '\0'; ++i) {
        mapped_str[i] = buffer[i];
    }

    //iterate through str and replace
    for (int i = 0; i < initial_str_length; i++) {
        switch (inString[i]){
            case 'a':
                mapped_str[i] = 'n';
                break;
            case 'b':
                mapped_str[i] = 'p';
                break;
            case 'c':
                mapped_str[i] = 'j';
                break;
            case 'd':
                mapped_str[i] = 't';
                break;
            case 'e':
                mapped_str[i] = 'b';
                break;
            case 'f':
                mapped_str[i] = 'm';
                break;
            case 'g':
                mapped_str[i] = 'x';
                break;
            case 'h':
                mapped_str[i] = 's';
                break;
            case 'i':
                mapped_str[i] = 'v';
                break;
            case 'j':
                mapped_str[i] = 'w';
                break;
            case 'k':
                mapped_str[i] = 'r';
                break;
            case 'l':
                mapped_str[i] = 'g';
                break;
            case 'm':
                mapped_str[i] = 'f';
                break;
            case 'n':
                mapped_str[i] = 'a';
                break;
            case 'o':
                mapped_str[i] = 'k';
                break;
            case 'p':
                mapped_str[i] = 'e';
                break;
            case 'q':
                mapped_str[i] = 'y';
                break;
            case 'r':
                mapped_str[i] = 'i';
                break;
            case 's':
                mapped_str[i] = 'z';
                break;
            case 't':
                mapped_str[i] = 'u';
                break;
            case 'u':
                mapped_str[i] = 'o';
                break;
            case 'v':
                mapped_str[i] = 'q';
                break;
            case 'w':
                mapped_str[i] = 'h';
                break;
            case 'x':
                mapped_str[i] = 'l';
                break;
            case 'y':
                mapped_str[i] = 'c';
                break;
            case 'z':
                mapped_str[i] = 'd';
                break;
        }
    }
    return mapped_str;
}
