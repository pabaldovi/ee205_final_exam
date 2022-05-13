///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_final_exam - EE 205 - Spr 2022
///
/// @file trim.h
/// @version 1.0
///
/// @author Paulo Baldovi <pbaldovi@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////
#ifndef EE205_FINAL_EXAM_TRIM_H
#define EE205_FINAL_EXAM_TRIM_H

//return the number of char
unsigned int string_length( const char inString[] );

//return string that has ALL leading dashes
const char* trim_left( const char inString[] );

//return string that copies each char inString to buffer
char* map_chars( const char inString[], char buffer[] )

#endif //EE205_FINAL_EXAM_TRIM_H
