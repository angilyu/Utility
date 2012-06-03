#include <iostream>
#include <cassert>
#include "PriorityQueue.h"
#include "HeapAlgorithm.h"

#include <functional>
#include <string>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    less<int> min;
    greater<int> max;

    //Test SiftUp
    {
        int array[] = {10, 20, 30, 40};
        assert(isValidHeap(array, 0, 0, min));
        SiftUp(array, 0, min);
        assert(isValidHeap(array, 0, 0, min));
    }
    {
        int array[] = {10, 20, 30, 40};
        assert(isValidHeap(array, 0, 3, min));
        SiftUp(array, 3, min);
        assert(isValidHeap(array, 0, 3, min));
    }
    {
        int array[] = {10, 20, 30, 4};
        assert(isValidHeap(array, 0, 3, min) == false);
        SiftUp(array, 3, min);
        assert(isValidHeap(array, 0, 3, min));
    }
    {
        int array[] = {10, 20, 30, 40, 50, 6};
        assert(isValidHeap(array, 0, 5, min) == false);
        SiftUp(array, 5, min);
        assert(isValidHeap(array, 0, 5, min));
    }
    {
        int array[] = {10, 20, 3, 40, 50, 60, 70};
        assert(isValidHeap(array, 0, 6, min) == false);
        SiftUp(array, 6, min);
        assert(isValidHeap(array, 0, 6, min) == false);
    }
    {
        int array[] = {10, 20, 30, 40};
        assert(isValidHeap(array, 0, 3, max) == false);
    }
    {
        int array[] = {4, 3, 2, 10};
        assert(isValidHeap(array, 0, 3, max) == false);
        SiftUp(array, 3, max);
        assert(isValidHeap(array, 0, 3, max));
    }

    //Test SiftDown
    {
        int array[] = {10, 2, 3, 4};
        assert(isValidHeap(array, 0, 3, min) == false);
        SiftDown(array, 0, 3, min);
        assert(isValidHeap(array, 0, 3, min));
    }
    {
        int array[] = {10, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
        assert(isValidHeap(array, 0, 13, min) == false);
        SiftDown(array, 0, 13, min);
        assert(isValidHeap(array, 0, 13, min));
    }
    {
        int array[] = {70, 20, 30, 40, 50, 6, 7};
        assert(isValidHeap(array, 0, 6, min) == false);
        SiftDown(array, 0, 6, min);
        assert(isValidHeap(array, 0, 6, min) == false);
    }

    //Test Priority Queue Insert
    PriorityQueue queue(3);
    assert(queue.Insert(10));
    assert(*queue.Pick() == 10);
    assert(queue.Insert(20));
    assert(*queue.Pick() == 10);
    assert(queue.Insert(4));
    assert(*queue.Pick() == 4);
    assert(queue.Insert(8) == false);
    assert(*queue.Pick() == 4);
    //Test Priority Queue Remove
    assert(queue.Remove());
    assert(*queue.Pick() == 10);
    assert(queue.Remove());
    assert(*queue.Pick() == 20);
    assert(queue.Remove());
    assert(queue.Remove() == false);

}
