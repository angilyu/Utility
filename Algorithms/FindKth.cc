#include <cassert>
#include <iostream>
#include <time.h>
#include "FindKth.h"

using namespace std;
bool lessThan(int number, int pivot) {
    if (number < pivot)
        return true;
    else 
        return false;
}
int FindKthNumber(int* array, int size, int k) {
    int pivot =  array[0];
    if (size == 1) {
        return pivot;
    }
    cout<<"pivot: "<<pivot<<"\t";
    int kth;
    int* middle = partition(array + 1, size - 1, lessThan, pivot);
    cout<<middle - array<<endl;
    swap(*(middle - 1), array[0]);
    if (middle - array > k) {
        //find before middle
        kth = FindKthNumber(array, middle - array - 1, k);
    } else if (middle - array == k) {
        kth =  pivot;
    } else {
        //find >= middle
        kth = FindKthNumber(middle, size - (middle - array), k - (middle - array) );
    }
    return kth;
}
int main(int argc, char** argv) {
    //int array[] = {1, 3, 2, 4, 7, 8, 9, 20};
    int array[] = {4, 7, 8, 9, 20, 1, 3, 2, 30};
    int size = 8;
    int second = FindKthNumber(array, size, 2);
    assert(second == 2);
    int fifth = FindKthNumber(array, size, 5);
    assert(fifth == 7);
    int eighth = FindKthNumber(array, size, 8);
    assert(eighth == 20);
}
