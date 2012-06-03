//1. Given a sorted array, how can we know if the array have duplicated characters.
#include <iostream>
#include <algorithm>

using namespace std;

int hasDuplication(const char* array) {
    if (*array == '\0')

        return false;

    const char* p = array + 1;
    char pre = *p;
    while (*p != '\0') {
        // write shits here
        if (*p == pre) {
            return true;
        }
        pre = *p;
        ++p;
    }
    return false;
}

int main(int argc, char** argv) {
    char array[] = "I realI";
    sort(array, array + sizeof(array) - 1);
    cout<<array<<endl;
    cout<<hasDuplication(array)<<endl;;
}
