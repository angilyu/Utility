#ifndef PRACTICE_PARTITION_ANYTYPE
#define PRACTICE_PARTITION_ANYTYPE
#include <list>
#include <string>
typedef bool Criteria(std::string name);

bool lessThan(int number, int poivt);

template <class Type>
Type* partition(Type* array, int size, Criteria criteria) {
    Type* pHead = array;
    Type* pTail = array + size - 1;
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

#endif
