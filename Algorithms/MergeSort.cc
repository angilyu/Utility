#include <iostream>
using namespace std;
void Merge(int* array, int* temp, int left, int right, int middle) {
    int* pLeft = array + left;
    int* pRight = array + middle;
    int* pTemp = temp + left;
    while (pTemp <= temp + right) {
        if (pLeft == array + middle) {
            *pTemp++ = *pRight++;
            continue;
        }
        if (pRight == array + right + 1) {
            *pTemp++ = *pLeft++;
            continue;
        }
        if (*pLeft <= *pRight) {
            *pTemp++ = *pLeft++;
        } else {
            *pTemp++ = *pRight++; 
        }
    }
    for (int i = left; i <= right; i++) {
        array[i] = temp[i];
    }
}
void MergeSort(int* array, int* temp, int size, int left, int right) {
    if (size <= 1) {
        return;
    }
    int middle = left + (right - left + 1) / 2;
    MergeSort(array, temp, middle - left, left, middle - 1);
    MergeSort(array, temp, size + left - middle, middle, right);
    Merge(array, temp, left, right, middle);
}
int main(int argc, char** argv) {
    int array[] = {9, 2, 4, 1, 10, 13, 8, 2, 11, -4};
    int size = 10;
    int* temp = new int[size];
    MergeSort(array, temp, size, 0, size - 1);
    for (int i = 0; i < size; i++) {
        cout<<array[i]<<"\t";
    }
}
