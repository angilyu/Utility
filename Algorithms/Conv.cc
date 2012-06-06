#include <iostream>
#include <cctype>
#include <cassert>
using namespace std;

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

} // end namespace util
} // end namespace wenjing
