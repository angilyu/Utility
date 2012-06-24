#include <iostream>
#include <string>
using namespace std;
namespace wenjing{
namespace util{

char* Find(char* haystack, int size1, char* needle, int size2) {
    char* pStr = haystack;
    while (pStr - haystack < size1) {
        if (strncmp(pStr, needle, size2) == 0) {
            return pStr;
        }
        pStr++;
    }
    return NULL;
}
} // end namespace util
} // end namespace wenjing
