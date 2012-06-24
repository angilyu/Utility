#ifndef WENJING_UTIL_STRING_H
#define WENJING_UTIL_STRING_H

namespace wenjing{
namespace util{

int compactString(char* string, char ch = ' ');

/// Find needle in a haystack
///
/// @param haystack
/// @param size of haystack
/// @param needle
/// @param size of needle
/// @return the head position of the found needle
char* Find(char* haystack, int size1, char* needle, int size2);
} // end namespace util
} // end namespace wenjing
#endif

