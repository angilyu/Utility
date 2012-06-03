#ifndef UTILITY_HEAP_ALGORITHM_H
#define UTILITY_HEAP_ALGORITHM_H
#include <algorithm>
#include <iostream>
namespace detail {
inline int getParentIndex(int childIndex) {
    if (childIndex == 0) {
        return -1;
    } else {
        return (childIndex - 1) / 2;
    }
}
inline int getLeftChildIndex(int parentIndex, int tailIndex) {
    int left = parentIndex * 2 + 1;
    if (left <= tailIndex) {
        return left;
    }
    return -1;
}
inline int getRightChildIndex(int parentIndex, int tailIndex) {
    int right = parentIndex * 2 + 2;
    if (right <= tailIndex) {
        return right;
    }
    return -1;
}

} // end of detail namespace

typedef bool Comparator(int elem1, int elem2);

template <class Elem, class Comparator>
bool isValidHeap(Elem* array, int headIndex, int tailIndex, Comparator comp) {
    using namespace detail;

    int leftIndex = getLeftChildIndex(headIndex, tailIndex); 
    int rightIndex = getRightChildIndex(headIndex, tailIndex);

    const Elem& parent = array[headIndex];

    // make sure parent is smaller than all its children
    if ((leftIndex != -1 && !comp(parent, array[leftIndex])) ||
        (rightIndex != -1 && !comp(parent, array[rightIndex]))) {
        return false;
     }

    return (leftIndex == -1 || isValidHeap(array, leftIndex, tailIndex, comp)) &&
           (rightIndex == -1 || isValidHeap(array, rightIndex, tailIndex, comp));
}

template <class Elem, class Comparator>
void SiftUp(Elem* array, int tailIndex, Comparator comp) {
    using namespace detail;
    int parentIndex = getParentIndex(tailIndex);
    if (parentIndex == -1)
        return;
    if (comp(array[parentIndex], array[tailIndex]) == false) {
        std::swap(array[parentIndex], array[tailIndex]);
        SiftUp(array, parentIndex, comp);
    }
}

template <class Elem, class Comparator>
void SiftDown(Elem* array, int headIndex, int tailIndex, Comparator comp) {
    using namespace detail;
    int leftChild = getLeftChildIndex(headIndex, tailIndex);
    int rightChild = getRightChildIndex(headIndex, tailIndex);
    int nextParent;
    bool leftMoveToParent = 
        (leftChild != -1 && rightChild != -1 && comp(array[leftChild], array[headIndex]) && comp(array[leftChild], array[rightChild])) ||
        (leftChild != -1 && rightChild == -1 && comp(array[leftChild], array[headIndex]));
    bool rightMoveToParent = 
        (leftChild != -1 && rightChild != -1 && comp(array[rightChild], array[headIndex]) && comp(array[rightChild], array[leftChild])) || 
        (leftChild == -1 && rightChild != -1 && comp(array[rightChild], array[headIndex]));
    if (leftMoveToParent) {
        nextParent = array[leftChild];
        std::swap(array[headIndex], array[leftChild]);
        SiftDown(array, leftChild, tailIndex, comp);
    }
    else if (rightMoveToParent){
        nextParent = array[rightChild];
        std::swap(array[headIndex], array[rightChild]); 
        SiftDown(array, rightChild, tailIndex, comp);
    } 
    return;
}

#endif
