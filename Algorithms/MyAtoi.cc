#include <iostream>
using namespace std;

int toInt(const char* str) {
    // process sign
    bool negative = *str == '-';
    if (*str == '+' || *str == '-')
        ++str;

    int sum = 0;
    while (*str != '\0') {
        assert(isDigit(*str));
        sum = sum * 10 + (*str - '0');
        ++str;
    }
    return negative ? -sum : sum;
}

int MyAtoi(const char* s) {
    const char* pos = s;
    int result = 0;
    bool negative = false;
    while (*pos != '\0') {
        // FIXME you may consider to move the following 'if' statement
        // out of the while loop.
        if (s == pos && *pos == '-') {
            negative = true;
            pos++;
            continue;
        }
        if (*pos < '0' || *pos > '9') {
            return 0;
        } else {
            result = result * 10 + (*pos - '0');
        }
        pos++;
    }
    // FIXME: this is not a very good style
    if (negative) {
        result =  0 - result;
    }
    return result;
}
int main(int argc, char** argv) {
    cout<<MyAtoi("321")<<endl;
    cout<<MyAtoi("abc")<<endl;
    cout<<atoi("abc")<<endl;
    cout<<MyAtoi("-123")<<endl;
    cout<<atoi("-123")<<endl;
}
