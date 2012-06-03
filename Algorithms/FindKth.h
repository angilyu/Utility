#ifndef PRACTICE_FIND_KTH
#define PRACTICE_FIND_KTH
#include <list>
#include <algorithm>
#include <string>
typedef bool Criteria(int number, int poivt);

template <class Type>
Type* partition(Type* array, int size, Criteria criteria, int poivt) {
    Type* pHead = array;
    Type* pTail = array + size - 1;
    while (pHead != pTail) {
        if (criteria(*pHead, poivt)) {
            pHead++;
            continue;
        }
        if (!criteria(*pTail, poivt)) {
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
    if (!criteria(*pHead, poivt))
        return pHead;
    else
        return pHead + 1;
}

#endif
