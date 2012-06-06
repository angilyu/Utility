#ifndef WENJING_UTIL_CONV_H
#define WENJING_UTIL_CONV_H

namespace wenjing{
namespace util{
/// toInt convert string to int
///
/// @param string should be made of digit, '-' and '+'
/// @return integer value
int toInt(const char* str);

/// toDouble convert string to double
/// 
/// @param string should be made of digit, dot, '-' and '+'
/// @return double value
double toDouble(const char* str);

} // end namespace util
} // end namespace wenjing

#endif
