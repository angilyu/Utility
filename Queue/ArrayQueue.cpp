#include <iostream>
#include <list>
#include "ArrayQueue.h"

using namespace std;

ArrayQueue::ArrayQueue(int queueSize): 
         size(queueSize), array(new int[queueSize])  {
    // Change to C++ style initialization
    headIndex = 0;
    tailIndex = 0;
    count = 0;
}
bool ArrayQueue::isFull() const {
    return count == size;
}
bool ArrayQueue::isEmpty()  const {
    return count == 0;
}
bool ArrayQueue::enQueue(int elem) {
    array[tailIndex] = elem; 
    if (isFull())
        return false;
    tailIndex++;
    if (tailIndex >= size) {
        tailIndex -= size;
    }
    count++;
    return true;
}
int ArrayQueue::deQueue() {
    if (isEmpty()) {
        throw InvalidQueueOperation();
    }
    
    int result = array[headIndex % size];
    headIndex++;
    if (headIndex >= size) {
        headIndex -= size;
    }
    count--;
    return result;
}
void ArrayQueue::printArray() const {
    int tail;
    if (tailIndex < headIndex) {
        tail = tailIndex + size; 
    } else {
        tail = tailIndex;
    }
    for (int i = headIndex; i < tail; i++) {
        cout<<array[i % size]<<"\t";
    }
    cout<<endl;
}
