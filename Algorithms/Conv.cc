#include <cctype>
#include <cassert>

namespace wenjing{
namespace util{

int toInt(const char* str) {
    // process sign
    bool negative = *str == '-';
    if (*str == '+' || *str == '-')
        ++str;

    int sum = 0;
    while (*str != '\0') {
        assert(isdigit(*str));
        sum = sum * 10 + (*str - '0');
        ++str;
    }
    return negative ? -sum : sum;
}
double toDouble(const char* str) {
    bool isNegative = false;
    if (*str == '-' || *str == '+') {
        isNegative = *str == '-';
        str++;
    }

    int numerator = 1;
    // dotFound indicates if we've found the '.'
    bool dotFound = false;
    double sum = 0;

    while (*str != '\0') {
        if (*str == '.') {
            // '.' shouldn't appear more than once
            assert(!dotFound);
            dotFound = true;
        } else {
            if (dotFound) {
                numerator *= 10;
            }
            sum = sum * 10 + *str - '0';
        }
        ++str;
    }
    return isNegative ? -(sum / numerator) : (sum / numerator);
}
} // end namespace util
} // end namespace wenjing
