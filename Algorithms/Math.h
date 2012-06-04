#ifndef WENJING_UTIL_MATH_H
#define WENJING_UTIL_MATH_H

namespace wenjing{
namespace util{

///
/// sqrt() uses the binary search style approach to calculate the 
/// square root of a specific number.
///
/// @param current
/// @param lowBound
/// @param upBound
/// @param number
///
/// @return returns the best guess of square root
double sqrt(double current, double lowBound, 
            double upBound, double number);

} // end namespace util
} // end namespace wenjing

#endif
