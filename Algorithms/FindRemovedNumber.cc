#include <iostream>
#include "FindKth.h"
using namespace std;

bool lessThan(int number, int poivt) {
    if (number < poivt)
        return true;
    else 
        return false;
}
int FindRemovedNumber(int* array, int size, int from, int to) {
    if (size == 0) {
        return from;
    }
    int median = (from + to) / 2;
    int* pMedian = partition(array, size, lessThan, median);
    if (pMedian - array == median - from) {
        return FindRemovedNumber(pMedian + 1, size - (pMedian - array) - 1, median + 1, to);
    } else {
        return FindRemovedNumber(array, pMedian - array, from, median - 1);
    }
}
int main(int argc, char** argv) {
    int array[] = {2, 1, 7, 5, 4, 6, 3};
    int size = 7;
    int n = 8;
    cout<<FindRemovedNumber(array, size, 1, n)<<endl;
}
