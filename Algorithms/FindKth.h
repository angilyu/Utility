#ifndef PRACTICE_FIND_KTH
#define PRACTICE_FIND_KTH
#include <list>
#include <algorithm>
#include <string>
typedef bool Criteria(int number, int pivot);

template <class Type>
Type* partition(Type* array, int size, Criteria criteria, int pivot) {
    Type* pHead = array;
    Type* pTail = array + size - 1;
    while (pHead != pTail) {
        if (criteria(*pHead, pivot)) {
            pHead++;
            continue;
        }
        if (!criteria(*pTail, pivot)) {
            pTail--;
            continue;
        }
        std::swap(*pHead, *pTail);
        if (pHead == pTail - 1)
            break;
        else {
            pHead++;
            pTail--;
        }
    }
    if (!criteria(*pHead, pivot))
        return pHead;
    else
        return pHead + 1;
}

#endif
