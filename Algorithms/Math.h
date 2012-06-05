#ifndef WENJING_UTIL_MATH_H
#define WENJING_UTIL_MATH_H

namespace wenjing{
namespace util{

///
/// sqrt() uses the binary search style approach to calculate the 
/// square root of a specific number.
///
/// @param number should be greater or equal to zero
///
/// @return returns the best guess of square root
//          if the input is invalid, return -1
double sqrt(double number);

} // end namespace util
} // end namespace wenjing

#endif
