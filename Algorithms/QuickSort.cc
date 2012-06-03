#include "FindKth.h"
#include <algorithm>
#include <iostream>
using namespace std;
bool lessThan(int number, int poivt) {
    if (number < poivt)
        return true;
    else 
        return false;
}
void QuickSort(int* array, int size) {
    if (size == 1)
        return;
    int poivt = array[0];
    int* median = partition(array + 1, size - 1, lessThan, poivt);
    swap(*(median - 1), array[0]);
    if (median - array >= 2) {
        QuickSort(array, median - array - 1);
    }
    if (median != array + size) {
        QuickSort(median, array + size - median);
    }
}

int main(int argc, char** argv) {
    int array[] = {10, 30, 12, 14, -7, 8, 9, 20};
    //int array[] = {4, 7, 8, 9, 20, 1, 3, 2, 30};
    int size = 8;
    QuickSort(array, size);
    for (int i = 0; i < size; i++) {
        cout<<array[i]<<"\t";
    }
}
