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

unsigned int string_length( const char *inString) {
    if (inString == nullptr) {
        return 0;
    }
    const char* end = inString;
    for( ; *end != '\0'; ++end)
        ;
    return end - inString;
}

//const char *trim_left(const char *inString) {
//    if (inString == nullptr) {
//        return 0;
//    }
//    for (int i )
//
////}

char *map_chars(const char *inString, char *buffer) {
    return nullptr;
}
