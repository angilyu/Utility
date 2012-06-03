#include <list>
#include <iostream>
#include <cassert>
using namespace std;
typedef bool Criteria(int number);

bool MoreThanSix(int number) {
    if (number > 6)
        return true;
    else
        return false;
}
int* partition(int* array, int size, Criteria criteria) {
    int* pHead = array;
    int* pTail = array + size - 1;
    while (pHead != pTail) {
        if (criteria(*pHead)) {
            pHead++;
            continue;
        }
        if (!criteria(*pTail)) {
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
    if (!criteria(*pHead))
        return pHead;
    else
        return pHead + 1;
}
int main(int argc, char** argv) {
    int array[] = {-4, 9, 0, -2, 10, 30, 5, 8};
    int size = 8;
    int* middle = partition(array, size, MoreThanSix);
    for (int* i = array; i < middle; i++) {
        cout<<*i<<"\t";
    }
    cout<<endl;
    for (int* i = middle; i < array + size; i++) {
        cout<<*i<<"\t";
    }
}
