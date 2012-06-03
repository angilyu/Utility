#include <iostream>
using namespace std;
int BinarySearch(int* array, int lowBound, int upBound, int number) {
    if (upBound < lowBound)
        return -1;
    int middle = lowBound + (upBound - lowBound) / 2;
    if (array[middle] == number) {
        return middle;
    } else if (array[middle] > number) {
        return BinarySearch(array, lowBound, middle - 1, number);
    } else {
        return BinarySearch(array, middle + 1, upBound, number);
    }
}
int BinarySearchLoop(int* array, int lowBound, int upBound, int number) {
    int middle;
    int result = -1;
    while (lowBound <= upBound) {
        middle = lowBound + (upBound - lowBound) / 2;
        if (array[middle] == number) {
            result = middle;
            break;
        } else if (array[middle] > number) {
            upBound = middle - 1;
        } else {
            lowBound = middle + 1;
        }
    }
    return result;
}
int ShiftedSearch(int* array, int lowBound, int upBound, int number) {
    if (lowBound > upBound) {
        return -1;
    }
    int middle = lowBound + (upBound - lowBound) / 2;
    if (array[middle] == number) {
        return middle;
    } else if (array[lowBound] < array[middle]) {  //left is a sorted array
        if (number >= array[lowBound] && number < array[middle]) {
            return BinarySearch(array, lowBound, middle - 1, number);
        } else {
            return ShiftedSearch(array, middle + 1, upBound, number);
        }
    } else {  //right is a sorted array
        if (number > array[middle] && number <= array[upBound]) {
            return BinarySearch(array, middle + 1, upBound, number);
        } else {
            return ShiftedSearch(array, lowBound, middle - 1, number);
        }
    }
}
int main(int argc, char** argv) {
    int array[] = {7, 8, 9, 11, 30, 35, 39, 90, 1, 4, 5};
    int size = 11;
    //cout<<BinarySearch(array, 0, size - 1, 30)<<endl;
    //cout<<BinarySearchLoop(array, 0, size - 1, -1)<<endl;
    cout<<ShiftedSearch(array, 0, size - 1, 6)<<endl;
}
