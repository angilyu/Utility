#include <iostream>
using namespace std;
int MyAtoi(const char* s) {
    const char* pos = s;
    int result = 0;
    bool negative = false;
    while (*pos != '\0') {
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
