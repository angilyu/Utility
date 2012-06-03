#include <iostream>
#include <list>
#include <cassert>
using namespace std;

int* PartitionZero(int* array, int size) {
    int* pHead = array;
    int* pTail = array + size - 1;
    while (pHead != pTail) {
        if (*pHead < 0) {
            pHead++;
            continue;
        }
        if (*pTail >= 0) {
            pTail--;
            continue;
        }
        swap(*pHead, *pTail);
        if (pHead == pTail - 1)
            break;
        else {
            pHead++;
            pTail--;
        }
    }
    if (*pHead >= 0)
        return pHead;
    else
        return pHead + 1;
}
int main(int argc, char** argv) {
    //int array[] = {-3, -10, 3, 6, 10, 2, 0, 11, -5, -3};
    int array[] = {3, 10, 3, 6, 10, -2, -1, -11, -5, -3};
    int size = 10;
    int* middle = PartitionZero(array, size);
    for (int* i = array; i < middle; i++) {
        cout<<*i<<"\t";
    }
    cout<<endl;
    for (int* i = middle; i < array + size; i++) {
        cout<<*i<<"\t";
    }
}
