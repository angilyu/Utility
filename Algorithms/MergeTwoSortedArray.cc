#include <iostream>
using namespace std;
void MergeTwoSortedArray(int* array1, int size1, int* array2, int size2, int* result) {
    int* p1 = array1;
    int* p2 = array2;
    int* pResult = result;
    while (p1 != array1 + size1 || p2 != array2 + size2) {
        if (p1 == array1 + size1) {
            *pResult++ = *p2++;
        } else if (p2 ==  array2 + size2) {
            *pResult++ = *p1++;
        } else if (*p1 <= *p2) {
            *pResult++ = *p1++;
        } else if (*p1 > *p2) {
            *pResult++ = *p2++;
        }
    }
}

int main(int argc, char** argv) {
    int array1[] = {1, 4, 5, 6, 20};
    int array2[] = {2, 4, 5, 23, 30, 50};
    int result[11];
    MergeTwoSortedArray(array1, 5, array2, 6, result);
    for (int i=0; i < 11; i++) {
        cout<<result[i]<<"\t";
    }
}
