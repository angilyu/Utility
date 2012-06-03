#include <iostream>
using namespace std;
void InplaceMerge(int* array1, int* p1, int* array2, int* p2, int* result) {
    if (p1 != array1 - 1 && p2 != array2 - 1) {
        *result-- = *p1 > *p2? *p1--: *p2--;
    } else if (p1 == array1 - 1 && p2 != array2 - 1) {
        *result-- = *p2--;
    } else if (p1 != array1 - 1 && p2 == array2 - 1) {
        *result-- = *p1--;
    } else {
        return;
    }
    InplaceMerge(array1, p1, array2, p2, result);
}
int main(int argc, char** argv) {
    int array1[] = {1, 3, 5, 10, 15, -1, -1, -1, -1, -1, -1};
    int size1 = 5;
    for (int i=0; i < size1; i++) {
        cout<<array1[i]<<"\t";
    }
    int array2[] = {2, 3, 5, 20, 23, 30};
    int size2 = 6;
    cout<<endl;
    for (int i=0; i < size2; i++) {
        cout<<array2[i]<<"\t";
    }
    InplaceMerge(array1, array1 + size1 - 1, array2, array2 + size2 - 1, array1 + size1 + size2 - 1);
    cout<<endl;
    for (int i=0; i < size1 + size2; i++) {
        cout<<array1[i]<<"\t";
    }
}
