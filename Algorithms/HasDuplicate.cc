//1. Given a sorted array, how can we know if the array have duplicated characters.
#include <iostream>
#include <algorithm>
using namespace std;

namespace wenjing{
namespace util{
bool hasDuplication(const char* array) {
    if (*array == '\0')
        return false;
    const char* p = array + 1;
    while (*p != '\0') {
        if (*p == *(p - 1)) {
            return true;
        }
        ++p;
    }
    return false;
}
}   // end util namespace
}   // end wenjing namespace

int main(int argc, char** argv) {
    char array[] = "I realI";
    sort(array, array + sizeof(array) - 1);
    cout<<array<<endl;
    cout<<wenjing::util::hasDuplication(array)<<endl;;
}
